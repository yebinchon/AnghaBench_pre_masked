
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_iommu_arena {unsigned long* ptes; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct pci_iommu_arena*,long,long) ;

int
FUNC_1(struct pci_iommu_arena *VAR_3, long VAR_4, long VAR_5)
{
 unsigned long *VAR_6;
 long VAR_7;

 if (!VAR_3) return -VAR_1;

 VAR_6 = VAR_3->ptes;


 for(VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_5; VAR_7++)
  if (VAR_6[VAR_7] != VAR_2)
   return -VAR_0;

 FUNC_0(VAR_3, VAR_4, VAR_5);
 return 0;
}
