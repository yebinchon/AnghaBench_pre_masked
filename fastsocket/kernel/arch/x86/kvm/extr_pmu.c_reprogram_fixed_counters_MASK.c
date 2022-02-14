
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct kvm_pmu {int nr_arch_fixed_counters; int fixed_ctr_ctrl; } ;
struct kvm_pmc {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,int) ;
 int FUNC_2 (struct kvm_pmc*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_pmu *VAR_0, u64 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_arch_fixed_counters; VAR_2++) {
  u8 VAR_3 = FUNC_0(VAR_1, VAR_2);
  struct kvm_pmc *VAR_4 = FUNC_1(VAR_0, VAR_2);

  if (FUNC_0(VAR_0->fixed_ctr_ctrl, VAR_2) == VAR_3)
   continue;

  FUNC_2(VAR_4, VAR_3, VAR_2);
 }

 VAR_0->fixed_ctr_ctrl = VAR_1;
}
