
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {struct kvm_pmc* overflow_handler_context; } ;
struct kvm_pmu {int global_status; } ;
struct kvm_pmc {int idx; TYPE_2__* vcpu; } ;
struct TYPE_3__ {struct kvm_pmu pmu; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_0,
         struct perf_sample_data *VAR_1,
         struct pt_regs *VAR_2)
{
 struct kvm_pmc *VAR_3 = VAR_0->overflow_handler_context;
 struct kvm_pmu *VAR_4 = &VAR_3->vcpu->arch.pmu;
 FUNC_0(VAR_3->idx, (unsigned long *)&VAR_4->global_status);
}
