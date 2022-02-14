
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int * vmcs; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct vcpu_vmx*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->vmcs) {
  FUNC_2(VAR_1);
  FUNC_0(VAR_1->vmcs);
  VAR_1->vmcs = ((void*)0);
 }
}
