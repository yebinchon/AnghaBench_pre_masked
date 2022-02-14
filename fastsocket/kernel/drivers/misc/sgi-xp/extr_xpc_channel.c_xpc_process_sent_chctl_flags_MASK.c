
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union xpc_channel_ctl_flags {int* flags; int all_flags; } ;
typedef int u32 ;
struct xpc_partition {int nchannels; scalar_t__ act_state; struct xpc_channel* channels; } ;
struct xpc_channel {int flags; int lock; } ;
struct TYPE_2__ {int (* process_msg_chctl_flags ) (struct xpc_partition*,int) ;int (* get_chctl_all_flags ) (struct xpc_partition*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct xpc_partition*) ;
 int FUNC_4 (struct xpc_partition*,int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (struct xpc_channel*) ;
 int FUNC_6 (struct xpc_channel*,unsigned long*) ;
 int FUNC_7 (struct xpc_partition*,int,int) ;

void
FUNC_8(struct xpc_partition *VAR_8)
{
 unsigned long VAR_9;
 union xpc_channel_ctl_flags VAR_10;
 struct xpc_channel *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_10.all_flags = VAR_7.get_chctl_all_flags(VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_8->nchannels; VAR_12++) {
  VAR_11 = &VAR_8->channels[VAR_12];






  if (VAR_10.flags[VAR_12] & VAR_5) {
   FUNC_7(VAR_8, VAR_12,
       VAR_10.flags[VAR_12]);
  }

  VAR_13 = VAR_11->flags;

  if (VAR_13 & VAR_1) {
   FUNC_1(&VAR_11->lock, VAR_9);
   FUNC_6(VAR_11, &VAR_9);
   FUNC_2(&VAR_11->lock, VAR_9);
   continue;
  }

  if (VAR_8->act_state == VAR_6)
   continue;

  if (!(VAR_13 & VAR_0)) {
   if (!(VAR_13 & VAR_2)) {
    FUNC_0(VAR_13 & VAR_3);
    (void)FUNC_5(VAR_11);
   }
   continue;
  }







  if (VAR_10.flags[VAR_12] & VAR_4)
   VAR_7.process_msg_chctl_flags(VAR_8, VAR_12);
 }
}
