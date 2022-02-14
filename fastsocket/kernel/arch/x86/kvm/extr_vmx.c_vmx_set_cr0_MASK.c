
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_1__ rmode; } ;
struct TYPE_4__ {int shadow_efer; unsigned long cr0; } ;
struct kvm_vcpu {TYPE_2__ arch; int fpu_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (unsigned long*,unsigned long,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_12, unsigned long VAR_13)
{
 struct vcpu_vmx *VAR_14 = FUNC_6(VAR_12);
 unsigned long VAR_15;

 if (VAR_11)
  VAR_15 = (VAR_13 & ~VAR_4)
   | VAR_6;
 else
  VAR_15 = (VAR_13 & ~VAR_3) | VAR_5;

 if (VAR_14->rmode.vm86_active && (VAR_13 & VAR_7))
  FUNC_1(VAR_12);

 if (!VAR_14->rmode.vm86_active && !(VAR_13 & VAR_7))
  FUNC_2(VAR_12);
 if (VAR_10)
  FUNC_3(&VAR_15, VAR_13, VAR_12);

 if (!VAR_12->fpu_active)
  VAR_15 |= VAR_9;

 FUNC_7(VAR_0, VAR_13);
 FUNC_7(VAR_2, VAR_15);
 VAR_12->arch.cr0 = VAR_13;
}
