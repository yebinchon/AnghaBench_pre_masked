
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_pmu {int irq_work; TYPE_3__* fixed_counters; TYPE_2__* gp_counters; } ;
struct TYPE_4__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_6__ {scalar_t__ idx; struct kvm_vcpu* vcpu; int type; } ;
struct TYPE_5__ {int idx; struct kvm_vcpu* vcpu; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_pmu*,int ,int) ;
 int VAR_5 ;

void FUNC_3(struct kvm_vcpu *VAR_6)
{
 int VAR_7;
 struct kvm_pmu *VAR_8 = &VAR_6->arch.pmu;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8->gp_counters[VAR_7].type = VAR_1;
  VAR_8->gp_counters[VAR_7].vcpu = VAR_6;
  VAR_8->gp_counters[VAR_7].idx = VAR_7;
 }
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8->fixed_counters[VAR_7].type = VAR_0;
  VAR_8->fixed_counters[VAR_7].vcpu = VAR_6;
  VAR_8->fixed_counters[VAR_7].idx = VAR_7 + VAR_2;
 }
 FUNC_0(&VAR_8->irq_work, VAR_5);
 FUNC_1(VAR_6);
}
