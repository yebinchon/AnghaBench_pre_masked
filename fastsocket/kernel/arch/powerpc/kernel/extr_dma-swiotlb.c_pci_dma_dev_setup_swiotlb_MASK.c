
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_archdata {scalar_t__ max_direct_dma_addr; } ;
struct TYPE_2__ {struct dev_archdata archdata; } ;
struct pci_dev {TYPE_1__ dev; int bus; } ;
struct pci_controller {scalar_t__ dma_window_size; scalar_t__ dma_window_base_cur; } ;


 struct pci_controller* FUNC_0 (int ) ;

void FUNC_1(struct pci_dev *VAR_0)
{
 struct pci_controller *VAR_1;
 struct dev_archdata *VAR_2;

 VAR_1 = FUNC_0(VAR_0->bus);
 VAR_2 = &VAR_0->dev.archdata;
 VAR_2->max_direct_dma_addr =
  VAR_1->dma_window_base_cur + VAR_1->dma_window_size;
}
