
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int timer; scalar_t__ fin_ms; scalar_t__ int_ms; } ;
typedef TYPE_1__ mbedtls_timing_delay_context ;


 int FUNC_0 (int *,int) ;

void FUNC_1( void *VAR_0, uint32_t VAR_1, uint32_t VAR_2 )
{
    mbedtls_timing_delay_context *VAR_3 = (mbedtls_timing_delay_context *) VAR_0;

    VAR_3->int_ms = VAR_1;
    VAR_3->fin_ms = VAR_2;

    if( VAR_2 != 0 )
        (void) FUNC_0( &VAR_3->timer, 1 );
}
