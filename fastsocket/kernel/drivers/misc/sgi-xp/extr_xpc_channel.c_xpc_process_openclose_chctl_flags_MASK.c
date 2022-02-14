
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* flags; } ;
struct xpc_partition {scalar_t__ act_state; int nchannels_active; int chctl_lock; TYPE_1__ chctl; struct xpc_channel* channels; struct xpc_openclose_args* remote_openclose_args; } ;
struct xpc_openclose_args {int reason; scalar_t__ entry_size; scalar_t__ local_nentries; scalar_t__ local_msgqueue_pa; scalar_t__ remote_nentries; } ;
struct xpc_channel {int flags; int delayed_chctl_flags; scalar_t__ remote_nentries; scalar_t__ entry_size; scalar_t__ local_nentries; int lock; int number; int partid; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {int (* save_remote_msgqueue_pa ) (struct xpc_channel*,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct xpc_channel*,int,unsigned long*) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (struct xpc_channel*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int,scalar_t__,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct xpc_channel*,scalar_t__) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_2__ VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (struct xpc_channel*,int,int ) ;
 int FUNC_11 (struct xpc_channel*,unsigned long*) ;
 int FUNC_12 (struct xpc_channel*,unsigned long*) ;

__attribute__((used)) static void
FUNC_13(struct xpc_partition *VAR_28, int VAR_29,
      u8 VAR_30)
{
 unsigned long VAR_31;
 struct xpc_openclose_args *VAR_32 =
     &VAR_28->remote_openclose_args[VAR_29];
 struct xpc_channel *VAR_33 = &VAR_28->channels[VAR_29];
 enum xp_retval VAR_34;
 enum xp_retval VAR_35;
 int VAR_36 = 0;

 FUNC_6(&VAR_33->lock, VAR_31);

again:

 if ((VAR_33->flags & VAR_9) &&
     (VAR_33->flags & VAR_18)) {




  VAR_33->delayed_chctl_flags |= VAR_30;
  goto out;
 }

 if (VAR_30 & VAR_1) {

  FUNC_4(VAR_27, "XPC_CHCTL_CLOSEREQUEST (reason=%d) received "
   "from partid=%d, channel=%d\n", VAR_32->reason,
   VAR_33->partid, VAR_33->number);







  if (VAR_33->flags & VAR_14) {
   FUNC_0(!(VAR_33->flags & VAR_10));
   FUNC_0(!(VAR_33->flags & VAR_6));
   FUNC_0(!(VAR_33->flags & VAR_5));
   FUNC_0(VAR_33->flags & VAR_13);

   FUNC_0(!(VAR_30 & VAR_0));
   VAR_30 &= ~VAR_0;
   VAR_33->flags |= VAR_13;


   FUNC_12(VAR_33, &VAR_31);
   FUNC_0(!(VAR_33->flags & VAR_9));
   goto again;
  }

  if (VAR_33->flags & VAR_9) {
   if (!(VAR_30 & VAR_4)) {
    if (VAR_28->chctl.flags[VAR_29] &
        VAR_4) {

     FUNC_0(VAR_33->delayed_chctl_flags != 0);
     FUNC_5(&VAR_28->chctl_lock);
     VAR_28->chctl.flags[VAR_29] |=
         VAR_1;
     FUNC_7(&VAR_28->chctl_lock);
    }
    goto out;
   }

   FUNC_2(VAR_33, 0, 0);
   VAR_33->flags &= ~VAR_9;

   FUNC_3(&VAR_28->nchannels_active);
   VAR_33->flags |= (VAR_8 | VAR_17);
  }

  VAR_30 &= ~(VAR_4 | VAR_3 |
      VAR_2);






  VAR_33->flags |= VAR_14;

  if (!(VAR_33->flags & VAR_10)) {
   VAR_34 = VAR_32->reason;
   if (VAR_34 <= VAR_22 || VAR_34 > VAR_24)
    VAR_34 = VAR_24;
   else if (VAR_34 == VAR_25)
    VAR_34 = VAR_21;

   FUNC_1(VAR_33, VAR_34, &VAR_31);

   FUNC_0(VAR_30 & VAR_0);
   goto out;
  }

  FUNC_12(VAR_33, &VAR_31);
 }

 if (VAR_30 & VAR_0) {

  FUNC_4(VAR_27, "XPC_CHCTL_CLOSEREPLY received from partid="
   "%d, channel=%d\n", VAR_33->partid, VAR_33->number);

  if (VAR_33->flags & VAR_9) {
   FUNC_0(VAR_28->act_state != VAR_19);
   goto out;
  }

  FUNC_0(!(VAR_33->flags & VAR_6));

  if (!(VAR_33->flags & VAR_14)) {
   if (VAR_28->chctl.flags[VAR_29] &
       VAR_1) {

    FUNC_0(VAR_33->delayed_chctl_flags != 0);
    FUNC_5(&VAR_28->chctl_lock);
    VAR_28->chctl.flags[VAR_29] |=
        VAR_0;
    FUNC_7(&VAR_28->chctl_lock);
   }
   goto out;
  }

  VAR_33->flags |= VAR_13;

  if (VAR_33->flags & VAR_5) {

   FUNC_12(VAR_33, &VAR_31);
  }
 }

 if (VAR_30 & VAR_4) {

  FUNC_4(VAR_27, "XPC_CHCTL_OPENREQUEST (entry_size=%d, "
   "local_nentries=%d) received from partid=%d, "
   "channel=%d\n", VAR_32->entry_size, VAR_32->local_nentries,
   VAR_33->partid, VAR_33->number);

  if (VAR_28->act_state == VAR_19 ||
      (VAR_33->flags & VAR_17)) {
   goto out;
  }

  if (VAR_33->flags & (VAR_10 | VAR_18)) {
   VAR_33->delayed_chctl_flags |= VAR_4;
   goto out;
  }
  FUNC_0(!(VAR_33->flags & (VAR_9 |
           VAR_12)));
  FUNC_0(VAR_33->flags & (VAR_17 | VAR_16 |
         VAR_11 | VAR_7));






  if (VAR_32->entry_size == 0 || VAR_32->local_nentries == 0) {

   goto out;
  }

  VAR_33->flags |= (VAR_17 | VAR_8);
  VAR_33->remote_nentries = VAR_32->local_nentries;

  if (VAR_33->flags & VAR_12) {
   if (VAR_32->entry_size != VAR_33->entry_size) {
    FUNC_1(VAR_33, VAR_23,
             &VAR_31);
    goto out;
   }
  } else {
   VAR_33->entry_size = VAR_32->entry_size;

   FUNC_2(VAR_33, 0, 0);
   VAR_33->flags &= ~VAR_9;

   FUNC_3(&VAR_28->nchannels_active);
  }

  FUNC_11(VAR_33, &VAR_31);
 }

 if (VAR_30 & VAR_3) {

  FUNC_4(VAR_27, "XPC_CHCTL_OPENREPLY (local_msgqueue_pa="
   "0x%lx, local_nentries=%d, remote_nentries=%d) "
   "received from partid=%d, channel=%d\n",
   VAR_32->local_msgqueue_pa, VAR_32->local_nentries,
   VAR_32->remote_nentries, VAR_33->partid, VAR_33->number);

  if (VAR_33->flags & (VAR_10 | VAR_9))
   goto out;

  if (!(VAR_33->flags & VAR_12)) {
   FUNC_1(VAR_33, VAR_20,
            &VAR_31);
   goto out;
  }

  FUNC_0(!(VAR_33->flags & VAR_17));
  FUNC_0(VAR_33->flags & VAR_7);
  FUNC_0(VAR_32->local_msgqueue_pa == 0);
  FUNC_0(VAR_32->local_nentries == 0);
  FUNC_0(VAR_32->remote_nentries == 0);

  VAR_35 = VAR_26.save_remote_msgqueue_pa(VAR_33,
            VAR_32->local_msgqueue_pa);
  if (VAR_35 != VAR_22) {
   FUNC_1(VAR_33, VAR_35, &VAR_31);
   goto out;
  }
  VAR_33->flags |= VAR_16;

  if (VAR_32->local_nentries < VAR_33->remote_nentries) {
   FUNC_4(VAR_27, "XPC_CHCTL_OPENREPLY: new "
    "remote_nentries=%d, old remote_nentries=%d, "
    "partid=%d, channel=%d\n",
    VAR_32->local_nentries, VAR_33->remote_nentries,
    VAR_33->partid, VAR_33->number);

   VAR_33->remote_nentries = VAR_32->local_nentries;
  }
  if (VAR_32->remote_nentries < VAR_33->local_nentries) {
   FUNC_4(VAR_27, "XPC_CHCTL_OPENREPLY: new "
    "local_nentries=%d, old local_nentries=%d, "
    "partid=%d, channel=%d\n",
    VAR_32->remote_nentries, VAR_33->local_nentries,
    VAR_33->partid, VAR_33->number);

   VAR_33->local_nentries = VAR_32->remote_nentries;
  }

  FUNC_11(VAR_33, &VAR_31);
 }

 if (VAR_30 & VAR_2) {

  FUNC_4(VAR_27, "XPC_CHCTL_OPENCOMPLETE received from "
   "partid=%d, channel=%d\n", VAR_33->partid, VAR_33->number);

  if (VAR_33->flags & (VAR_10 | VAR_9))
   goto out;

  if (!(VAR_33->flags & VAR_12) ||
      !(VAR_33->flags & VAR_11)) {
   FUNC_1(VAR_33, VAR_20,
            &VAR_31);
   goto out;
  }

  FUNC_0(!(VAR_33->flags & VAR_17));
  FUNC_0(!(VAR_33->flags & VAR_16));
  FUNC_0(!(VAR_33->flags & VAR_7));

  VAR_33->flags |= VAR_15;

  FUNC_11(VAR_33, &VAR_31);
  VAR_36 = 1;
 }

out:
 FUNC_8(&VAR_33->lock, VAR_31);

 if (VAR_36)
  FUNC_10(VAR_33, 1, 0);
}
