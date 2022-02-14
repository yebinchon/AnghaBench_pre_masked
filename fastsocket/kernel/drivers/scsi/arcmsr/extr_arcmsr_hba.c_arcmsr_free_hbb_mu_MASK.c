
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MessageUnit_B {int dummy; } ;
struct AdapterControlBlock {int adapter_type; int dma_coherent_handle_hbb_mu; int pmuB; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_0)
{
 switch (VAR_0->adapter_type) {
 case 130:
 case 128:
  break;
 case 129:{
  FUNC_0(&VAR_0->pdev->dev,
   sizeof(struct MessageUnit_B),
   VAR_0->pmuB, VAR_0->dma_coherent_handle_hbb_mu);
 }
 }
}
