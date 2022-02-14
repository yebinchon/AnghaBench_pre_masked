
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ remote_act_state; } ;
struct TYPE_4__ {TYPE_1__ uv; } ;
struct xpc_partition {scalar_t__ act_state; int reason; TYPE_2__ sn; } ;
struct xpc_activate_mq_msg_uv {int dummy; } ;
typedef int msg ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_partition*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct xpc_partition*,struct xpc_activate_mq_msg_uv*,int,int ) ;

__attribute__((used)) static enum xp_retval
FUNC_4(struct xpc_partition *VAR_6)
{
 struct xpc_activate_mq_msg_uv VAR_7;






 FUNC_3(VAR_6, &VAR_7, sizeof(VAR_7),
          VAR_0);

 while (!((VAR_6->sn.uv.remote_act_state == VAR_1) ||
   (VAR_6->sn.uv.remote_act_state == VAR_2))) {

  FUNC_1(VAR_5, "waiting to make first contact with "
   "partition %d\n", FUNC_0(VAR_6));


  (void)FUNC_2(250);

  if (VAR_6->act_state == VAR_3)
   return VAR_6->reason;
 }

 return VAR_4;
}
