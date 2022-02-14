
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union xpc_channel_ctl_flags {int all_flags; int * flags; int member_0; } ;
typedef int u8 ;
struct xpc_partition_sn2 {int notify_IRQ_phys_cpuid; int notify_IRQ_nasid; int remote_chctl_amo_va; } ;
struct TYPE_2__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {scalar_t__ act_state; TYPE_1__ sn; } ;
struct xpc_channel {size_t partid; size_t number; int lock; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_partition*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,char*,size_t,size_t,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct xpc_partition* VAR_4 ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct xpc_channel *VAR_5, u8 VAR_6,
   char *VAR_7, unsigned long *VAR_8)
{
 struct xpc_partition *VAR_9 = &VAR_4[VAR_5->partid];
 struct xpc_partition_sn2 *VAR_10 = &VAR_9->sn.sn2;
 union xpc_channel_ctl_flags VAR_11 = { 0 };
 enum xp_retval VAR_12;

 if (FUNC_2(VAR_9->act_state != VAR_1)) {
  VAR_11.flags[VAR_5->number] = VAR_6;
  VAR_12 = FUNC_6(VAR_10->remote_chctl_amo_va,
           VAR_11.all_flags,
           VAR_10->notify_IRQ_nasid,
           VAR_10->notify_IRQ_phys_cpuid,
           VAR_0);
  FUNC_1(VAR_3, "%s sent to partid=%d, channel=%d, ret=%d\n",
   VAR_7, VAR_5->partid, VAR_5->number, VAR_12);
  if (FUNC_5(VAR_12 != VAR_2)) {
   if (VAR_8 != ((void*)0))
    FUNC_4(&VAR_5->lock, *VAR_8);
   FUNC_0(VAR_9, VAR_12);
   if (VAR_8 != ((void*)0))
    FUNC_3(&VAR_5->lock, *VAR_8);
  }
 }
}
