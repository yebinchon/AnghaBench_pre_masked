
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int irq_window_exits; } ;
struct TYPE_8__ {TYPE_1__ stat; int kvm; struct kvm_run* run; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_3__* vmcb; } ;
struct kvm_run {int exit_reason; scalar_t__ request_interrupt_window; } ;
struct TYPE_6__ {int int_ctl; } ;
struct TYPE_7__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_3)
{
 struct kvm_run *VAR_4 = VAR_3->vcpu.run;

 FUNC_3(VAR_3);
 VAR_3->vmcb->control.int_ctl &= ~VAR_2;
 FUNC_2(VAR_3->vmcb, VAR_1);




 if (!FUNC_0(VAR_3->vcpu.kvm) &&
     VAR_4->request_interrupt_window &&
     !FUNC_1(&VAR_3->vcpu)) {
  ++VAR_3->vcpu.stat.irq_window_exits;
  VAR_4->exit_reason = VAR_0;
  return 0;
 }

 return 1;
}
