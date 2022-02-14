
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_iommu_arena {int dma_base; int size; } ;
struct pci_dev {struct pci_controller* sysdata; } ;
struct pci_controller {struct pci_iommu_arena* sg_pci; struct pci_iommu_arena* sg_isa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pci_controller* VAR_6 ;

int
FUNC_0(struct pci_dev *VAR_7, u64 VAR_8)
{
 struct pci_controller *VAR_9;
 struct pci_iommu_arena *VAR_10;




 if (VAR_4 != 0
     && (VAR_3 + VAR_4 - 1 <= VAR_8 ||
  VAR_3 + (VAR_5 << VAR_2) - 1 <= VAR_8))
  return 1;


 VAR_9 = VAR_7 ? VAR_7->sysdata : VAR_6;
 VAR_10 = VAR_9->sg_isa;
 if (VAR_10 && VAR_10->dma_base + VAR_10->size - 1 <= VAR_8)
  return 1;
 VAR_10 = VAR_9->sg_pci;
 if (VAR_10 && VAR_10->dma_base + VAR_10->size - 1 <= VAR_8)
  return 1;


 if (!VAR_3 && VAR_1 - VAR_0 - 1 <= VAR_8)
  return 1;

 return 0;
}
