
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xpc_partition {int nchannels_engaged; } ;
struct xpc_channel {size_t partid; int flags; scalar_t__ kthreads_idle_limit; int lock; int kthreads_assigned; int number; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {void (* indicate_partition_disengaged ) (struct xpc_partition*) ;int (* indicate_partition_engaged ) (struct xpc_partition*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct xpc_channel*,int ,unsigned long*) ;
 scalar_t__ FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 struct task_struct* FUNC_8 (int ,void*,char*,size_t,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct xpc_partition*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct xpc_channel*) ;
 int FUNC_13 (struct xpc_channel*) ;
 int FUNC_14 (struct xpc_partition*) ;
 int FUNC_15 (struct xpc_partition*) ;
 struct xpc_partition* VAR_5 ;

void
FUNC_16(struct xpc_channel *VAR_6, int VAR_7,
      int VAR_8)
{
 unsigned long VAR_9;
 u64 VAR_10 = FUNC_3(VAR_6->partid, VAR_6->number);
 struct xpc_partition *VAR_11 = &VAR_5[VAR_6->partid];
 struct task_struct *VAR_12;
 void (*VAR_13) (struct xpc_partition *) =
  VAR_3.indicate_partition_disengaged;

 while (VAR_7-- > 0) {






  if (VAR_8) {
   if (!FUNC_5(&VAR_6->kthreads_assigned)) {

    FUNC_0(!(VAR_6->flags &
      VAR_1));
    break;
   }

  } else if (VAR_6->flags & VAR_0) {
   break;

  } else if (FUNC_6(&VAR_6->kthreads_assigned) == 1 &&
      FUNC_6(&VAR_11->nchannels_engaged) == 1) {
   VAR_3.indicate_partition_engaged(VAR_11);
  }
  (void)FUNC_15(VAR_11);
  FUNC_13(VAR_6);

  VAR_12 = FUNC_8(VAR_4, (void *)VAR_10,
          "xpc%02dc%d", VAR_6->partid, VAR_6->number);
  if (FUNC_1(VAR_12)) {
   if (FUNC_4(&VAR_6->kthreads_assigned) == 0 &&
       FUNC_4(&VAR_11->nchannels_engaged) == 0) {
    VAR_13(VAR_11);
   }
   FUNC_12(VAR_6);
   FUNC_14(VAR_11);

   if (FUNC_7(&VAR_6->kthreads_assigned) <
       VAR_6->kthreads_idle_limit) {





    FUNC_9(&VAR_6->lock, VAR_9);
    FUNC_2(VAR_6, VAR_2,
             &VAR_9);
    FUNC_10(&VAR_6->lock, VAR_9);
   }
   break;
  }
 }
}
