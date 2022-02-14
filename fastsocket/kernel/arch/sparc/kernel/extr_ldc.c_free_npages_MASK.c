
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct ldc_mtable_entry {scalar_t__ mte; scalar_t__ cookie; } ;
struct iommu_arena {unsigned long limit; int map; } ;
struct ldc_iommu {struct ldc_mtable_entry* page_table; struct iommu_arena arena; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long*) ;
 int FUNC_4 (unsigned long,unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2, struct ldc_iommu *VAR_3,
   u64 VAR_4, u64 VAR_5)
{
 struct iommu_arena *VAR_6 = &VAR_3->arena;
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10;
 struct ldc_mtable_entry *VAR_11;

 VAR_10 = FUNC_1(((VAR_4 & ~VAR_0) + VAR_5)) >> VAR_1;
 VAR_9 = FUNC_3(VAR_4, &VAR_8);
 VAR_11 = VAR_3->page_table + VAR_9;

 FUNC_0(VAR_9 > VAR_6->limit ||
        (VAR_9 + VAR_10) > VAR_6->limit);

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  if (VAR_11->cookie)
   FUNC_4(VAR_2, VAR_4 + (VAR_7 << VAR_8),
      VAR_11->cookie);
  VAR_11->mte = 0;
  FUNC_2(VAR_9 + VAR_7, VAR_6->map);
 }
}
