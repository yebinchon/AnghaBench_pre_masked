
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_iommu_arena {unsigned long* ptes; long next_entry; int lock; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_0 (int *,struct pci_iommu_arena*,long,long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct pci_iommu_arena *VAR_2, long VAR_3, long VAR_4)
{
 unsigned long VAR_5;
 unsigned long *VAR_6;
 long VAR_7, VAR_8;

 if (!VAR_2) return -VAR_0;

 FUNC_1(&VAR_2->lock, VAR_5);


 VAR_6 = VAR_2->ptes;
 VAR_8 = FUNC_0(((void*)0), VAR_2, VAR_3, VAR_4);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_2->lock, VAR_5);
  return -1;
 }




 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
  VAR_6[VAR_8+VAR_7] = VAR_1;

 VAR_2->next_entry = VAR_8 + VAR_3;
 FUNC_2(&VAR_2->lock, VAR_5);

 return VAR_8;
}
