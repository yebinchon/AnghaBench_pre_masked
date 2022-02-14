
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int guest_msrs; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct vcpu_vmx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct vcpu_vmx*) ;
 int VAR_0 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 FUNC_5(VAR_1);
 FUNC_1(VAR_2->guest_msrs);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0, VAR_2);
}
