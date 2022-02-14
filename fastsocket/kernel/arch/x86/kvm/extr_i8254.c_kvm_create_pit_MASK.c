
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int func; } ;
struct TYPE_6__ {int reinject; int timer; } ;
struct TYPE_8__ {int irq_acked; scalar_t__ gsi; } ;
struct kvm_kpit_state {int lock; TYPE_2__ pit_timer; TYPE_4__ irq_ack_notifier; struct kvm_pit* pit; int inject_lock; } ;
struct kvm_pit {scalar_t__ irq_source_id; int dev; int speaker_dev; TYPE_3__ mask_notifier; struct kvm_kpit_state pit_state; struct kvm* kvm; int expired; int wq; } ;
struct TYPE_5__ {struct kvm_pit* vpit; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct kvm_pit*) ;
 int FUNC_4 (struct kvm*,scalar_t__) ;
 int FUNC_5 (struct kvm*,int ,int *) ;
 int FUNC_6 (struct kvm*,int ,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct kvm_pit*) ;
 int FUNC_9 (struct kvm*,TYPE_4__*) ;
 int FUNC_10 (struct kvm*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_11 (struct kvm*) ;
 struct kvm_pit* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int *) ;

struct kvm_pit *FUNC_17(struct kvm *VAR_10, u32 VAR_11)
{
 struct kvm_pit *VAR_12;
 struct kvm_kpit_state *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_12(sizeof(struct kvm_pit), VAR_1);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->irq_source_id = FUNC_11(VAR_10);
 if (VAR_12->irq_source_id < 0) {
  FUNC_3(VAR_12);
  return ((void*)0);
 }

 FUNC_13(&VAR_12->pit_state.lock);
 FUNC_14(&VAR_12->pit_state.lock);
 FUNC_16(&VAR_12->pit_state.inject_lock);

 VAR_12->wq = FUNC_1("kvm-pit-wq");
 if (!VAR_12->wq) {
  FUNC_3(VAR_12);
  return ((void*)0);
 }
 FUNC_0(&VAR_12->expired, VAR_7);

 VAR_10->arch.vpit = VAR_12;
 VAR_12->kvm = VAR_10;

 VAR_13 = &VAR_12->pit_state;
 VAR_13->pit = VAR_12;
 FUNC_2(&VAR_13->pit_timer.timer,
       VAR_0, VAR_2);
 VAR_13->irq_ack_notifier.gsi = 0;
 VAR_13->irq_ack_notifier.irq_acked = VAR_5;
 FUNC_9(VAR_10, &VAR_13->irq_ack_notifier);
 VAR_13->pit_timer.reinject = 1;
 FUNC_15(&VAR_12->pit_state.lock);

 FUNC_8(VAR_12);

 VAR_12->mask_notifier.func = VAR_8;
 FUNC_10(VAR_10, 0, &VAR_12->mask_notifier);

 FUNC_7(&VAR_12->dev, &VAR_6);
 VAR_14 = FUNC_5(VAR_10, VAR_3, &VAR_12->dev);
 if (VAR_14 < 0)
  goto fail;

 if (VAR_11 & VAR_4) {
  FUNC_7(&VAR_12->speaker_dev, &VAR_9);
  VAR_14 = FUNC_5(VAR_10, VAR_3,
      &VAR_12->speaker_dev);
  if (VAR_14 < 0)
   goto fail_unregister;
 }

 return VAR_12;

fail_unregister:
 FUNC_6(VAR_10, VAR_3, &VAR_12->dev);

fail:
 if (VAR_12->irq_source_id >= 0)
  FUNC_4(VAR_10, VAR_12->irq_source_id);

 FUNC_3(VAR_12);
 return ((void*)0);
}
