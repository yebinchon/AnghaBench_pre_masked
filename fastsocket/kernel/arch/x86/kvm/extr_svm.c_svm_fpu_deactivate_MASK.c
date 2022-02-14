
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct kvm_vcpu {int fpu_active; } ;
struct TYPE_5__ {int cr0; } ;
struct TYPE_4__ {int intercept_exceptions; } ;
struct TYPE_6__ {TYPE_2__ save; TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_4 ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_1(VAR_5);

 if (VAR_4) {

  VAR_5->fpu_active = 1;
  return;
 }

 VAR_6->vmcb->control.intercept_exceptions |= 1 << VAR_0;
 VAR_6->vmcb->save.cr0 |= VAR_3;
 FUNC_0(VAR_6->vmcb, VAR_2);
 FUNC_0(VAR_6->vmcb, VAR_1);
}
