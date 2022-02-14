
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_entry {int dummy; } ;
struct intel_iommu {int lock; struct root_entry* root_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_iommu*,struct root_entry*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct intel_iommu *VAR_2)
{
 struct root_entry *VAR_3;
 unsigned long VAR_4;

 VAR_3 = (struct root_entry *)FUNC_1();
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_3, VAR_1);

 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_2->root_entry = VAR_3;
 FUNC_3(&VAR_2->lock, VAR_4);

 return 0;
}
