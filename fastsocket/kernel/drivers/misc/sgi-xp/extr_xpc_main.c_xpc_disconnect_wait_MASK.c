
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* flags; } ;
struct xpc_partition {scalar_t__ act_state; int chctl_lock; TYPE_1__ chctl; struct xpc_channel* channels; } ;
struct xpc_channel {int flags; int delayed_chctl_flags; size_t number; int lock; int wdisconnect_wait; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 short VAR_3 ;
 int FUNC_6 (struct xpc_partition*) ;
 int FUNC_7 (struct xpc_partition*) ;
 struct xpc_partition* VAR_4 ;
 int FUNC_8 (struct xpc_partition*) ;

void
FUNC_9(int VAR_5)
{
 unsigned long VAR_6;
 short VAR_7;
 struct xpc_partition *VAR_8;
 struct xpc_channel *VAR_9;
 int VAR_10;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8 = &VAR_4[VAR_7];

  if (!FUNC_7(VAR_8))
   continue;

  VAR_9 = &VAR_8->channels[VAR_5];

  if (!(VAR_9->flags & VAR_1)) {
   FUNC_6(VAR_8);
   continue;
  }

  FUNC_5(&VAR_9->wdisconnect_wait);

  FUNC_2(&VAR_9->lock, VAR_6);
  FUNC_0(!(VAR_9->flags & VAR_0));
  VAR_10 = 0;

  if (VAR_9->delayed_chctl_flags) {
   if (VAR_8->act_state != VAR_2) {
    FUNC_1(&VAR_8->chctl_lock);
    VAR_8->chctl.flags[VAR_9->number] |=
        VAR_9->delayed_chctl_flags;
    FUNC_3(&VAR_8->chctl_lock);
    VAR_10 = 1;
   }
   VAR_9->delayed_chctl_flags = 0;
  }

  VAR_9->flags &= ~VAR_1;
  FUNC_4(&VAR_9->lock, VAR_6);

  if (VAR_10)
   FUNC_8(VAR_8);

  FUNC_6(VAR_8);
 }
}
