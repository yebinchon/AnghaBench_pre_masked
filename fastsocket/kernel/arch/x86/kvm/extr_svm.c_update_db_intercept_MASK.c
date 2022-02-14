
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct TYPE_4__ {scalar_t__ singlestep; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; } ;
struct TYPE_5__ {int intercept_exceptions; } ;
struct TYPE_6__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_7)
{
 struct vcpu_svm *VAR_8 = FUNC_1(VAR_7);

 VAR_8->vmcb->control.intercept_exceptions &=
  ~((1 << VAR_1) | (1 << VAR_0));

 if (VAR_7->arch.singlestep)
  VAR_8->vmcb->control.intercept_exceptions |= (1 << VAR_1);

 if (VAR_7->guest_debug & VAR_2) {
  if (VAR_7->guest_debug &
      (VAR_3 | VAR_4))
   VAR_8->vmcb->control.intercept_exceptions |=
    1 << VAR_1;
  if (VAR_7->guest_debug & VAR_5)
   VAR_8->vmcb->control.intercept_exceptions |=
    1 << VAR_0;
 } else
  VAR_7->guest_debug = 0;

 FUNC_0(VAR_8->vmcb, VAR_6);
}
