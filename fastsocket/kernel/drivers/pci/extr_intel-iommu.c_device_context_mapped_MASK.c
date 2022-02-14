
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct root_entry {int dummy; } ;
struct intel_iommu {int lock; struct root_entry* root_entry; } ;
struct context_entry {int dummy; } ;


 int FUNC_0 (struct context_entry*) ;
 struct context_entry* FUNC_1 (struct root_entry*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct intel_iommu *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct root_entry *VAR_3;
 struct context_entry *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_0->lock, VAR_6);
 VAR_3 = &VAR_0->root_entry[VAR_1];
 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4) {
  VAR_5 = 0;
  goto out;
 }
 VAR_5 = FUNC_0(&VAR_4[VAR_2]);
out:
 FUNC_3(&VAR_0->lock, VAR_6);
 return VAR_5;
}
