
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xpc_send_msg_slot_uv {int msg_slot_number; int * func; } ;
struct TYPE_4__ {int msg_slot_number; } ;
struct xpc_notify_mq_msg_uv {TYPE_1__ hdr; } ;
struct TYPE_6__ {struct xpc_send_msg_slot_uv* send_msg_slots; } ;
struct TYPE_5__ {TYPE_3__ uv; } ;
struct xpc_channel {int local_nentries; TYPE_2__ sn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xpc_channel*,struct xpc_send_msg_slot_uv*) ;
 int FUNC_2 (struct xpc_channel*,struct xpc_send_msg_slot_uv*,int ) ;

__attribute__((used)) static void
FUNC_3(struct xpc_channel *VAR_1,
       struct xpc_notify_mq_msg_uv *VAR_2)
{
 struct xpc_send_msg_slot_uv *VAR_3;
 int VAR_4 = VAR_2->hdr.msg_slot_number % VAR_1->local_nentries;

 VAR_3 = &VAR_1->sn.uv.send_msg_slots[VAR_4];

 FUNC_0(VAR_3->msg_slot_number != VAR_2->hdr.msg_slot_number);
 VAR_3->msg_slot_number += VAR_1->local_nentries;

 if (VAR_3->func != ((void*)0))
  FUNC_2(VAR_1, VAR_3, VAR_0);

 FUNC_1(VAR_1, VAR_3);
}
