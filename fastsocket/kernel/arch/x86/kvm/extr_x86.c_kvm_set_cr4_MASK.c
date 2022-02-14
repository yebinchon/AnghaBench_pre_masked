
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cr4_pge; } ;
struct TYPE_6__ {TYPE_1__ base_role; } ;
struct TYPE_7__ {int cr3; unsigned long cr4; TYPE_2__ mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_8__ {int (* set_cr4 ) (struct kvm_vcpu*,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 unsigned long FUNC_7 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_10 ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (struct kvm_vcpu*,unsigned long) ;
 int VAR_11 ;
 int FUNC_10 (struct kvm_vcpu*) ;

int FUNC_11(struct kvm_vcpu *VAR_12, unsigned long VAR_13)
{
 unsigned long VAR_14 = FUNC_7(VAR_12);
 unsigned long VAR_15 = VAR_5 | VAR_6 |
       VAR_3 | VAR_8;
 if (VAR_13 & VAR_0)
  return 1;

 if (!FUNC_3(VAR_12) && (VAR_13 & VAR_2))
  return 1;

 if (!FUNC_2(VAR_12) && (VAR_13 & VAR_8))
  return 1;

 if (!FUNC_0(VAR_12) && (VAR_13 & VAR_7))
  return 1;

 if (FUNC_4(VAR_12)) {
  if (!(VAR_13 & VAR_3))
   return 1;
 } else if (FUNC_5(VAR_12) && (VAR_13 & VAR_3)
     && ((VAR_13 ^ VAR_14) & VAR_15)
     && !FUNC_8(VAR_12, VAR_12->arch.cr3))
  return 1;

 if ((VAR_13 & VAR_4) && !(VAR_14 & VAR_4)) {
  if (!FUNC_1(VAR_12))
   return 1;


  if ((VAR_12->arch.cr3 & VAR_1) || !FUNC_4(VAR_12))
   return 1;
 }

 if (VAR_13 & VAR_9)
  return 1;
 VAR_10->set_cr4(VAR_12, VAR_13);
 VAR_12->arch.cr4 = VAR_13;
 VAR_12->arch.mmu.base_role.cr4_pge = (VAR_13 & VAR_5) && !VAR_11;
 FUNC_6(VAR_12);

 if ((VAR_13 ^ VAR_14) & VAR_2)
  FUNC_10(VAR_12);

 return 0;
}
