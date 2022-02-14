
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_send_msg_slot_uv {int msg_slot_number; int next; } ;
struct xpc_channel_uv {int msg_slot_free_list; struct xpc_send_msg_slot_uv* send_msg_slots; } ;
struct TYPE_2__ {struct xpc_channel_uv uv; } ;
struct xpc_channel {int local_nentries; int lock; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 struct xpc_send_msg_slot_uv* FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static enum xp_retval
FUNC_4(struct xpc_channel *VAR_3)
{
 struct xpc_channel_uv *VAR_4 = &VAR_3->sn.uv;
 struct xpc_send_msg_slot_uv *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;
 size_t VAR_9;

 for (VAR_7 = VAR_3->local_nentries; VAR_7 > 0; VAR_7--) {
  VAR_9 = VAR_7 * sizeof(struct xpc_send_msg_slot_uv);
  VAR_4->send_msg_slots = FUNC_0(VAR_9, VAR_0);
  if (VAR_4->send_msg_slots == ((void*)0))
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_5 = &VAR_4->send_msg_slots[VAR_8];

   VAR_5->msg_slot_number = VAR_8;
   FUNC_3(&VAR_4->msg_slot_free_list,
           &VAR_5->next);
  }

  FUNC_1(&VAR_3->lock, VAR_6);
  if (VAR_7 < VAR_3->local_nentries)
   VAR_3->local_nentries = VAR_7;
  FUNC_2(&VAR_3->lock, VAR_6);
  return VAR_2;
 }

 return VAR_1;
}
