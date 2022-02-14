
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vcpu_svm {TYPE_4__* vmcb; } ;
struct TYPE_6__ {int dr7; } ;
struct kvm_vcpu {int guest_debug; TYPE_2__ arch; } ;
struct TYPE_5__ {int * debugreg; } ;
struct kvm_guest_debug {int control; TYPE_1__ arch; } ;
struct TYPE_7__ {int rflags; int dr7; } ;
struct TYPE_8__ {TYPE_3__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5, struct kvm_guest_debug *VAR_6)
{
 int VAR_7 = VAR_5->guest_debug;
 struct vcpu_svm *VAR_8 = FUNC_1(VAR_5);

 VAR_5->guest_debug = VAR_6->control;

 FUNC_2(VAR_5);

 if (VAR_5->guest_debug & VAR_1)
  VAR_8->vmcb->save.dr7 = VAR_6->arch.debugreg[7];
 else
  VAR_8->vmcb->save.dr7 = VAR_5->arch.dr7;
 FUNC_0(VAR_8->vmcb, VAR_2);

 if (VAR_5->guest_debug & VAR_0)
  VAR_8->vmcb->save.rflags |= VAR_4 | VAR_3;
 else if (VAR_7 & VAR_0)
  VAR_8->vmcb->save.rflags &= ~(VAR_4 | VAR_3);

 return 0;
}
