
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int msg_slot_number; } ;
struct xpc_notify_mq_msg_uv {TYPE_2__ hdr; } ;
struct xpc_channel_uv {struct xpc_notify_mq_msg_uv* recv_msg_slots; } ;
struct TYPE_3__ {struct xpc_channel_uv uv; } ;
struct xpc_channel {int remote_nentries; int entry_size; int lock; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 struct xpc_notify_mq_msg_uv* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum xp_retval
FUNC_3(struct xpc_channel *VAR_3)
{
 struct xpc_channel_uv *VAR_4 = &VAR_3->sn.uv;
 struct xpc_notify_mq_msg_uv *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;
 size_t VAR_9;

 for (VAR_7 = VAR_3->remote_nentries; VAR_7 > 0; VAR_7--) {
  VAR_9 = VAR_7 * VAR_3->entry_size;
  VAR_4->recv_msg_slots = FUNC_0(VAR_9, VAR_0);
  if (VAR_4->recv_msg_slots == ((void*)0))
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_5 = VAR_4->recv_msg_slots +
       VAR_8 * VAR_3->entry_size;

   VAR_5->hdr.msg_slot_number = VAR_8;
  }

  FUNC_1(&VAR_3->lock, VAR_6);
  if (VAR_7 < VAR_3->remote_nentries)
   VAR_3->remote_nentries = VAR_7;
  FUNC_2(&VAR_3->lock, VAR_6);
  return VAR_2;
 }

 return VAR_1;
}
