
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_notify_sn2 {int dummy; } ;
struct xpc_channel_sn2 {int * local_msgqueue; int local_msgqueue_base; int * notify_queue; } ;
struct TYPE_2__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int local_nentries; int entry_size; int number; int partid; int lock; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (size_t,int ,int *) ;

__attribute__((used)) static enum xp_retval
FUNC_6(struct xpc_channel *VAR_4)
{
 struct xpc_channel_sn2 *VAR_5 = &VAR_4->sn.sn2;
 unsigned long VAR_6;
 int VAR_7;
 size_t VAR_8;

 for (VAR_7 = VAR_4->local_nentries; VAR_7 > 0; VAR_7--) {

  VAR_8 = VAR_7 * VAR_4->entry_size;
  VAR_5->local_msgqueue =
      FUNC_5(VAR_8, VAR_0,
        &VAR_5->local_msgqueue_base);
  if (VAR_5->local_msgqueue == ((void*)0))
   continue;

  VAR_8 = VAR_7 * sizeof(struct xpc_notify_sn2);
  VAR_5->notify_queue = FUNC_2(VAR_8, VAR_0);
  if (VAR_5->notify_queue == ((void*)0)) {
   FUNC_1(VAR_5->local_msgqueue_base);
   VAR_5->local_msgqueue = ((void*)0);
   continue;
  }

  FUNC_3(&VAR_4->lock, VAR_6);
  if (VAR_7 < VAR_4->local_nentries) {
   FUNC_0(VAR_3, "nentries=%d local_nentries=%d, "
    "partid=%d, channel=%d\n", VAR_7,
    VAR_4->local_nentries, VAR_4->partid, VAR_4->number);

   VAR_4->local_nentries = VAR_7;
  }
  FUNC_4(&VAR_4->lock, VAR_6);
  return VAR_2;
 }

 FUNC_0(VAR_3, "can't get memory for local message queue and notify "
  "queue, partid=%d, channel=%d\n", VAR_4->partid, VAR_4->number);
 return VAR_1;
}
