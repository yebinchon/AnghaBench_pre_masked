
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {struct iommu* iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; TYPE_2__ dev; } ;
struct iommu {int dma_addr_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;

int FUNC_1(struct pci_dev *VAR_2, u64 VAR_3)
{
 u64 VAR_4;

 if (VAR_2 == ((void*)0)) {
  VAR_4 = 0xffffffff;
 } else {
  struct iommu *VAR_5 = VAR_2->dev.archdata.iommu;

  VAR_4 = VAR_5->dma_addr_mask;

  if (VAR_2->vendor == VAR_1 &&
      VAR_2->device == VAR_0 &&
      VAR_3 == 0x7fffffff) {
   FUNC_0(VAR_2,
        (VAR_4 & 0x80000000) != 0);
   return 1;
  }
 }

 if (VAR_3 >= (1UL << 32UL))
  return 0;

 return (VAR_3 & VAR_4) == VAR_4;
}
