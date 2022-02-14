
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union xpc_channel_ctl_flags {int all_flags; } ;
struct TYPE_6__ {int all_flags; } ;
struct TYPE_4__ {int local_chctl_amo_va; } ;
struct TYPE_5__ {TYPE_1__ sn2; } ;
struct xpc_partition {int chctl_lock; TYPE_3__ chctl; TYPE_2__ sn; } ;


 int FUNC_0 (struct xpc_partition*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xpc_partition*) ;

__attribute__((used)) static void
FUNC_6(struct xpc_partition *VAR_1)
{
 union xpc_channel_ctl_flags VAR_2;
 unsigned long VAR_3;

 VAR_2.all_flags = FUNC_4(VAR_1->sn.sn2.
        local_chctl_amo_va);
 if (VAR_2.all_flags == 0)
  return;

 FUNC_2(&VAR_1->chctl_lock, VAR_3);
 VAR_1->chctl.all_flags |= VAR_2.all_flags;
 FUNC_3(&VAR_1->chctl_lock, VAR_3);

 FUNC_1(VAR_0, "received notify IRQ from partid=%d, chctl.all_flags="
  "0x%llx\n", FUNC_0(VAR_1), VAR_2.all_flags);

 FUNC_5(VAR_1);
}
