
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* remote_GPs; } ;
struct TYPE_8__ {TYPE_2__ sn2; } ;
struct xpc_partition {TYPE_3__ sn; struct xpc_channel* channels; } ;
struct TYPE_10__ {scalar_t__ get; scalar_t__ put; } ;
struct TYPE_9__ {scalar_t__ get; scalar_t__ put; } ;
struct xpc_channel_sn2 {TYPE_5__ w_remote_GP; TYPE_4__ remote_GP; } ;
struct TYPE_6__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int flags; int number; int partid; int msg_allocate_wq; int n_on_msg_allocate_wq; int n_to_notify; TYPE_1__ sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct xpc_channel*,int) ;
 int VAR_3 ;
 int FUNC_5 (struct xpc_channel*) ;
 int FUNC_6 (struct xpc_channel*) ;
 int FUNC_7 (struct xpc_channel*) ;
 int FUNC_8 (struct xpc_channel*) ;
 int FUNC_9 (struct xpc_channel*) ;
 int FUNC_10 (struct xpc_channel*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct xpc_partition *VAR_4, int VAR_5)
{
 struct xpc_channel *VAR_6 = &VAR_4->channels[VAR_5];
 struct xpc_channel_sn2 *VAR_7 = &VAR_6->sn.sn2;
 int VAR_8;

 VAR_7->remote_GP = VAR_4->sn.sn2.remote_GPs[VAR_5];



 FUNC_8(VAR_6);

 if (VAR_7->w_remote_GP.get == VAR_7->remote_GP.get &&
     VAR_7->w_remote_GP.put == VAR_7->remote_GP.put) {

  FUNC_7(VAR_6);
  return;
 }

 if (!(VAR_6->flags & VAR_0)) {
  FUNC_7(VAR_6);
  return;
 }







 if (VAR_7->w_remote_GP.get != VAR_7->remote_GP.get) {
  if (FUNC_0(&VAR_6->n_to_notify) > 0) {




   FUNC_10(VAR_6, VAR_2,
            VAR_7->remote_GP.get);
  }





  FUNC_5(VAR_6);

  VAR_7->w_remote_GP.get = VAR_7->remote_GP.get;

  FUNC_1(VAR_3, "w_remote_GP.get changed to %lld, partid=%d, "
   "channel=%d\n", VAR_7->w_remote_GP.get, VAR_6->partid,
   VAR_6->number);





  if (FUNC_0(&VAR_6->n_on_msg_allocate_wq) > 0)
   FUNC_3(&VAR_6->msg_allocate_wq);
 }






 if (VAR_7->w_remote_GP.put != VAR_7->remote_GP.put) {




  FUNC_6(VAR_6);

  FUNC_2();
  VAR_7->w_remote_GP.put = VAR_7->remote_GP.put;

  FUNC_1(VAR_3, "w_remote_GP.put changed to %lld, partid=%d, "
   "channel=%d\n", VAR_7->w_remote_GP.put, VAR_6->partid,
   VAR_6->number);

  VAR_8 = FUNC_9(VAR_6);
  if (VAR_8 > 0) {
   FUNC_1(VAR_3, "msgs waiting to be copied and "
    "delivered=%d, partid=%d, channel=%d\n",
    VAR_8, VAR_6->partid, VAR_6->number);

   if (VAR_6->flags & VAR_1)
    FUNC_4(VAR_6, VAR_8);
  }
 }

 FUNC_7(VAR_6);
}
