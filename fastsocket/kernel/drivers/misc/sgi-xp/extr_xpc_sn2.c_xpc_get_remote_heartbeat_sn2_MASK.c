
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_vars_sn2 {scalar_t__ heartbeat; int * heartbeating_to_mask; int heartbeat_offline; } ;
struct TYPE_3__ {int remote_vars_pa; } ;
struct TYPE_4__ {TYPE_1__ sn2; } ;
struct xpc_partition {scalar_t__ last_heartbeat; TYPE_2__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (struct xpc_partition*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xpc_vars_sn2*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static enum xp_retval
FUNC_5(struct xpc_partition *VAR_6)
{
 struct xpc_vars_sn2 *VAR_7;
 enum xp_retval VAR_8;

 VAR_7 = (struct xpc_vars_sn2 *)VAR_5;


 VAR_8 = FUNC_3(FUNC_2(VAR_7),
          VAR_6->sn.sn2.remote_vars_pa,
          VAR_0);
 if (VAR_8 != VAR_3)
  return VAR_8;

 FUNC_1(VAR_4, "partid=%d, heartbeat=%lld, last_heartbeat=%lld, "
  "heartbeat_offline=%lld, HB_mask[0]=0x%lx\n", FUNC_0(VAR_6),
  VAR_7->heartbeat, VAR_6->last_heartbeat,
  VAR_7->heartbeat_offline,
  VAR_7->heartbeating_to_mask[0]);

 if ((VAR_7->heartbeat == VAR_6->last_heartbeat &&
     !VAR_7->heartbeat_offline) ||
     !FUNC_4(VAR_1,
    VAR_7->heartbeating_to_mask)) {
  VAR_8 = VAR_2;
 } else {
  VAR_6->last_heartbeat = VAR_7->heartbeat;
 }

 return VAR_8;
}
