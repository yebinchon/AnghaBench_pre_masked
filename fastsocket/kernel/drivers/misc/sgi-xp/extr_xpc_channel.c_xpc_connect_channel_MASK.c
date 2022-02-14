
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_registration {scalar_t__ entry_size; int mutex; int nentries; int key; int * func; int idle_limit; int assigned_limit; } ;
struct xpc_channel {size_t number; int flags; int reason; scalar_t__ entry_size; size_t partid; int lock; int local_nentries; int key; int * func; int kthreads_active; int kthreads_idle; int kthreads_assigned; int kthreads_idle_limit; int kthreads_assigned_limit; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {int (* send_chctl_openrequest ) (struct xpc_channel*,unsigned long*) ;} ;
struct TYPE_3__ {int nchannels_active; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xpc_channel*,int,unsigned long*) ;
 int FUNC_3 (struct xpc_channel*,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct xpc_channel*,unsigned long*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_11 (struct xpc_channel*,unsigned long*) ;
 struct xpc_registration* VAR_12 ;

__attribute__((used)) static enum xp_retval
FUNC_12(struct xpc_channel *VAR_13)
{
 unsigned long VAR_14;
 struct xpc_registration *VAR_15 = &VAR_12[VAR_13->number];

 if (FUNC_6(&VAR_15->mutex) == 0)
  return VAR_6;

 if (!FUNC_1(VAR_13->number)) {
  FUNC_7(&VAR_15->mutex);
  return VAR_9;
 }

 FUNC_8(&VAR_13->lock, VAR_14);

 FUNC_0(VAR_13->flags & VAR_0);
 FUNC_0(VAR_13->flags & VAR_4);

 if (VAR_13->flags & VAR_3) {
  FUNC_9(&VAR_13->lock, VAR_14);
  FUNC_7(&VAR_15->mutex);
  return VAR_13->reason;
 }



 VAR_13->kthreads_assigned_limit = VAR_15->assigned_limit;
 VAR_13->kthreads_idle_limit = VAR_15->idle_limit;
 FUNC_0(FUNC_5(&VAR_13->kthreads_assigned) != 0);
 FUNC_0(FUNC_5(&VAR_13->kthreads_idle) != 0);
 FUNC_0(FUNC_5(&VAR_13->kthreads_active) != 0);

 VAR_13->func = VAR_15->func;
 FUNC_0(VAR_15->func == ((void*)0));
 VAR_13->key = VAR_15->key;

 VAR_13->local_nentries = VAR_15->nentries;

 if (VAR_13->flags & VAR_5) {
  if (VAR_15->entry_size != VAR_13->entry_size) {
   FUNC_7(&VAR_15->mutex);
   FUNC_2(VAR_13, VAR_8,
            &VAR_14);
   FUNC_9(&VAR_13->lock, VAR_14);
   return VAR_8;
  }
 } else {
  VAR_13->entry_size = VAR_15->entry_size;

  FUNC_3(VAR_13, 0, 0);
  VAR_13->flags &= ~VAR_2;

  FUNC_4(&VAR_11[VAR_13->partid].nchannels_active);
 }

 FUNC_7(&VAR_15->mutex);



 VAR_13->flags |= (VAR_4 | VAR_1);
 VAR_10.send_chctl_openrequest(VAR_13, &VAR_14);

 FUNC_11(VAR_13, &VAR_14);

 FUNC_9(&VAR_13->lock, VAR_14);

 return VAR_7;
}
