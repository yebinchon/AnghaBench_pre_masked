
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_cpuid_entry2 {int edx; int ebx; int ecx; int eax; } ;


 struct kvm_cpuid_entry2* FUNC_0 (struct kvm_vcpu*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_0,
          u32 *VAR_1, u32 *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct kvm_cpuid_entry2 *VAR_5 = ((void*)0);

 if (VAR_1 && VAR_3)
  VAR_5 = FUNC_0(VAR_0, *VAR_1, *VAR_3);

 if (VAR_5) {
  *VAR_1 = VAR_5->eax;
  *VAR_3 = VAR_5->ecx;
  if (VAR_2)
   *VAR_2 = VAR_5->ebx;
  if (VAR_4)
   *VAR_4 = VAR_5->edx;
  return 1;
 }

 return 0;
}
