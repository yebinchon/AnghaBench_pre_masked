
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xpc_vars_sn2 {int * heartbeating_to_mask; int heartbeat; } ;
struct TYPE_4__ {unsigned long vars_pa; } ;
struct TYPE_5__ {TYPE_1__ sn2; } ;
struct xpc_rsvd_page {int version; unsigned long ts_jiffies; short SAL_partid; TYPE_2__ sn; } ;
struct xpc_partition_sn2 {scalar_t__ remote_vars_version; } ;
struct TYPE_6__ {struct xpc_partition_sn2 sn2; } ;
struct xpc_partition {scalar_t__ act_state; unsigned long remote_rp_ts_jiffies; scalar_t__ disengage_timeout; int remote_rp_version; int activate_IRQ_rcvd; TYPE_3__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xpc_partition*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,int,int,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct xpc_partition*) ;
 int FUNC_5 (int,int *,struct xpc_rsvd_page*,unsigned long*) ;
 int FUNC_6 (unsigned long,struct xpc_vars_sn2*) ;
 int VAR_4 ;
 int FUNC_7 (short) ;
 scalar_t__ FUNC_8 (struct xpc_partition*) ;
 int FUNC_9 (short) ;
 struct xpc_partition* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (struct xpc_partition*,int,unsigned long*,unsigned long,unsigned long,struct xpc_vars_sn2*) ;

__attribute__((used)) static void
FUNC_11(int VAR_7)
{
 struct xpc_rsvd_page *VAR_8;
 struct xpc_vars_sn2 *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 unsigned long VAR_14 = 0;
 short VAR_15;
 struct xpc_partition *VAR_16;
 struct xpc_partition_sn2 *VAR_17;
 enum xp_retval VAR_18;



 VAR_8 = (struct xpc_rsvd_page *)VAR_6;

 VAR_18 = FUNC_5(VAR_7, ((void*)0), VAR_8, &VAR_10);
 if (VAR_18 != VAR_3) {
  FUNC_3(VAR_4, "unable to get reserved page from nasid %d, "
    "which sent interrupt, reason=%d\n", VAR_7, VAR_18);
  return;
 }

 VAR_11 = VAR_8->sn.sn2.vars_pa;
 VAR_12 = VAR_8->version;
 VAR_14 = VAR_8->ts_jiffies;

 VAR_15 = VAR_8->SAL_partid;
 VAR_16 = &VAR_5[VAR_15];
 VAR_17 = &VAR_16->sn.sn2;



 VAR_9 = (struct xpc_vars_sn2 *)VAR_6;

 VAR_18 = FUNC_6(VAR_11, VAR_9);
 if (VAR_18 != VAR_3) {
  FUNC_3(VAR_4, "unable to get XPC variables from nasid %d, "
    "which sent interrupt, reason=%d\n", VAR_7, VAR_18);

  FUNC_1(VAR_16, VAR_18);
  return;
 }

 VAR_16->activate_IRQ_rcvd++;

 FUNC_2(VAR_4, "partid for nasid %d is %d; IRQs = %d; HB = "
  "%lld:0x%lx\n", (int)VAR_7, (int)VAR_15,
  VAR_16->activate_IRQ_rcvd,
  VAR_9->heartbeat, VAR_9->heartbeating_to_mask[0]);

 if (FUNC_8(VAR_16) &&
     VAR_16->act_state == VAR_0) {

  FUNC_10(VAR_16, VAR_12,
           &VAR_14,
           VAR_10, VAR_11,
           VAR_9);

  if (FUNC_7(VAR_15)) {




   return;
  }

  FUNC_4(VAR_16);
  return;
 }

 FUNC_0(VAR_16->remote_rp_version == 0);
 FUNC_0(VAR_17->remote_vars_version == 0);

 if (VAR_14 != VAR_16->remote_rp_ts_jiffies) {



  FUNC_0(FUNC_9(VAR_15));
  FUNC_0(FUNC_7(VAR_15));

  FUNC_10(VAR_16, VAR_12,
           &VAR_14,
           VAR_10, VAR_11,
           VAR_9);
  VAR_13 = 1;
 }

 if (VAR_16->disengage_timeout > 0 && !FUNC_8(VAR_16)) {

  return;
 }

 if (VAR_13)
  FUNC_1(VAR_16, VAR_2);
 else if (FUNC_7(VAR_15))
  FUNC_1(VAR_16, VAR_1);
}
