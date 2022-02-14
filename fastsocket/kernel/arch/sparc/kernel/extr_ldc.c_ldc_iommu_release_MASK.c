
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_mtable_entry {int dummy; } ;
struct TYPE_2__ {unsigned long limit; int * map; } ;
struct ldc_iommu {TYPE_1__ arena; int * page_table; } ;
struct ldc_channel {int id; struct ldc_iommu iommu; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ldc_channel *VAR_0)
{
 struct ldc_iommu *VAR_1 = &VAR_0->iommu;
 unsigned long VAR_2, VAR_3, VAR_4;

 (void) FUNC_3(VAR_0->id, 0, 0);

 VAR_2 = VAR_1->arena.limit;
 VAR_3 = VAR_2 * sizeof(struct ldc_mtable_entry);
 VAR_4 = FUNC_1(VAR_3);

 FUNC_0((unsigned long) VAR_1->page_table, VAR_4);
 VAR_1->page_table = ((void*)0);

 FUNC_2(VAR_1->arena.map);
 VAR_1->arena.map = ((void*)0);
}
