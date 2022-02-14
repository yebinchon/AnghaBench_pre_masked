
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct xpc_partition {int nchannels_engaged; struct xpc_channel* channels; } ;
struct xpc_channel {int flags; int kthreads_assigned; int lock; } ;
struct TYPE_2__ {int (* n_of_deliverable_payloads ) (struct xpc_channel*) ;int (* indicate_partition_disengaged ) (struct xpc_partition*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short FUNC_0 (void*) ;
 size_t FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,short,size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct xpc_partition*) ;
 int VAR_5 ;
 int FUNC_7 (struct xpc_channel*,int) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct xpc_channel*) ;
 int FUNC_9 (struct xpc_channel*,int ) ;
 int FUNC_10 (struct xpc_partition*,struct xpc_channel*) ;
 int FUNC_11 (struct xpc_channel*) ;
 int FUNC_12 (struct xpc_partition*) ;
 struct xpc_partition* VAR_8 ;

__attribute__((used)) static int
FUNC_13(void *VAR_9)
{
 short VAR_10 = FUNC_0(VAR_9);
 u16 VAR_11 = FUNC_1(VAR_9);
 struct xpc_partition *VAR_12 = &VAR_8[VAR_10];
 struct xpc_channel *VAR_13;
 int VAR_14;
 unsigned long VAR_15;
 int (*VAR_16) (struct xpc_channel *) =
  VAR_6.n_of_deliverable_payloads;

 FUNC_3(VAR_7, "kthread starting, partid=%d, channel=%d\n",
  VAR_10, VAR_11);

 VAR_13 = &VAR_12->channels[VAR_11];

 if (!(VAR_13->flags & VAR_2)) {



  FUNC_4(&VAR_13->lock, VAR_15);
  if (!(VAR_13->flags & VAR_0)) {
   VAR_13->flags |= VAR_0;
   FUNC_5(&VAR_13->lock, VAR_15);

   FUNC_8(VAR_13);

   FUNC_4(&VAR_13->lock, VAR_15);
   VAR_13->flags |= VAR_1;
   FUNC_5(&VAR_13->lock, VAR_15);
   VAR_14 = VAR_16(VAR_13) - 1;
   if (VAR_14 > 0 && !(VAR_13->flags & VAR_2))
    FUNC_7(VAR_13, VAR_14);

  } else {
   FUNC_5(&VAR_13->lock, VAR_15);
  }

  FUNC_10(VAR_12, VAR_13);
 }



 FUNC_4(&VAR_13->lock, VAR_15);
 if ((VAR_13->flags & VAR_1) &&
     !(VAR_13->flags & VAR_3)) {
  VAR_13->flags |= VAR_3;
  FUNC_5(&VAR_13->lock, VAR_15);

  FUNC_9(VAR_13, VAR_5);

  FUNC_4(&VAR_13->lock, VAR_15);
  VAR_13->flags |= VAR_4;
 }
 FUNC_5(&VAR_13->lock, VAR_15);

 if (FUNC_2(&VAR_13->kthreads_assigned) == 0 &&
     FUNC_2(&VAR_12->nchannels_engaged) == 0) {
  VAR_6.indicate_partition_disengaged(VAR_12);
 }

 FUNC_11(VAR_13);

 FUNC_3(VAR_7, "kthread exiting, partid=%d, channel=%d\n",
  VAR_10, VAR_11);

 FUNC_12(VAR_12);
 return 0;
}
