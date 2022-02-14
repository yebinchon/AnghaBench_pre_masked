
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct TYPE_4__ {int shadow_efer; unsigned long cr0; } ;
struct kvm_vcpu {int fpu_active; TYPE_1__ arch; } ;
struct TYPE_5__ {int efer; unsigned long cr0; } ;
struct TYPE_6__ {TYPE_2__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_8 ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_9, unsigned long VAR_10)
{
 struct vcpu_svm *VAR_11 = FUNC_2(VAR_9);
 if (VAR_8)
  goto set;

 VAR_9->arch.cr0 = VAR_10;
 VAR_10 |= VAR_5 | VAR_7;

 if (!VAR_9->fpu_active)
  VAR_10 |= VAR_6;
set:





 VAR_10 &= ~(VAR_3 | VAR_4);
 VAR_11->vmcb->save.cr0 = VAR_10;
 FUNC_1(FUNC_2(VAR_9)->vmcb, VAR_2);
}
