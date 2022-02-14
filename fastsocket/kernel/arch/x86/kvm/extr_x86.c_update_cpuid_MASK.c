
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int timer_mode_mask; } ;
struct kvm_lapic {TYPE_1__ lapic_timer; } ;
struct kvm_cpuid_entry2 {int function; int ecx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 struct kvm_cpuid_entry2* FUNC_1 (struct kvm_vcpu*,int,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 struct kvm_cpuid_entry2 *VAR_5;
 struct kvm_lapic *VAR_6 = VAR_4->arch.apic;

 VAR_5 = FUNC_1(VAR_4, 1, 0);
 if (!VAR_5)
  return;


 if (VAR_3 && VAR_5->function == 0x1) {
  VAR_5->ecx &= ~(FUNC_0(VAR_1));
  if (FUNC_3(VAR_4, VAR_0))
   VAR_5->ecx |= FUNC_0(VAR_1);
 }

 if (VAR_6) {
  if (VAR_5->ecx & FUNC_0(VAR_2))
   VAR_6->lapic_timer.timer_mode_mask = 3 << 17;
  else
   VAR_6->lapic_timer.timer_mode_mask = 1 << 17;
 }

 FUNC_2(VAR_4);
}
