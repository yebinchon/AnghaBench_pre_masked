
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int slow_fill_count; } ;


 int FUNC_0 (struct efx_rx_queue*) ;

void FUNC_1(unsigned long VAR_0)
{
 struct efx_rx_queue *VAR_1 = (struct efx_rx_queue *)VAR_0;


 FUNC_0(VAR_1);
 ++VAR_1->slow_fill_count;
}
