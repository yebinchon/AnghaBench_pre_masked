
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int intercept_cr_write; int int_ctl; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_1(VAR_2);

 if (!(VAR_3->vmcb->control.intercept_cr_write & VAR_0)) {
  int VAR_4 = VAR_3->vmcb->control.int_ctl & VAR_1;
  FUNC_0(VAR_2, VAR_4);
 }
}
