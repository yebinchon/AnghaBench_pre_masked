
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_cpuid_entry2 {int eax; } ;


 struct kvm_cpuid_entry2* FUNC_0 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static struct kvm_cpuid_entry2* FUNC_1(struct kvm_vcpu *VAR_0,
                                                  u32 VAR_1, u32 VAR_2)
{
 struct kvm_cpuid_entry2 *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1 & 0x80000000, 0);
 if (!VAR_3 || VAR_3->eax >= VAR_1)
  return ((void*)0);
 if (VAR_1 & 0x80000000) {
  VAR_3 = FUNC_0(VAR_0, 0, 0);
  if (!VAR_3)
   return ((void*)0);
 }
 return FUNC_0(VAR_0, VAR_3->eax, VAR_2);
}
