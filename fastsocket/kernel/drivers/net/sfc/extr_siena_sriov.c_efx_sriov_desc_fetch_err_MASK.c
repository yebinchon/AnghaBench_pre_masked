
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_vf {int reset_work; int index; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct efx_nic*,unsigned int,struct efx_vf**,unsigned int*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ,unsigned int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;

void FUNC_4(struct efx_nic *VAR_2, unsigned VAR_3)
{
 struct efx_vf *VAR_4;
 unsigned int VAR_5;

 if (FUNC_0(VAR_2, VAR_3, &VAR_4, &VAR_5))
  return;

 if (FUNC_1())
  FUNC_2(VAR_2, VAR_0, VAR_2->net_dev,
     "VF %d DMA Q %d reports descriptor fetch error.\n",
     VAR_4->index, VAR_5);
 FUNC_3(VAR_1, &VAR_4->reset_work);
}
