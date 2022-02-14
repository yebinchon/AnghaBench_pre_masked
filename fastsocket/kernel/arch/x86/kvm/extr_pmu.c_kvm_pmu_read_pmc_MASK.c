
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct kvm_pmu {unsigned int nr_arch_gp_counters; unsigned int nr_arch_fixed_counters; struct kvm_pmc* gp_counters; struct kvm_pmc* fixed_counters; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_pmc*) ;

int FUNC_1(struct kvm_vcpu *VAR_0, unsigned VAR_1, u64 *VAR_2)
{
 struct kvm_pmu *VAR_3 = &VAR_0->arch.pmu;
 bool VAR_4 = VAR_1 & (1u << 31);
 bool VAR_5 = VAR_1 & (1u << 30);
 struct kvm_pmc *VAR_6;
 u64 VAR_7;

 VAR_1 &= ~(3u << 30);
 if (!VAR_5 && VAR_1 >= VAR_3->nr_arch_gp_counters)
  return 1;
 if (VAR_5 && VAR_1 >= VAR_3->nr_arch_fixed_counters)
  return 1;
 VAR_6 = VAR_5 ? VAR_3->fixed_counters : VAR_3->gp_counters;
 VAR_7 = FUNC_0(&VAR_6[VAR_1]);
 if (VAR_4)
  VAR_7 = (u32)VAR_7;
 *VAR_2 = VAR_7;

 return 0;
}
