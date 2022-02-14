
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cr0; int cr0_guest_owned_bits; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 FUNC_3(VAR_4);
 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_4);
 VAR_4->arch.cr0_guest_owned_bits = 0;
 FUNC_2(VAR_0, ~VAR_4->arch.cr0_guest_owned_bits);
 FUNC_2(VAR_1, VAR_4->arch.cr0);
}
