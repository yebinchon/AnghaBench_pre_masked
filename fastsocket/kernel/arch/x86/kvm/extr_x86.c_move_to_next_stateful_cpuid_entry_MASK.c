
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpuid_nent; struct kvm_cpuid_entry2* cpuid_entries; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_cpuid_entry2 {scalar_t__ function; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct kvm_cpuid_entry2 *VAR_3 = &VAR_1->arch.cpuid_entries[VAR_2];
 int VAR_4, VAR_5 = VAR_1->arch.cpuid_nent;

 VAR_3->flags &= ~VAR_0;

 for (VAR_4 = VAR_2 + 1; ; VAR_4 = (VAR_4 + 1) % VAR_5) {
  struct kvm_cpuid_entry2 *VAR_6 = &VAR_1->arch.cpuid_entries[VAR_4];
  if (VAR_6->function == VAR_3->function) {
   VAR_6->flags |= VAR_0;
   return VAR_4;
  }
 }
 return 0;
}
