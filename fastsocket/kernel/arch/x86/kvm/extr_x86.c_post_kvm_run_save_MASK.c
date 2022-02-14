
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; struct kvm_run* run; } ;
struct kvm_run {int if_flag; int ready_for_interrupt_injection; int apic_base; int cr8; } ;
struct TYPE_2__ {int (* get_rflags ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_2)
{
 struct kvm_run *VAR_3 = VAR_2->run;

 VAR_3->if_flag = (VAR_1->get_rflags(VAR_2) & VAR_0) != 0;
 VAR_3->cr8 = FUNC_5(VAR_2);
 VAR_3->apic_base = FUNC_4(VAR_2);
 if (FUNC_0(VAR_2->kvm))
  VAR_3->ready_for_interrupt_injection = 1;
 else
  VAR_3->ready_for_interrupt_injection =
   FUNC_1(VAR_2) &&
   !FUNC_2(VAR_2) &&
   !FUNC_3(VAR_2);
}
