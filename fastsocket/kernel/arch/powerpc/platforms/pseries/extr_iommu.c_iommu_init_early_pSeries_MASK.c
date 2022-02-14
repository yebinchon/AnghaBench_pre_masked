
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pci_dma_dev_setup; int * pci_dma_bus_setup; int tce_get; int tce_free; int tce_build; int dma_set_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_5(void)
{
 if (VAR_7 && FUNC_1(VAR_7, "linux,iommu-off", ((void*)0))) {

  VAR_12.pci_dma_dev_setup = ((void*)0);
  VAR_12.pci_dma_bus_setup = ((void*)0);
  FUNC_4(&VAR_2);
  return;
 }

 if (FUNC_0(VAR_0)) {
  if (FUNC_0(VAR_1)) {
   VAR_12.tce_build = VAR_15;
   VAR_12.tce_free = VAR_18;
  } else {
   VAR_12.tce_build = VAR_14;
   VAR_12.tce_free = VAR_17;
  }
  VAR_12.tce_get = VAR_19;
  VAR_12.pci_dma_bus_setup = VAR_9;
  VAR_12.pci_dma_dev_setup = VAR_11;
  VAR_12.dma_set_mask = VAR_4;
 } else {
  VAR_12.tce_build = VAR_13;
  VAR_12.tce_free = VAR_16;
  VAR_12.tce_get = VAR_20;
  VAR_12.pci_dma_bus_setup = VAR_8;
  VAR_12.pci_dma_dev_setup = VAR_10;
 }


 FUNC_2(&VAR_6);
 FUNC_3(&VAR_5);

 FUNC_4(&VAR_3);
}
