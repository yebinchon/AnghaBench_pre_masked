
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer_pending; scalar_t__ timer_fired; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.timer_pending = 1;
 VAR_0->arch.timer_fired = 0;
}
