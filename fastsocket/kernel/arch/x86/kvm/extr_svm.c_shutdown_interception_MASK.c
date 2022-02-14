
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_run* run; } ;
struct vcpu_svm {int vmcb; TYPE_1__ vcpu; } ;
struct kvm_run {int exit_reason; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_1)
{
 struct kvm_run *VAR_2 = VAR_1->vcpu.run;





 FUNC_0(VAR_1->vmcb);
 FUNC_1(VAR_1);

 VAR_2->exit_reason = VAR_0;
 return 0;
}
