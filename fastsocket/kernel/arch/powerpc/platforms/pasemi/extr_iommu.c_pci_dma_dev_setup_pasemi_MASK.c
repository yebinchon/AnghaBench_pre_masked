
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dma_ops; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {int vendor; int device; TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (char*,struct pci_dev*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 FUNC_2("pci_dma_dev_setup, dev %p (%s)\n", VAR_3, FUNC_1(VAR_3));






 if (VAR_3->vendor == 0x1959 && VAR_3->device == 0xa007 &&
     !FUNC_0(VAR_0)) {
  VAR_3->dev.archdata.dma_ops = &VAR_1;
  return;
 }


 FUNC_3(&VAR_3->dev, &VAR_2);
}
