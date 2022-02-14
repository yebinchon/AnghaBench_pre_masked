
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_pmu {int nr_arch_gp_counters; unsigned long long nr_arch_fixed_counters; int* counter_bitmask; int version; unsigned long long available_event_types; int global_ctrl; int global_ctrl_mask; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_cpuid_entry2 {int eax; unsigned long long ebx; int edx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kvm_cpuid_entry2* FUNC_0 (struct kvm_vcpu*,int,int ) ;
 void* FUNC_1 (int,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_5)
{
 struct kvm_pmu *VAR_6 = &VAR_5->arch.pmu;
 struct kvm_cpuid_entry2 *VAR_7;
 unsigned VAR_8;

 VAR_6->nr_arch_gp_counters = 0;
 VAR_6->nr_arch_fixed_counters = 0;
 VAR_6->counter_bitmask[VAR_1] = 0;
 VAR_6->counter_bitmask[VAR_0] = 0;
 VAR_6->version = 0;

 VAR_7 = FUNC_0(VAR_5, 0xa, 0);
 if (!VAR_7)
  return;

 VAR_6->version = VAR_7->eax & 0xff;
 if (!VAR_6->version)
  return;

 VAR_6->nr_arch_gp_counters = FUNC_1((int)(VAR_7->eax >> 8) & 0xff,
   VAR_4);
 VAR_6->counter_bitmask[VAR_1] =
  ((u64)1 << ((VAR_7->eax >> 16) & 0xff)) - 1;
 VAR_8 = (VAR_7->eax >> 24) & 0xff;
 VAR_6->available_event_types = ~VAR_7->ebx & ((1ull << VAR_8) - 1);

 if (VAR_6->version == 1) {
  VAR_6->global_ctrl = (1 << VAR_6->nr_arch_gp_counters) - 1;
  return;
 }

 VAR_6->nr_arch_fixed_counters = FUNC_1((int)(VAR_7->edx & 0x1f),
   VAR_3);
 VAR_6->counter_bitmask[VAR_0] =
  ((u64)1 << ((VAR_7->edx >> 5) & 0xff)) - 1;
 VAR_6->global_ctrl_mask = ~(((1 << VAR_6->nr_arch_gp_counters) - 1)
   | (((1ull << VAR_6->nr_arch_fixed_counters) - 1)
    << VAR_2));
}
