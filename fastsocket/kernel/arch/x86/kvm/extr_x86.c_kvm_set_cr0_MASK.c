
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shadow_efer; unsigned long cr0; int cr3; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* set_cr0 ) (struct kvm_vcpu*,unsigned long) ;int (* get_cs_db_l_bits ) (struct kvm_vcpu*,int*,int*) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ) ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_6 (struct kvm_vcpu*,unsigned long) ;

int FUNC_7(struct kvm_vcpu *VAR_9, unsigned long VAR_10)
{
 if (VAR_10 & VAR_0)
  return 1;

 VAR_10 |= VAR_3;

 if ((VAR_10 & VAR_4) && !(VAR_10 & VAR_2))
  return 1;

 if ((VAR_10 & VAR_6) && !(VAR_10 & VAR_5))
  return 1;

 if (!FUNC_1(VAR_9) && (VAR_10 & VAR_6)) {
  if (FUNC_0(VAR_9) && !FUNC_4(VAR_9, VAR_9->arch.cr3))
   return 1;

 }

 if (!(VAR_10 & VAR_6) && FUNC_3(VAR_9, VAR_7))
  return 1;

 VAR_8->set_cr0(VAR_9, VAR_10);
 VAR_9->arch.cr0 = VAR_10;

 FUNC_2(VAR_9);
 return 0;
}
