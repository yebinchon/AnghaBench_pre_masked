
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_send_msg_slot_uv {int * func; } ;
struct TYPE_3__ {struct xpc_send_msg_slot_uv* send_msg_slots; } ;
struct TYPE_4__ {TYPE_1__ uv; } ;
struct xpc_channel {int flags; int local_nentries; int reason; TYPE_2__ sn; int n_to_notify; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xpc_channel*,struct xpc_send_msg_slot_uv*,int ) ;

__attribute__((used)) static void
FUNC_3(struct xpc_channel *VAR_1)
{
 struct xpc_send_msg_slot_uv *VAR_2;
 int VAR_3;

 FUNC_0(!(VAR_1->flags & VAR_0));

 for (VAR_3 = 0; VAR_3 < VAR_1->local_nentries; VAR_3++) {

  if (FUNC_1(&VAR_1->n_to_notify) == 0)
   break;

  VAR_2 = &VAR_1->sn.uv.send_msg_slots[VAR_3];
  if (VAR_2->func != ((void*)0))
   FUNC_2(VAR_1, VAR_2, VAR_1->reason);
 }
}
