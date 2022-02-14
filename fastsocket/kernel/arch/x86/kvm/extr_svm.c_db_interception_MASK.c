
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int singlestep; } ;
struct TYPE_15__ {int guest_debug; TYPE_1__ arch; struct kvm_run* run; } ;
struct vcpu_svm {TYPE_4__* vmcb; TYPE_7__ vcpu; } ;
struct TYPE_13__ {int exception; scalar_t__ pc; } ;
struct TYPE_14__ {TYPE_5__ arch; } ;
struct kvm_run {TYPE_6__ debug; int exit_reason; } ;
struct TYPE_10__ {scalar_t__ base; } ;
struct TYPE_11__ {int rflags; scalar_t__ rip; TYPE_2__ cs; } ;
struct TYPE_12__ {TYPE_3__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_6)
{
 struct kvm_run *VAR_7 = VAR_6->vcpu.run;

 if (!(VAR_6->vcpu.guest_debug &
       (VAR_2 | VAR_3)) &&
  !VAR_6->vcpu.arch.singlestep) {
  FUNC_0(&VAR_6->vcpu, VAR_0);
  return 1;
 }

 if (VAR_6->vcpu.arch.singlestep) {
  VAR_6->vcpu.arch.singlestep = 0;
  if (!(VAR_6->vcpu.guest_debug & VAR_2))
   VAR_6->vmcb->save.rflags &=
    ~(VAR_5 | VAR_4);
  FUNC_1(&VAR_6->vcpu);
 }

 if (VAR_6->vcpu.guest_debug &
     (VAR_2 | VAR_3)){
  VAR_7->exit_reason = VAR_1;
  VAR_7->debug.arch.pc =
   VAR_6->vmcb->save.cs.base + VAR_6->vmcb->save.rip;
  VAR_7->debug.arch.exception = VAR_0;
  return 0;
 }

 return 1;
}
