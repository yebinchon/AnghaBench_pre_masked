
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ put; scalar_t__ get; } ;
struct TYPE_9__ {scalar_t__ put; scalar_t__ get; } ;
struct TYPE_8__ {scalar_t__ put; scalar_t__ get; } ;
struct xpc_channel_sn2 {int * notify_queue; int * remote_msgqueue; int * remote_msgqueue_base; int * local_msgqueue; int * local_msgqueue_base; scalar_t__ next_msg_to_pull; TYPE_5__ w_remote_GP; TYPE_4__ w_local_GP; TYPE_3__ remote_GP; TYPE_2__* local_GP; scalar_t__ remote_msgqueue_pa; } ;
struct TYPE_6__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int flags; int number; int partid; int lock; TYPE_1__ sn; } ;
struct TYPE_7__ {scalar_t__ put; scalar_t__ get; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct xpc_channel *VAR_2)
{
 struct xpc_channel_sn2 *VAR_3 = &VAR_2->sn.sn2;

 FUNC_0(!FUNC_3(&VAR_2->lock));

 VAR_3->remote_msgqueue_pa = 0;

 VAR_3->local_GP->get = 0;
 VAR_3->local_GP->put = 0;
 VAR_3->remote_GP.get = 0;
 VAR_3->remote_GP.put = 0;
 VAR_3->w_local_GP.get = 0;
 VAR_3->w_local_GP.put = 0;
 VAR_3->w_remote_GP.get = 0;
 VAR_3->w_remote_GP.put = 0;
 VAR_3->next_msg_to_pull = 0;

 if (VAR_2->flags & VAR_0) {
  FUNC_1(VAR_1, "ch->flags=0x%x, partid=%d, channel=%d\n",
   VAR_2->flags, VAR_2->partid, VAR_2->number);

  FUNC_2(VAR_3->local_msgqueue_base);
  VAR_3->local_msgqueue = ((void*)0);
  FUNC_2(VAR_3->remote_msgqueue_base);
  VAR_3->remote_msgqueue = ((void*)0);
  FUNC_2(VAR_3->notify_queue);
  VAR_3->notify_queue = ((void*)0);
 }
}
