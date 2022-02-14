
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel_uv {int * recv_msg_slots; int recv_msg_list; int * send_msg_slots; int msg_slot_free_list; int * cached_notify_gru_mq_desc; } ;
struct TYPE_2__ {struct xpc_channel_uv uv; } ;
struct xpc_channel {int flags; int lock; TYPE_1__ sn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct xpc_channel *VAR_1)
{
 struct xpc_channel_uv *VAR_2 = &VAR_1->sn.uv;

 FUNC_0(!FUNC_2(&VAR_1->lock));

 FUNC_1(VAR_2->cached_notify_gru_mq_desc);
 VAR_2->cached_notify_gru_mq_desc = ((void*)0);

 if (VAR_1->flags & VAR_0) {
  FUNC_3(&VAR_2->msg_slot_free_list);
  FUNC_1(VAR_2->send_msg_slots);
  FUNC_3(&VAR_2->recv_msg_list);
  FUNC_1(VAR_2->recv_msg_slots);
 }
}
