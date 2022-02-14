
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_cpuid_entry2 {int eax; } ;


 struct kvm_cpuid_entry2* FUNC_0 (struct kvm_vcpu*,int,int ) ;

int FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct kvm_cpuid_entry2 *VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0x80000008, 0);
 if (VAR_1)
  return VAR_1->eax & 0xff;
 return 36;
}
