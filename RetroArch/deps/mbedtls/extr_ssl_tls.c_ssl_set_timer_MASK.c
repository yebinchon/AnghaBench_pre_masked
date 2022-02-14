
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int p_timer; int (* f_set_timer ) (int ,int,int) ;} ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2( mbedtls_ssl_context *VAR_0, uint32_t VAR_1 )
{
    if( VAR_0->f_set_timer == ((void*)0) )
        return;

    FUNC_0( 3, ( "set_timer to %d ms", (int) VAR_1 ) );
    VAR_0->f_set_timer( VAR_0->p_timer, VAR_1 / 4, VAR_1 );
}
