
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int kvm; struct kvm_run* run; } ;
struct vcpu_svm {TYPE_3__ vcpu; TYPE_2__* vmcb; } ;
struct kvm_run {int exit_reason; } ;
struct TYPE_4__ {int intercept_cr_write; } ;
struct TYPE_5__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_3)
{
 struct kvm_run *VAR_4 = VAR_3->vcpu.run;
 int VAR_5;

 u8 VAR_6 = FUNC_2(&VAR_3->vcpu);

 VAR_5 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_3->vcpu.kvm)) {
  VAR_3->vmcb->control.intercept_cr_write &= ~VAR_0;
  FUNC_3(VAR_3->vmcb, VAR_2);
  return VAR_5;
 }
 if (VAR_6 <= FUNC_2(&VAR_3->vcpu))
  return VAR_5;
 VAR_4->exit_reason = VAR_1;
 return 0;
}
