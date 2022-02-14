
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ all_flags; } ;
struct xpc_partition {scalar_t__ act_state; int channel_mgr_requests; int nchannels_active; TYPE_1__ chctl; int channel_mgr_wq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct xpc_partition*) ;
 int FUNC_5 (struct xpc_partition*) ;

__attribute__((used)) static void
FUNC_6(struct xpc_partition *VAR_1)
{
 while (VAR_1->act_state != VAR_0 ||
        FUNC_1(&VAR_1->nchannels_active) > 0 ||
        !FUNC_4(VAR_1)) {

  FUNC_5(VAR_1);
  FUNC_0(&VAR_1->channel_mgr_requests);
  (void)FUNC_3(VAR_1->channel_mgr_wq,
    (FUNC_1(&VAR_1->channel_mgr_requests) > 0 ||
     VAR_1->chctl.all_flags != 0 ||
     (VAR_1->act_state == VAR_0 &&
     FUNC_1(&VAR_1->nchannels_active) == 0 &&
     FUNC_4(VAR_1))));
  FUNC_2(&VAR_1->channel_mgr_requests, 1);
 }
}
