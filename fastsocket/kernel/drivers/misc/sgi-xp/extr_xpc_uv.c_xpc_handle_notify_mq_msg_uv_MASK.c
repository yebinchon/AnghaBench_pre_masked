
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xpc_partition_uv {scalar_t__ act_state_req; int reason; } ;
struct TYPE_5__ {struct xpc_partition_uv uv; } ;
struct xpc_partition {int nchannels; struct xpc_channel* channels; TYPE_1__ sn; } ;
struct TYPE_7__ {int next; } ;
struct TYPE_8__ {int ch_number; scalar_t__ size; int msg_slot_number; TYPE_3__ u; } ;
struct xpc_notify_mq_msg_uv {TYPE_4__ hdr; } ;
struct xpc_channel_uv {int recv_msg_list; struct xpc_notify_mq_msg_uv* recv_msg_slots; } ;
struct TYPE_6__ {struct xpc_channel_uv uv; } ;
struct xpc_channel {int flags; int remote_nentries; int entry_size; int number; int idle_wq; int kthreads_idle; TYPE_2__ sn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xpc_partition*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct xpc_notify_mq_msg_uv*,struct xpc_notify_mq_msg_uv*,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct xpc_channel*,struct xpc_notify_mq_msg_uv*) ;
 int FUNC_11 (struct xpc_channel*) ;
 int FUNC_12 (struct xpc_channel*) ;
 int VAR_7 ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct xpc_partition*,int ) ;

__attribute__((used)) static void
FUNC_15(struct xpc_partition *VAR_8,
       struct xpc_notify_mq_msg_uv *VAR_9)
{
 struct xpc_partition_uv *VAR_10 = &VAR_8->sn.uv;
 struct xpc_channel *VAR_11;
 struct xpc_channel_uv *VAR_12;
 struct xpc_notify_mq_msg_uv *VAR_13;
 unsigned long VAR_14;
 int VAR_15 = VAR_9->hdr.ch_number;

 if (FUNC_7(VAR_15 >= VAR_8->nchannels)) {
  FUNC_3(VAR_7, "xpc_handle_notify_IRQ_uv() received invalid "
   "channel number=0x%x in message from partid=%d\n",
   VAR_15, FUNC_1(VAR_8));


  FUNC_5(&VAR_5, VAR_14);
  if (VAR_10->act_state_req == 0)
   VAR_4++;
  VAR_10->act_state_req = VAR_2;
  VAR_10->reason = VAR_3;
  FUNC_6(&VAR_5, VAR_14);

  FUNC_8(&VAR_6);
  return;
 }

 VAR_11 = &VAR_8->channels[VAR_15];
 FUNC_12(VAR_11);

 if (!(VAR_11->flags & VAR_0)) {
  FUNC_11(VAR_11);
  return;
 }


 if (VAR_9->hdr.size == 0) {
  FUNC_10(VAR_11, VAR_9);
  FUNC_11(VAR_11);
  return;
 }


 VAR_12 = &VAR_11->sn.uv;

 VAR_13 = VAR_12->recv_msg_slots +
     (VAR_9->hdr.msg_slot_number % VAR_11->remote_nentries) * VAR_11->entry_size;

 FUNC_0(VAR_13->hdr.size != 0);

 FUNC_4(VAR_13, VAR_9, VAR_9->hdr.size);

 FUNC_13(&VAR_12->recv_msg_list, &VAR_13->hdr.u.next);

 if (VAR_11->flags & VAR_1) {





  if (FUNC_2(&VAR_11->kthreads_idle) > 0)
   FUNC_9(&VAR_11->idle_wq, 1);
  else
   FUNC_14(VAR_8, VAR_11->number);
 }
 FUNC_11(VAR_11);
}
