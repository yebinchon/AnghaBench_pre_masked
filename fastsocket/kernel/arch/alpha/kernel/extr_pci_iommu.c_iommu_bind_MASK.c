
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_iommu_arena {unsigned long* ptes; int lock; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct pci_iommu_arena *VAR_3, long VAR_4, long VAR_5,
    struct page **VAR_6)
{
 unsigned long VAR_7;
 unsigned long *VAR_8;
 long VAR_9, VAR_10;

 if (!VAR_3) return -VAR_1;

 FUNC_2(&VAR_3->lock, VAR_7);

 VAR_8 = VAR_3->ptes;

 for(VAR_10 = VAR_4; VAR_10 < VAR_4 + VAR_5; VAR_10++) {
  if (VAR_8[VAR_10] != VAR_2) {
   FUNC_3(&VAR_3->lock, VAR_7);
   return -VAR_0;
  }
 }

 for(VAR_9 = 0, VAR_10 = VAR_4; VAR_9 < VAR_5; VAR_9++, VAR_10++)
  VAR_8[VAR_10] = FUNC_0(FUNC_1(VAR_6[VAR_9]));

 FUNC_3(&VAR_3->lock, VAR_7);

 return 0;
}
