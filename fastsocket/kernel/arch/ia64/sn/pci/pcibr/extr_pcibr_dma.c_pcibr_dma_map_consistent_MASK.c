
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcidev_info {int dummy; } ;
struct TYPE_2__ {unsigned long coherent_dma_mask; } ;
struct pci_dev {TYPE_1__ dev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcidev_info* FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pcidev_info*,unsigned long,size_t,int ,int) ;
 scalar_t__ FUNC_2 (struct pcidev_info*,unsigned long,int ,int) ;

dma_addr_t
FUNC_3(struct pci_dev * VAR_2, unsigned long VAR_3,
    size_t VAR_4, int VAR_5)
{
 dma_addr_t VAR_6;
 struct pcidev_info *VAR_7 = FUNC_0(VAR_2);

 if (VAR_2->dev.coherent_dma_mask == ~0UL) {
  VAR_6 = FUNC_2(VAR_7, VAR_3,
         VAR_1, VAR_5);
 } else {
  VAR_6 = (dma_addr_t) FUNC_1(VAR_7,
          VAR_3, VAR_4,
          VAR_0, VAR_5);
 }

 return VAR_6;
}
