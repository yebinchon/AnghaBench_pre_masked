
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xpc_channel {int flags; int lock; int msg_allocate_wq; int n_on_msg_allocate_wq; int idle_wq; int kthreads_idle; int number; int partid; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* send_chctl_closerequest ) (struct xpc_channel*,unsigned long*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct xpc_channel*,int,int const) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,int const,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct xpc_channel*,unsigned long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct xpc_channel*,int,int) ;

void
FUNC_11(const int VAR_14, struct xpc_channel *VAR_15,
         enum xp_retval VAR_16, unsigned long *VAR_17)
{
 u32 VAR_18 = (VAR_15->flags & VAR_1);

 FUNC_0(!FUNC_4(&VAR_15->lock));

 if (VAR_15->flags & (VAR_5 | VAR_4))
  return;

 FUNC_0(!(VAR_15->flags & (VAR_3 | VAR_1)));

 FUNC_3(VAR_13, "reason=%d, line=%d, partid=%d, channel=%d\n",
  VAR_16, VAR_14, VAR_15->partid, VAR_15->number);

 FUNC_1(VAR_15, VAR_16, VAR_14);

 VAR_15->flags |= (VAR_0 | VAR_5);

 VAR_15->flags &= ~(VAR_8 | VAR_7 |
         VAR_10 | VAR_9 |
         VAR_3 | VAR_1);

 VAR_12.send_chctl_closerequest(VAR_15, VAR_17);

 if (VAR_18)
  VAR_15->flags |= VAR_11;

 FUNC_6(&VAR_15->lock, *VAR_17);


 if (FUNC_2(&VAR_15->kthreads_idle) > 0) {
  FUNC_9(&VAR_15->idle_wq);

 } else if ((VAR_15->flags & VAR_2) &&
     !(VAR_15->flags & VAR_6)) {

  FUNC_10(VAR_15, 1, 1);
 }


 if (FUNC_2(&VAR_15->n_on_msg_allocate_wq) > 0)
  FUNC_8(&VAR_15->msg_allocate_wq);

 FUNC_5(&VAR_15->lock, *VAR_17);
}
