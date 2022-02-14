
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {struct kvm_pmc* overflow_handler_context; } ;
struct kvm_pmu {int irq_work; int reprogram_pmi; } ;
struct kvm_pmc {TYPE_2__* vcpu; int idx; } ;
struct TYPE_3__ {struct kvm_pmu pmu; } ;
struct TYPE_4__ {int requests; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_2,
  struct perf_sample_data *VAR_3, struct pt_regs *VAR_4)
{
 struct kvm_pmc *VAR_5 = VAR_2->overflow_handler_context;
 struct kvm_pmu *VAR_6 = &VAR_5->vcpu->arch.pmu;
 if (!FUNC_4(VAR_5->idx, (unsigned long *)&VAR_6->reprogram_pmi)) {
  FUNC_2(VAR_2, VAR_3, VAR_4);
  FUNC_3(VAR_1, &VAR_5->vcpu->requests);
  if (!FUNC_1())
   FUNC_0(&VAR_5->vcpu->arch.pmu.irq_work);
  else
   FUNC_3(VAR_0, &VAR_5->vcpu->requests);
 }
}
