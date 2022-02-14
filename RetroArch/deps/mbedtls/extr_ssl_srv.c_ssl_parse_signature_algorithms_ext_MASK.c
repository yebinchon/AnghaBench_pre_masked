
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* handshake; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_pk_type_t ;
typedef scalar_t__ mbedtls_md_type_t ;
struct TYPE_6__ {int hash_algs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 int FUNC_3 (unsigned char const) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_5,
                                               const unsigned char *VAR_6,
                                               size_t VAR_7 )
{
    size_t VAR_8;

    const unsigned char *VAR_9;
    const unsigned char *VAR_10 = VAR_6 + VAR_7;

    mbedtls_md_type_t VAR_11;
    mbedtls_pk_type_t VAR_12;

    VAR_8 = ( ( VAR_6[0] << 8 ) | ( VAR_6[1] ) );
    if( VAR_8 + 2 != VAR_7 ||
        VAR_8 % 2 != 0 )
    {
        FUNC_0( 1, ( "bad client hello message" ) );
        FUNC_4( VAR_5, VAR_3,
                                        VAR_4 );
        return( VAR_0 );
    }
    for( VAR_9 = VAR_6 + 2; VAR_9 < VAR_10; VAR_9 += 2 )
    {


        if( ( VAR_12 = FUNC_3( VAR_9[1] ) ) == VAR_2 )
        {
            FUNC_0( 3, ( "client hello v3, signature_algorithm ext"
                                        " unknown sig alg encoding %d", VAR_9[1] ) );
            continue;
        }


        VAR_11 = FUNC_2( VAR_9[0] );
        if( VAR_11 == VAR_1 )
        {
            FUNC_0( 3, ( "client hello v3, signature_algorithm ext:"
                                        " unknown hash alg encoding %d", VAR_9[0] ) );
            continue;
        }

        if( FUNC_1( VAR_5, VAR_11 ) == 0 )
        {
            FUNC_5( &VAR_5->handshake->hash_algs, VAR_12, VAR_11 );
            FUNC_0( 3, ( "client hello v3, signature_algorithm ext:"
                                        " match sig %d and hash %d",
                                        VAR_12, VAR_11 ) );
        }
        else
        {
            FUNC_0( 3, ( "client hello v3, signature_algorithm ext: "
                                        "hash alg %d not supported", VAR_11 ) );
        }
    }

    return( 0 );
}
