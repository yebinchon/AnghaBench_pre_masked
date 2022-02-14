
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_4__ {int timer; } ;
struct TYPE_6__ {scalar_t__ regs_page; TYPE_1__ lapic_timer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 if (!VAR_0->arch.apic)
  return;

 FUNC_1(&VAR_0->arch.apic->lapic_timer.timer);

 if (VAR_0->arch.apic->regs_page)
  FUNC_0(VAR_0->arch.apic->regs_page);

 FUNC_2(VAR_0->arch.apic);
}
