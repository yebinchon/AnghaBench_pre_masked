
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {unsigned int event_inj; int event_inj_err; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct vcpu_svm*,unsigned int,int,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3, unsigned VAR_4,
    bool VAR_5, u32 VAR_6)
{
 struct vcpu_svm *VAR_7 = FUNC_1(VAR_3);



 if (FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6))
  return;

 VAR_7->vmcb->control.event_inj = VAR_4
  | VAR_1
  | (VAR_5 ? VAR_2 : 0)
  | VAR_0;
 VAR_7->vmcb->control.event_inj_err = VAR_6;
}
