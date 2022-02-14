
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending; } ;
struct TYPE_4__ {int irq_ack; TYPE_1__ pit_timer; int lock; struct kvm_kpit_channel_state* channels; scalar_t__ flags; } ;
struct kvm_pit {TYPE_2__ pit_state; int kvm; } ;
struct kvm_kpit_channel_state {int mode; int gate; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;

void FUNC_4(struct kvm_pit *VAR_0)
{
 int VAR_1;
 struct kvm_kpit_channel_state *VAR_2;

 FUNC_1(&VAR_0->pit_state.lock);
 VAR_0->pit_state.flags = 0;
 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  VAR_2 = &VAR_0->pit_state.channels[VAR_1];
  VAR_2->mode = 0xff;
  VAR_2->gate = (VAR_1 != 2);
  FUNC_3(VAR_0->kvm, VAR_1, 0);
 }
 FUNC_2(&VAR_0->pit_state.lock);

 FUNC_0(&VAR_0->pit_state.pit_timer.pending, 0);
 VAR_0->pit_state.irq_ack = 1;
}
