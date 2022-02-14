
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timer_list {void (* function ) (unsigned long) ;unsigned long data; scalar_t__ expires; } ;
struct xpc_partition_sn2 {int * local_GPs; int local_GPs_base; int * remote_GPs; int remote_GPs_base; int * local_openclose_args; int local_openclose_args_base; int * local_chctl_amo_va; struct timer_list dropped_notify_IRQ_timer; int notify_IRQ_owner; int * remote_chctl_amo_va; scalar_t__ notify_IRQ_phys_cpuid; scalar_t__ notify_IRQ_nasid; scalar_t__ remote_openclose_args_pa; scalar_t__ remote_GPs_pa; } ;
struct TYPE_5__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {int nchannels; TYPE_3__* channels; TYPE_1__ sn; } ;
struct xpc_channel_sn2 {int msg_to_pull_mutex; int * local_openclose_args; int * local_GP; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_8__ {int nchannels; int magic; int notify_IRQ_phys_cpuid; int notify_IRQ_nasid; void* chctl_amo_pa; void* openclose_args_pa; void* GPs_pa; } ;
struct TYPE_6__ {struct xpc_channel_sn2 sn2; } ;
struct TYPE_7__ {TYPE_2__ sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 short FUNC_0 (struct xpc_partition*) ;
 int VAR_6 ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct timer_list*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ,int ,void*) ;
 int FUNC_10 (int ,char*,short) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_11 (int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int * FUNC_12 (short) ;
 void* FUNC_13 (int ,int ,int *) ;
 TYPE_4__* VAR_14 ;

__attribute__((used)) static enum xp_retval
FUNC_14(struct xpc_partition *VAR_15)
{
 struct xpc_partition_sn2 *VAR_16 = &VAR_15->sn.sn2;
 struct xpc_channel_sn2 *VAR_17;
 enum xp_retval VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 struct timer_list *VAR_22;
 short VAR_23 = FUNC_0(VAR_15);



 VAR_16->local_GPs =
     FUNC_13(VAR_4, VAR_0,
       &VAR_16->local_GPs_base);
 if (VAR_16->local_GPs == ((void*)0)) {
  FUNC_4(VAR_11, "can't get memory for local get/put "
   "values\n");
  return VAR_9;
 }

 VAR_16->remote_GPs =
     FUNC_13(VAR_4, VAR_0,
       &VAR_16->remote_GPs_base);
 if (VAR_16->remote_GPs == ((void*)0)) {
  FUNC_4(VAR_11, "can't get memory for remote get/put "
   "values\n");
  VAR_18 = VAR_9;
  goto out_1;
 }

 VAR_16->remote_GPs_pa = 0;



 VAR_16->local_openclose_args =
     FUNC_13(VAR_5,
       VAR_0, &VAR_16->
       local_openclose_args_base);
 if (VAR_16->local_openclose_args == ((void*)0)) {
  FUNC_4(VAR_11, "can't get memory for local connect args\n");
  VAR_18 = VAR_9;
  goto out_2;
 }

 VAR_16->remote_openclose_args_pa = 0;

 VAR_16->local_chctl_amo_va = FUNC_12(VAR_23);

 VAR_16->notify_IRQ_nasid = 0;
 VAR_16->notify_IRQ_phys_cpuid = 0;
 VAR_16->remote_chctl_amo_va = ((void*)0);

 FUNC_10(VAR_16->notify_IRQ_owner, "xpc%02d", VAR_23);
 VAR_19 = FUNC_9(VAR_2, VAR_13,
     VAR_1, VAR_16->notify_IRQ_owner,
     (void *)(u64)VAR_23);
 if (VAR_19 != 0) {
  FUNC_4(VAR_11, "can't register NOTIFY IRQ handler, "
   "errno=%d\n", -VAR_19);
  VAR_18 = VAR_8;
  goto out_3;
 }


 VAR_22 = &VAR_16->dropped_notify_IRQ_timer;
 FUNC_5(VAR_22);
 VAR_22->function =
     (void (*)(unsigned long))VAR_12;
 VAR_22->data = (unsigned long)VAR_15;
 VAR_22->expires = VAR_7 + VAR_3;
 FUNC_1(VAR_22);

 for (VAR_21 = 0; VAR_21 < VAR_15->nchannels; VAR_21++) {
  VAR_17 = &VAR_15->channels[VAR_21].sn.sn2;

  VAR_17->local_GP = &VAR_16->local_GPs[VAR_21];
  VAR_17->local_openclose_args =
      &VAR_16->local_openclose_args[VAR_21];

  FUNC_7(&VAR_17->msg_to_pull_mutex);
 }
 VAR_14[VAR_23].GPs_pa = FUNC_11(VAR_16->local_GPs);
 VAR_14[VAR_23].openclose_args_pa =
     FUNC_11(VAR_16->local_openclose_args);
 VAR_14[VAR_23].chctl_amo_pa =
     FUNC_11(VAR_16->local_chctl_amo_va);
 VAR_20 = FUNC_8();
 VAR_14[VAR_23].notify_IRQ_nasid = FUNC_3(VAR_20);
 VAR_14[VAR_23].notify_IRQ_phys_cpuid =
     FUNC_2(VAR_20);
 VAR_14[VAR_23].nchannels = VAR_15->nchannels;
 VAR_14[VAR_23].magic = VAR_6;

 return VAR_10;


out_3:
 FUNC_6(VAR_16->local_openclose_args_base);
 VAR_16->local_openclose_args = ((void*)0);
out_2:
 FUNC_6(VAR_16->remote_GPs_base);
 VAR_16->remote_GPs = ((void*)0);
out_1:
 FUNC_6(VAR_16->local_GPs_base);
 VAR_16->local_GPs = ((void*)0);
 return VAR_18;
}
