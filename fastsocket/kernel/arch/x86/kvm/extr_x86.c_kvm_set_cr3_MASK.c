
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* new_cr3 ) (struct kvm_vcpu*) ;} ;
struct TYPE_4__ {unsigned long cr3; TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct kvm_vcpu *VAR_5, unsigned long VAR_6)
{
 if (VAR_6 == VAR_5->arch.cr3 && !FUNC_8(VAR_5)) {
  FUNC_5(VAR_5);
  FUNC_4(VAR_5);
  return 0;
 }

 if (FUNC_1(VAR_5)) {
  if (FUNC_6(VAR_5, VAR_4)) {
   if (VAR_6 & VAR_2)
    return 1;
  } else
   if (VAR_6 & VAR_0)
    return 1;
 } else {
  if (FUNC_2(VAR_5)) {
   if (VAR_6 & VAR_1)
    return 1;
   if (FUNC_3(VAR_5) && !FUNC_7(VAR_5, VAR_6))
    return 1;
  }




 }
 if (FUNC_10(!FUNC_0(VAR_5->kvm, VAR_6 >> VAR_3)))
  return 1;
 VAR_5->arch.cr3 = VAR_6;
 VAR_5->arch.mmu.new_cr3(VAR_5);
 return 0;
}
