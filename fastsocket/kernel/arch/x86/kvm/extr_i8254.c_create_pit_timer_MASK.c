
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int function; } ;
struct kvm_timer {TYPE_4__ timer; int pending; int kvm; int * t_ops; int period; } ;
struct kvm_kpit_state {int is_periodic; int irq_ack; TYPE_3__* pit; struct kvm_timer pit_timer; } ;
struct TYPE_7__ {TYPE_1__* vpit; } ;
struct kvm {TYPE_2__ arch; } ;
typedef int s64 ;
struct TYPE_8__ {int kvm; int expired; } ;
struct TYPE_6__ {struct kvm_kpit_state pit_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (struct kvm*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(struct kvm *VAR_5, u32 VAR_6, int VAR_7)
{
 struct kvm_kpit_state *VAR_8 = &VAR_5->arch.vpit->pit_state;
 struct kvm_timer *VAR_9 = &VAR_8->pit_timer;
 s64 VAR_10;

 if (!FUNC_4(VAR_5))
  return;

 VAR_10 = FUNC_7(VAR_6, VAR_2, VAR_1);

 FUNC_8("pit: create pit timer, interval is %llu nsec\n", VAR_10);


 FUNC_2(&VAR_9->timer);
 FUNC_1(&VAR_8->pit->expired);
 VAR_9->period = VAR_10;
 VAR_8->is_periodic = VAR_7;

 VAR_9->timer.function = VAR_4;
 VAR_9->t_ops = &VAR_3;
 VAR_9->kvm = VAR_8->pit->kvm;

 FUNC_0(&VAR_9->pending, 0);
 VAR_8->irq_ack = 1;

 FUNC_3(&VAR_9->timer, FUNC_5(FUNC_6(), VAR_10),
        VAR_0);
}
