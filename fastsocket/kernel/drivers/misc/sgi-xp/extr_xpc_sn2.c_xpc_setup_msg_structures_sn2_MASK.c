
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel_sn2 {int * notify_queue; int * local_msgqueue; int * local_msgqueue_base; } ;
struct TYPE_2__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int flags; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct xpc_channel*) ;
 int FUNC_3 (struct xpc_channel*) ;

__attribute__((used)) static enum xp_retval
FUNC_4(struct xpc_channel *VAR_2)
{
 struct xpc_channel_sn2 *VAR_3 = &VAR_2->sn.sn2;
 enum xp_retval VAR_4;

 FUNC_0(VAR_2->flags & VAR_0);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == VAR_1) {

  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4 != VAR_1) {
   FUNC_1(VAR_3->local_msgqueue_base);
   VAR_3->local_msgqueue = ((void*)0);
   FUNC_1(VAR_3->notify_queue);
   VAR_3->notify_queue = ((void*)0);
  }
 }
 return VAR_4;
}
