
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ keep_current_message; scalar_t__ in_msgtype; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5( mbedtls_ssl_context *VAR_2 )
{
    int VAR_3;

    FUNC_0( 2, ( "=> read record" ) );

    if( VAR_2->keep_current_message == 0 )
    {
        do {

            if( ( VAR_3 = FUNC_3( VAR_2 ) ) != 0 )
            {
                FUNC_1( 1, ( "mbedtls_ssl_read_record_layer" ), VAR_3 );
                return( VAR_3 );
            }

            VAR_3 = FUNC_2( VAR_2 );

        } while( VAR_0 == VAR_3 );

        if( 0 != VAR_3 )
        {
            FUNC_1( 1, ( "mbedtls_ssl_read_record_layer" ), VAR_3 );
            return( VAR_3 );
        }

        if( VAR_2->in_msgtype == VAR_1 )
        {
            FUNC_4( VAR_2 );
        }
    }
    else
    {
        FUNC_0( 2, ( "<= reuse previously read message" ) );
        VAR_2->keep_current_message = 0;
    }

    FUNC_0( 2, ( "<= read record" ) );

    return( 0 );
}
