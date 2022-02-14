
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_mtable_entry {int dummy; } ;
struct ldc_iommu {struct ldc_mtable_entry* page_table; } ;


 long FUNC_0 (struct ldc_iommu*,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct ldc_mtable_entry *FUNC_2(struct ldc_iommu *VAR_0,
          unsigned long VAR_1)
{
 long VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (FUNC_1(VAR_2 < 0))
  return ((void*)0);

 return VAR_0->page_table + VAR_2;
}
