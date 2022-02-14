
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ all_flags; } ;
struct xpc_partition {int nchannels; struct xpc_channel* channels; int * remote_openclose_args; struct xpc_channel* remote_openclose_args_base; int setup_state; int nchannels_engaged; int nchannels_active; int channel_mgr_wq; int channel_mgr_requests; int chctl_lock; TYPE_1__ chctl; } ;
struct xpc_channel {short partid; int number; int idle_wq; int msg_allocate_wq; int n_on_msg_allocate_wq; int wdisconnect_wait; int lock; int n_to_notify; int references; int kthreads_active; int kthreads_idle; int kthreads_assigned; int flags; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_4__ {int (* setup_ch_structures ) (struct xpc_partition*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short FUNC_1 (struct xpc_partition*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xpc_channel*) ;
 struct xpc_channel* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xpc_partition*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_10 (int ,int ,struct xpc_channel**) ;

__attribute__((used)) static enum xp_retval
FUNC_11(struct xpc_partition *VAR_9)
{
 enum xp_retval VAR_10;
 int VAR_11;
 struct xpc_channel *VAR_12;
 short VAR_13 = FUNC_1(VAR_9);





 FUNC_0(VAR_9->channels != ((void*)0));
 VAR_9->channels = FUNC_7(sizeof(struct xpc_channel) * VAR_2,
     VAR_0);
 if (VAR_9->channels == ((void*)0)) {
  FUNC_3(VAR_8, "can't get memory for channels\n");
  return VAR_5;
 }



 VAR_9->remote_openclose_args =
     FUNC_10(VAR_3,
       VAR_0, &VAR_9->
       remote_openclose_args_base);
 if (VAR_9->remote_openclose_args == ((void*)0)) {
  FUNC_3(VAR_8, "can't get memory for remote connect args\n");
  VAR_10 = VAR_5;
  goto out_1;
 }

 VAR_9->chctl.all_flags = 0;
 FUNC_8(&VAR_9->chctl_lock);

 FUNC_2(&VAR_9->channel_mgr_requests, 1);
 FUNC_5(&VAR_9->channel_mgr_wq);

 VAR_9->nchannels = VAR_2;

 FUNC_2(&VAR_9->nchannels_active, 0);
 FUNC_2(&VAR_9->nchannels_engaged, 0);

 for (VAR_11 = 0; VAR_11 < VAR_9->nchannels; VAR_11++) {
  VAR_12 = &VAR_9->channels[VAR_11];

  VAR_12->partid = VAR_13;
  VAR_12->number = VAR_11;
  VAR_12->flags = VAR_1;

  FUNC_2(&VAR_12->kthreads_assigned, 0);
  FUNC_2(&VAR_12->kthreads_idle, 0);
  FUNC_2(&VAR_12->kthreads_active, 0);

  FUNC_2(&VAR_12->references, 0);
  FUNC_2(&VAR_12->n_to_notify, 0);

  FUNC_8(&VAR_12->lock);
  FUNC_4(&VAR_12->wdisconnect_wait);

  FUNC_2(&VAR_12->n_on_msg_allocate_wq, 0);
  FUNC_5(&VAR_12->msg_allocate_wq);
  FUNC_5(&VAR_12->idle_wq);
 }

 VAR_10 = VAR_7.setup_ch_structures(VAR_9);
 if (VAR_10 != VAR_6)
  goto out_2;





 VAR_9->setup_state = VAR_4;

 return VAR_6;


out_2:
 FUNC_6(VAR_9->remote_openclose_args_base);
 VAR_9->remote_openclose_args = ((void*)0);
out_1:
 FUNC_6(VAR_9->channels);
 VAR_9->channels = ((void*)0);
 return VAR_10;
}
