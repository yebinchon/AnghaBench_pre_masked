
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct hrtimer {int dummy; } ;
struct TYPE_4__ {struct hrtimer timer; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hrtimer*) ;
 int FUNC_1 (struct hrtimer*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->arch.apic;
 struct hrtimer *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = &VAR_2->lapic_timer.timer;
 if (FUNC_0(VAR_3))
  FUNC_1(VAR_3, VAR_0);
}
