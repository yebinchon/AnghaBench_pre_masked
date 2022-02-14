
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct root_entry {int dummy; } ;
struct intel_iommu {int lock; struct root_entry* root_entry; } ;
struct context_entry {int dummy; } ;


 int FUNC_0 (struct intel_iommu*,struct context_entry*,int) ;
 int FUNC_1 (struct context_entry*) ;
 struct context_entry* FUNC_2 (struct root_entry*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct intel_iommu *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct root_entry *VAR_3;
 struct context_entry *VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_0->lock, VAR_5);
 VAR_3 = &VAR_0->root_entry[VAR_1];
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_1(&VAR_4[VAR_2]);
  FUNC_0(VAR_0, &VAR_4[VAR_2], sizeof(*VAR_4));

 }
 FUNC_4(&VAR_0->lock, VAR_5);
}
