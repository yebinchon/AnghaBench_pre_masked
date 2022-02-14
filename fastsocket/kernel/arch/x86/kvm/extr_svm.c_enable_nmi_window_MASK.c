
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hflags; } ;
struct TYPE_7__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_5__* vmcb; TYPE_2__ vcpu; } ;
struct TYPE_8__ {int singlestep; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_9__ {int rflags; } ;
struct TYPE_10__ {TYPE_4__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_0(VAR_4);

 if ((VAR_5->vcpu.arch.hflags & (VAR_1 | VAR_0))
     == VAR_1)
  return;




 VAR_4->arch.singlestep = 1;
 VAR_5->vmcb->save.rflags |= (VAR_3 | VAR_2);
 FUNC_1(VAR_4);
}
