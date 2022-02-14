
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union xpc_channel_ctl_flags {scalar_t__ all_flags; } ;
typedef scalar_t__ u64 ;
struct xpc_partition_sn2 {int remote_GPs_pa; int remote_GPs; int remote_openclose_args_pa; } ;
struct TYPE_2__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {int remote_openclose_args; int chctl_lock; union xpc_channel_ctl_flags chctl; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (struct xpc_partition*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xpc_partition*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (union xpc_channel_ctl_flags*) ;
 scalar_t__ FUNC_6 (union xpc_channel_ctl_flags*) ;
 int VAR_3 ;
 int FUNC_7 (struct xpc_partition*,int ,int ,int ) ;

__attribute__((used)) static u64
FUNC_8(struct xpc_partition *VAR_4)
{
 struct xpc_partition_sn2 *VAR_5 = &VAR_4->sn.sn2;
 unsigned long VAR_6;
 union xpc_channel_ctl_flags VAR_7;
 enum xp_retval VAR_8;





 FUNC_3(&VAR_4->chctl_lock, VAR_6);
 VAR_7 = VAR_4->chctl;
 if (VAR_7.all_flags != 0)
  VAR_4->chctl.all_flags = 0;

 FUNC_4(&VAR_4->chctl_lock, VAR_6);

 if (FUNC_6(&VAR_7)) {
  VAR_8 = FUNC_7(VAR_4, VAR_4->
           remote_openclose_args,
           VAR_5->
           remote_openclose_args_pa,
           VAR_1);
  if (VAR_8 != VAR_2) {
   FUNC_0(VAR_4, VAR_8);

   FUNC_2(VAR_3, "failed to pull openclose args from "
    "partition %d, ret=%d\n", FUNC_1(VAR_4),
    VAR_8);


   VAR_7.all_flags = 0;
  }
 }

 if (FUNC_5(&VAR_7)) {
  VAR_8 = FUNC_7(VAR_4, VAR_5->remote_GPs,
           VAR_5->remote_GPs_pa,
           VAR_0);
  if (VAR_8 != VAR_2) {
   FUNC_0(VAR_4, VAR_8);

   FUNC_2(VAR_3, "failed to pull GPs from partition "
    "%d, ret=%d\n", FUNC_1(VAR_4), VAR_8);


   VAR_7.all_flags = 0;
  }
 }

 return VAR_7.all_flags;
}
