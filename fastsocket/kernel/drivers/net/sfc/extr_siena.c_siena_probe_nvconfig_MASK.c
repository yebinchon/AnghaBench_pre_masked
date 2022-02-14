
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efx_nic {int timer_quantum_ns; TYPE_1__* net_dev; } ;
struct TYPE_2__ {int perm_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ,int *,int*) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_1->net_dev->perm_addr, ((void*)0), &VAR_2);

 VAR_1->timer_quantum_ns =
  (VAR_2 & (1 << VAR_0)) ?
  3072 : 6144;
 return VAR_3;
}
