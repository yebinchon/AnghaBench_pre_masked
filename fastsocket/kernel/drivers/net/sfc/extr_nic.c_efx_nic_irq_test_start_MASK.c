
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int last_irq_cpu; } ;


 int FUNC_0 (struct efx_nic*,int,int) ;
 int FUNC_1 () ;

void FUNC_2(struct efx_nic *VAR_0)
{
 VAR_0->last_irq_cpu = -1;
 FUNC_1();
 FUNC_0(VAR_0, 1, 1);
}
