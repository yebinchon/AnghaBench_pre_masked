
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_5__ {unsigned long cr3; } ;
struct TYPE_4__ {unsigned long nested_cr3; } ;
struct TYPE_6__ {TYPE_2__ save; TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_2(VAR_3);

 if (VAR_2) {
  VAR_5->vmcb->control.nested_cr3 = VAR_4;
  FUNC_0(VAR_5->vmcb, VAR_1);
  FUNC_1(VAR_3);
  return;
 }

 VAR_5->vmcb->save.cr3 = VAR_4;
 FUNC_0(VAR_5->vmcb, VAR_0);
 FUNC_1(VAR_3);
}
