
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mbedtls_pk_type_t ;
struct TYPE_7__ {scalar_t__ tag; scalar_t__ len; } ;
typedef TYPE_1__ mbedtls_asn1_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char const*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3( unsigned char **VAR_4,
                          const unsigned char *VAR_5,
                          mbedtls_pk_type_t *VAR_6, mbedtls_asn1_buf *VAR_7 )
{
    int VAR_8;
    mbedtls_asn1_buf VAR_9;

    FUNC_2( VAR_7, 0, sizeof(mbedtls_asn1_buf) );

    if( ( VAR_8 = FUNC_0( VAR_4, VAR_5, &VAR_9, VAR_7 ) ) != 0 )
        return( VAR_1 + VAR_8 );

    if( FUNC_1( &VAR_9, VAR_6 ) != 0 )
        return( VAR_2 );




    if( *VAR_6 == VAR_3 &&
            ( ( VAR_7->tag != VAR_0 && VAR_7->tag != 0 ) ||
                VAR_7->len != 0 ) )
    {
        return( VAR_1 );
    }

    return( 0 );
}
