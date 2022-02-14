
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int apic_base; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int timer; } ;
struct kvm_lapic {int base_address; int irr_pending; int highest_isr_cache; scalar_t__ regs; int isr_count; TYPE_2__ lapic_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 (struct kvm_lapic*) ;

void FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct kvm_lapic *VAR_3 = VAR_2->arch.apic;

 VAR_3->base_address = VAR_2->arch.apic_base &
        VAR_1;
 FUNC_3(VAR_2);

 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lapic_timer.timer);
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 VAR_3->irr_pending = 1;
 VAR_3->isr_count = FUNC_1(VAR_3->regs + VAR_0);
 VAR_3->highest_isr_cache = -1;
}
