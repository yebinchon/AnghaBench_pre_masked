
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union xpc_channel_ctl_flags {int all_flags; int * flags; int member_0; } ;
typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {TYPE_1__* local_chctl_amo_va; } ;
struct TYPE_6__ {TYPE_2__ sn2; } ;
struct xpc_partition {TYPE_3__ sn; } ;
struct xpc_channel {size_t partid; size_t number; } ;
struct TYPE_4__ {int variable; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,size_t,size_t) ;
 int VAR_1 ;
 struct xpc_partition* VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct xpc_channel *VAR_3, u8 VAR_4,
         char *VAR_5)
{
 struct xpc_partition *VAR_6 = &VAR_2[VAR_3->partid];
 union xpc_channel_ctl_flags VAR_7 = { 0 };

 VAR_7.flags[VAR_3->number] = VAR_4;
 FUNC_0(FUNC_1((u64)&VAR_6->sn.sn2.local_chctl_amo_va->
    variable), VAR_0, VAR_7.all_flags);
 FUNC_2(VAR_1, "%s sent local from partid=%d, channel=%d\n",
  VAR_5, VAR_3->partid, VAR_3->number);
}
