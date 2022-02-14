
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xpc_notify_func ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xpc_notify_sn2 {int type; void* key; int * func; } ;
struct xpc_msg_sn2 {size_t number; int flags; int payload; } ;
struct xpc_channel_sn2 {TYPE_2__* local_GP; struct xpc_notify_sn2* notify_queue; } ;
struct TYPE_3__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {scalar_t__ entry_size; int flags; int reason; size_t local_nentries; int n_to_notify; TYPE_1__ sn; } ;
typedef size_t s64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {size_t put; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,void*,int ) ;
 struct xpc_msg_sn2* VAR_5 ;
 struct xpc_notify_sn2* VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct xpc_channel*,int ,struct xpc_msg_sn2**) ;
 int FUNC_8 (struct xpc_channel*) ;
 int FUNC_9 (struct xpc_channel*) ;
 int FUNC_10 (struct xpc_channel*,size_t) ;

__attribute__((used)) static enum xp_retval
FUNC_11(struct xpc_channel *VAR_10, u32 VAR_11, void *VAR_12,
       u16 VAR_13, u8 VAR_14, xpc_notify_func VAR_15,
       void *VAR_16)
{
 enum xp_retval VAR_17 = VAR_9;
 struct xpc_channel_sn2 *VAR_18 = &VAR_10->sn.sn2;
 struct xpc_msg_sn2 *VAR_19 = VAR_19;
 struct xpc_notify_sn2 *VAR_20 = VAR_20;
 s64 VAR_21;
 s64 VAR_22;

 FUNC_0(VAR_14 == VAR_4 && VAR_15 == ((void*)0));

 if (FUNC_1(VAR_13) > VAR_10->entry_size)
  return VAR_8;

 FUNC_9(VAR_10);

 if (VAR_10->flags & VAR_1) {
  VAR_17 = VAR_10->reason;
  goto out_1;
 }
 if (!(VAR_10->flags & VAR_0)) {
  VAR_17 = VAR_7;
  goto out_1;
 }

 VAR_17 = FUNC_7(VAR_10, VAR_11, &VAR_19);
 if (VAR_17 != VAR_9)
  goto out_1;

 VAR_21 = VAR_19->number;

 if (VAR_14 != 0) {




  VAR_19->flags |= VAR_2;

  FUNC_3(&VAR_10->n_to_notify);

  VAR_20 = &VAR_18->notify_queue[VAR_21 % VAR_10->local_nentries];
  VAR_20->func = VAR_15;
  VAR_20->key = VAR_16;
  VAR_20->type = VAR_14;



  if (VAR_10->flags & VAR_1) {







   if (FUNC_4(&VAR_20->type, VAR_14, 0) ==
       VAR_14) {
    FUNC_2(&VAR_10->n_to_notify);
    VAR_17 = VAR_10->reason;
   }
   goto out_1;
  }
 }

 FUNC_5(&VAR_19->payload, VAR_12, VAR_13);

 VAR_19->flags |= VAR_3;





 FUNC_6();



 VAR_22 = VAR_18->local_GP->put;
 if (VAR_22 == VAR_21)
  FUNC_10(VAR_10, VAR_22);

out_1:
 FUNC_8(VAR_10);
 return VAR_17;
}
