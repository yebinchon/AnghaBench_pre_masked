
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ remote_act_state; } ;
struct TYPE_4__ {TYPE_1__ uv; } ;
struct xpc_partition {int reason; TYPE_2__ sn; } ;
struct xpc_activate_mq_msg_deactivate_req_uv {int reason; } ;
typedef int msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xpc_partition*,struct xpc_activate_mq_msg_deactivate_req_uv*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct xpc_partition *VAR_3)
{
 struct xpc_activate_mq_msg_deactivate_req_uv VAR_4;





 if (VAR_3->sn.uv.remote_act_state != VAR_1 &&
     VAR_3->sn.uv.remote_act_state != VAR_2) {

  VAR_4.reason = VAR_3->reason;
  FUNC_0(VAR_3, &VAR_4, sizeof(VAR_4),
      VAR_0);
 }
}
