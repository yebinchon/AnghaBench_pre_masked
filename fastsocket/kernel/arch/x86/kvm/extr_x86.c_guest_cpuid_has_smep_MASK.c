
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_cpuid_entry2 {int ebx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct kvm_cpuid_entry2* FUNC_1 (struct kvm_vcpu*,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvm_cpuid_entry2 *VAR_2;

 VAR_2 = FUNC_1(VAR_1, 7, 0);
 return VAR_2 && (VAR_2->ebx & FUNC_0(VAR_0));
}
