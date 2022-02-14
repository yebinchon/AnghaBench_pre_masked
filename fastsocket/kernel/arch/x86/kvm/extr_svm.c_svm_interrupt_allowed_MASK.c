
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int int_state; } ;
struct TYPE_5__ {int rflags; } ;
struct vmcb {TYPE_2__ control; TYPE_1__ save; } ;
struct TYPE_7__ {int hflags; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; struct vmcb* vmcb; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (struct vcpu_svm*) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_2(VAR_3);
 struct vmcb *VAR_5 = VAR_4->vmcb;
 return (VAR_5->save.rflags & VAR_2) &&
  !(VAR_5->control.int_state & VAR_1) &&
  FUNC_0(VAR_4) &&
  !(FUNC_1(VAR_4) && (VAR_4->vcpu.arch.hflags & VAR_0));
}
