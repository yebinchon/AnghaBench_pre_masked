
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int hflags; } ;
struct TYPE_6__ {TYPE_3__ arch; } ;
struct vcpu_svm {TYPE_4__* vmcb; TYPE_2__ vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_5__ {unsigned long intercept; } ;
struct TYPE_8__ {TYPE_1__ control; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3, bool VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4) {
  VAR_5->vcpu.arch.hflags |= VAR_0;
  VAR_5->vmcb->control.intercept |= (1UL << VAR_1);
 } else {
  VAR_5->vcpu.arch.hflags &= ~VAR_0;
  VAR_5->vmcb->control.intercept &= ~(1UL << VAR_1);
 }
 FUNC_0(VAR_5->vmcb, VAR_2);
}
