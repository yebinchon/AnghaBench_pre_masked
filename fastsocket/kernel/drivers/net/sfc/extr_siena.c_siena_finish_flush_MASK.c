
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ fc_disable; } ;


 int FUNC_0 (struct efx_nic*) ;

void FUNC_1(struct efx_nic *VAR_0)
{
 if (--VAR_0->fc_disable == 0)
  FUNC_0(VAR_0);
}
