
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct islpci_membuf {scalar_t__ size; int * mem; scalar_t__ pci_addr; } ;
struct TYPE_4__ {int index_mgmt_tx; int pdev; struct islpci_membuf* mgmt_tx; scalar_t__ control_block; } ;
typedef TYPE_1__ islpci_private ;
struct TYPE_5__ {int * device_curr_frag; } ;
typedef TYPE_2__ isl38xx_control_block ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;

void
FUNC_6(struct net_device *VAR_4)
{
 islpci_private *VAR_5 = FUNC_4(VAR_4);
 isl38xx_control_block *VAR_6 =
     (isl38xx_control_block *) VAR_5->control_block;
 u32 VAR_7;
 VAR_7 = FUNC_3(VAR_6->device_curr_frag[VAR_1]);
 FUNC_1();

 for (; VAR_5->index_mgmt_tx < VAR_7; VAR_5->index_mgmt_tx++) {
  int VAR_8 = VAR_5->index_mgmt_tx % VAR_0;
  struct islpci_membuf *VAR_9 = &VAR_5->mgmt_tx[VAR_8];
  FUNC_5(VAR_5->pdev, VAR_9->pci_addr, VAR_9->size,
     VAR_2);
  VAR_9->pci_addr = 0;
  FUNC_2(VAR_9->mem);
  VAR_9->mem = ((void*)0);
  VAR_9->size = 0;
 }
}
