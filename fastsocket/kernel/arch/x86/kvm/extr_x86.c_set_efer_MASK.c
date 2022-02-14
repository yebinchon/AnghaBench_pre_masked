
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int nxe; } ;
struct TYPE_6__ {TYPE_1__ base_role; } ;
struct TYPE_7__ {int shadow_efer; TYPE_2__ mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm_cpuid_entry2 {int edx; int ecx; } ;
struct TYPE_8__ {int (* set_efer ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 struct kvm_cpuid_entry2* FUNC_2 (struct kvm_vcpu*,int,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_8 ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_10, u64 VAR_11)
{
 if (VAR_11 & VAR_7)
  return 1;

 if (FUNC_1(VAR_10)
     && (VAR_10->arch.shadow_efer & VAR_2) != (VAR_11 & VAR_2))
  return 1;

 if (VAR_11 & VAR_0) {
  struct kvm_cpuid_entry2 *VAR_12;

  VAR_12 = FUNC_2(VAR_10, 0x80000001, 0);
  if (!VAR_12 || !(VAR_12->edx & FUNC_0(VAR_5)))
   return 1;
 }

 if (VAR_11 & VAR_4) {
  struct kvm_cpuid_entry2 *VAR_13;

  VAR_13 = FUNC_2(VAR_10, 0x80000001, 0);
  if (!VAR_13 || !(VAR_13->ecx & FUNC_0(VAR_6)))
   return 1;
 }

 VAR_11 &= ~VAR_1;
 VAR_11 |= VAR_10->arch.shadow_efer & VAR_1;

 VAR_8->set_efer(VAR_10, VAR_11);

 VAR_10->arch.shadow_efer = VAR_11;

 VAR_10->arch.mmu.base_role.nxe = (VAR_11 & VAR_3) && !VAR_9;
 FUNC_3(VAR_10);

 return 0;
}
