
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct kvm_run* run; } ;
struct vcpu_svm {TYPE_5__* vmcb; TYPE_1__ vcpu; } ;
struct TYPE_8__ {int exception; scalar_t__ pc; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;
struct kvm_run {TYPE_3__ debug; int exit_reason; } ;
struct TYPE_10__ {scalar_t__ base; } ;
struct TYPE_12__ {scalar_t__ rip; TYPE_4__ cs; } ;
struct TYPE_11__ {TYPE_6__ save; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vcpu_svm *VAR_2)
{
 struct kvm_run *VAR_3 = VAR_2->vcpu.run;

 VAR_3->exit_reason = VAR_1;
 VAR_3->debug.arch.pc = VAR_2->vmcb->save.cs.base + VAR_2->vmcb->save.rip;
 VAR_3->debug.arch.exception = VAR_0;
 return 0;
}
