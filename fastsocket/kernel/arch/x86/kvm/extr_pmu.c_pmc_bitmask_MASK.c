
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_pmu {int * counter_bitmask; } ;
struct kvm_pmc {size_t type; TYPE_2__* vcpu; } ;
struct TYPE_3__ {struct kvm_pmu pmu; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;



__attribute__((used)) static inline u64 FUNC_0(struct kvm_pmc *VAR_0)
{
 struct kvm_pmu *VAR_1 = &VAR_0->vcpu->arch.pmu;

 return VAR_1->counter_bitmask[VAR_0->type];
}
