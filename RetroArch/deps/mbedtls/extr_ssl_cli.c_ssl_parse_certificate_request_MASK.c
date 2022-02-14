
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ in_msgtype; int client_auth; scalar_t__* in_msg; int keep_current_message; int in_hslen; scalar_t__ minor_ver; int state; TYPE_1__* transform_negotiate; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_ssl_ciphersuite_t ;
struct TYPE_7__ {int * ciphersuite_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_6( mbedtls_ssl_context *VAR_8 )
{
    int VAR_9;
    unsigned char *VAR_10;
    size_t VAR_11 = 0;
    size_t VAR_12 = 0, VAR_13 = 0;
    const mbedtls_ssl_ciphersuite_t *VAR_14 =
        VAR_8->transform_negotiate->ciphersuite_info;

    FUNC_0( 2, ( "=> parse certificate request" ) );

    if( ! FUNC_2( VAR_14 ) )
    {
        FUNC_0( 2, ( "<= skip parse certificate request" ) );
        VAR_8->state++;
        return( 0 );
    }

    if( ( VAR_9 = FUNC_4( VAR_8 ) ) != 0 )
    {
        FUNC_1( 1, "mbedtls_ssl_read_record", VAR_9 );
        return( VAR_9 );
    }

    if( VAR_8->in_msgtype != VAR_7 )
    {
        FUNC_0( 1, ( "bad certificate request message" ) );
        FUNC_5( VAR_8, VAR_2,
                                        VAR_4 );
        return( VAR_1 );
    }

    VAR_8->state++;
    VAR_8->client_auth = ( VAR_8->in_msg[0] == VAR_5 );

    FUNC_0( 3, ( "got %s certificate request",
                        VAR_8->client_auth ? "a" : "no" ) );

    if( VAR_8->client_auth == 0 )
    {

        VAR_8->keep_current_message = 1;
        goto exit;
    }
    VAR_10 = VAR_8->in_msg;


    VAR_12 = VAR_10[FUNC_3( VAR_8 )];
    VAR_11 = VAR_12;

    if( VAR_8->in_hslen < FUNC_3( VAR_8 ) + 2 + VAR_11 )
    {
        FUNC_0( 1, ( "bad certificate request message" ) );
        FUNC_5( VAR_8, VAR_2,
                                        VAR_3 );
        return( VAR_0 );
    }
    VAR_13 = ( ( VAR_10[FUNC_3( VAR_8 ) + 1 + VAR_11] << 8 )
             | ( VAR_10[FUNC_3( VAR_8 ) + 2 + VAR_11] ) );

    VAR_11 += VAR_13;
    if( VAR_8->in_hslen != FUNC_3( VAR_8 ) + 3 + VAR_11 )
    {
        FUNC_0( 1, ( "bad certificate request message" ) );
        FUNC_5( VAR_8, VAR_2,
                                        VAR_3 );
        return( VAR_0 );
    }

exit:
    FUNC_0( 2, ( "<= parse certificate request" ) );

    return( 0 );
}
