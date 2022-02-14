
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* vpit; } ;
struct kvm {TYPE_3__ arch; } ;
struct hrtimer {int dummy; } ;
struct TYPE_5__ {struct hrtimer timer; } ;
struct TYPE_6__ {int lock; TYPE_1__ pit_timer; int irq_ack_notifier; } ;
struct TYPE_8__ {int wq; TYPE_2__ pit_state; int irq_source_id; int expired; int mask_notifier; int speaker_dev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hrtimer*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct kvm*,int ) ;
 int FUNC_5 (struct kvm*,int ,int *) ;
 int FUNC_6 (struct kvm*,int *) ;
 int FUNC_7 (struct kvm*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct kvm *VAR_1)
{
 struct hrtimer *VAR_2;

 if (VAR_1->arch.vpit) {
  FUNC_5(VAR_1, VAR_0, &VAR_1->arch.vpit->dev);
  FUNC_5(VAR_1, VAR_0,
           &VAR_1->arch.vpit->speaker_dev);
  FUNC_7(VAR_1, 0,
            &VAR_1->arch.vpit->mask_notifier);
  FUNC_6(VAR_1,
    &VAR_1->arch.vpit->pit_state.irq_ack_notifier);
  FUNC_8(&VAR_1->arch.vpit->pit_state.lock);
  VAR_2 = &VAR_1->arch.vpit->pit_state.pit_timer.timer;
  FUNC_2(VAR_2);
  FUNC_0(&VAR_1->arch.vpit->expired);
  FUNC_4(VAR_1, VAR_1->arch.vpit->irq_source_id);
  FUNC_9(&VAR_1->arch.vpit->pit_state.lock);
  FUNC_1(VAR_1->arch.vpit->wq);
  FUNC_3(VAR_1->arch.vpit);
 }
}
