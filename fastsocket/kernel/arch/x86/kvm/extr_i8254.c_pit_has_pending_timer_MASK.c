
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct TYPE_7__ {int pending; } ;
struct TYPE_8__ {TYPE_3__ pit_timer; scalar_t__ irq_ack; } ;
struct kvm_pit {TYPE_4__ pit_state; } ;
struct TYPE_5__ {struct kvm_pit* vpit; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct kvm_pit *VAR_1 = VAR_0->kvm->arch.vpit;

 if (VAR_1 && FUNC_1(VAR_0) && VAR_1->pit_state.irq_ack)
  return FUNC_0(&VAR_1->pit_state.pit_timer.pending);
 return 0;
}
