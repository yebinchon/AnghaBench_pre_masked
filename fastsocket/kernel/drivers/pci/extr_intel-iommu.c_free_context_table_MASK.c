
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_entry {int dummy; } ;
struct intel_iommu {int lock; struct root_entry* root_entry; } ;
typedef struct root_entry context_entry ;


 int VAR_0 ;
 int FUNC_0 (struct root_entry*) ;
 struct root_entry* FUNC_1 (struct root_entry*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct intel_iommu *VAR_1)
{
 struct root_entry *VAR_2;
 int VAR_3;
 unsigned long VAR_4;
 struct context_entry *VAR_5;

 FUNC_2(&VAR_1->lock, VAR_4);
 if (!VAR_1->root_entry) {
  goto out;
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->root_entry[VAR_3];
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   FUNC_0(VAR_5);
 }
 FUNC_0(VAR_1->root_entry);
 VAR_1->root_entry = ((void*)0);
out:
 FUNC_3(&VAR_1->lock, VAR_4);
}
