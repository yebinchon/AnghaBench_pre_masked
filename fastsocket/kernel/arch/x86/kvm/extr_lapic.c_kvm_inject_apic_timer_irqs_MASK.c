
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int pending; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kvm_lapic*,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->arch.apic;

 if (VAR_2 && FUNC_1(&VAR_2->lapic_timer.pending) > 0) {
  if (FUNC_2(VAR_2, VAR_0))
   FUNC_0(&VAR_2->lapic_timer.pending);
 }
}
