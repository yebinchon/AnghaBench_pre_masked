
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_mmu_page {scalar_t__* spt; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct kvm_mmu_page *VAR_3)
{
 int VAR_4;
 u64 *VAR_5 = VAR_3->spt;

 if (VAR_2 == VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (VAR_5[VAR_4] == VAR_1)
   FUNC_0(&VAR_5[VAR_4], VAR_2);
 }
}
