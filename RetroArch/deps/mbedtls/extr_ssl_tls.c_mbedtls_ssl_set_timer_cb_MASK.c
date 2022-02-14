
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_ssl_set_timer_t ;
typedef int mbedtls_ssl_get_timer_t ;
struct TYPE_4__ {int * f_get_timer; int * f_set_timer; void* p_timer; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1( mbedtls_ssl_context *VAR_0,
                               void *VAR_1,
                               mbedtls_ssl_set_timer_t *VAR_2,
                               mbedtls_ssl_get_timer_t *VAR_3 )
{
    VAR_0->p_timer = VAR_1;
    VAR_0->f_set_timer = VAR_2;
    VAR_0->f_get_timer = VAR_3;


    FUNC_0( VAR_0, 0 );
}
