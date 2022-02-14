
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int dummy; } ;
struct TYPE_2__ {scalar_t__ cpl; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct kvm_vcpu* VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_1__* FUNC_2 (struct kvm_pt_regs*) ;
 int FUNC_3 (long) ;
 int FUNC_4 (long) ;
 int FUNC_5 (unsigned long,unsigned long,unsigned long,int,struct kvm_pt_regs*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;

void FUNC_10(unsigned long VAR_3, struct kvm_pt_regs *VAR_4,
  unsigned long VAR_5, unsigned long VAR_6)
{
 struct kvm_vcpu *VAR_7 = VAR_2;
 long VAR_8;

 if (FUNC_2(VAR_4)->cpl == 0) {

  if (VAR_6 == VAR_0) {
   FUNC_4(VAR_8);
   FUNC_6(VAR_7);
   FUNC_9(VAR_7);
   FUNC_0(VAR_7);
   FUNC_8(VAR_7);
   FUNC_3(VAR_8);
   return;
  } else if (VAR_6 == VAR_1) {
   FUNC_4(VAR_8);
   FUNC_7(VAR_7);
   FUNC_9(VAR_7);
   FUNC_1(VAR_7);
   FUNC_8(VAR_7);
   FUNC_3(VAR_8);
   return;
  }
 }
 FUNC_5(VAR_3, VAR_5, VAR_6, 11, VAR_4);
}
