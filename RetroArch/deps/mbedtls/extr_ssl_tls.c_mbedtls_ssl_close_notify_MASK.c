
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ out_left; scalar_t__ state; int * conf; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

int FUNC_4( mbedtls_ssl_context *VAR_4 )
{
    int VAR_5;

    if( VAR_4 == ((void*)0) || VAR_4->conf == ((void*)0) )
        return( VAR_0 );

    FUNC_0( 2, ( "=> write close notify" ) );

    if( VAR_4->out_left != 0 )
        return( FUNC_2( VAR_4 ) );

    if( VAR_4->state == VAR_3 )
    {
        if( ( VAR_5 = FUNC_3( VAR_4,
                        VAR_1,
                        VAR_2 ) ) != 0 )
        {
            FUNC_1( 1, "mbedtls_ssl_send_alert_message", VAR_5 );
            return( VAR_5 );
        }
    }

    FUNC_0( 2, ( "<= write close notify" ) );

    return( 0 );
}
