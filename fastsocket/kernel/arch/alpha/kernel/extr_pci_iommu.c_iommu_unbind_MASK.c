
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_iommu_arena {unsigned long* ptes; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

int
FUNC_0(struct pci_iommu_arena *VAR_2, long VAR_3, long VAR_4)
{
 unsigned long *VAR_5;
 long VAR_6;

 if (!VAR_2) return -VAR_0;

 VAR_5 = VAR_2->ptes + VAR_3;
 for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_5[VAR_6] = VAR_1;

 return 0;
}
