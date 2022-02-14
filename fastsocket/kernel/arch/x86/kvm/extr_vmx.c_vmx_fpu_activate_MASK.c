
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cr0_guest_owned_bits; } ;
struct kvm_vcpu {int fpu_active; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_3)
{
 if (VAR_3->fpu_active)
  return;
 VAR_3->fpu_active = 1;
 FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_3, VAR_2))
  FUNC_3(VAR_1, VAR_2);
 FUNC_1(VAR_3);
 VAR_3->arch.cr0_guest_owned_bits = VAR_2;
 FUNC_4(VAR_0, ~VAR_3->arch.cr0_guest_owned_bits);
}
