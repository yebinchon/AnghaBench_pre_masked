
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* f_get_timer ) (int ) ;int p_timer; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_ssl_context *VAR_0 )
{
    if( VAR_0->f_get_timer == ((void*)0) )
        return( 0 );

    if( VAR_0->f_get_timer( VAR_0->p_timer ) == 2 )
    {
        FUNC_0( 3, ( "timer expired" ) );
        return( -1 );
    }

    return( 0 );
}
