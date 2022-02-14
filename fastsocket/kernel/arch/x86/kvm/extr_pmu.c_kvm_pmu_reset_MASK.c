
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pmu {scalar_t__ global_ovf_ctrl; scalar_t__ global_status; scalar_t__ global_ctrl; scalar_t__ fixed_ctr_ctrl; struct kvm_pmc* fixed_counters; struct kvm_pmc* gp_counters; int irq_work; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {scalar_t__ eventsel; scalar_t__ counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_pmc*) ;

void FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct kvm_pmu *VAR_3 = &VAR_2->arch.pmu;
 int VAR_4;

 FUNC_0(&VAR_3->irq_work);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct kvm_pmc *VAR_5 = &VAR_3->gp_counters[VAR_4];
  FUNC_1(VAR_5);
  VAR_5->counter = VAR_5->eventsel = 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(&VAR_3->fixed_counters[VAR_4]);

 VAR_3->fixed_ctr_ctrl = VAR_3->global_ctrl = VAR_3->global_status =
  VAR_3->global_ovf_ctrl = 0;
}
