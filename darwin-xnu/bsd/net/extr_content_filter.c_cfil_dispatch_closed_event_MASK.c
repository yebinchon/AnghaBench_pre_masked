
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct content_filter {int cf_flags; int cf_kcunit; int cf_kcref; } ;
struct TYPE_8__ {int cfm_len; int cfm_sock_id; int cfm_op; int cfm_type; int cfm_version; } ;
struct TYPE_7__ {int tv_usec; int tv_sec; } ;
struct cfil_msg_sock_closed {TYPE_3__ cfc_msghdr; int cfc_op_list_ctr; int cfc_op_list; int cfc_op_time; TYPE_2__ cfc_first_event; } ;
struct TYPE_10__ {int tv_usec; int tv_sec; } ;
struct cfil_info {TYPE_5__ cfi_first_event; int cfi_op_list_ctr; int cfi_op_list; int cfi_op_time; struct cfil_entry* cfi_entries; } ;
struct cfil_entry {int cfe_flags; struct content_filter* cfe_filter; TYPE_1__* cfe_cfil_info; int cfe_last_event; } ;
typedef scalar_t__ errno_t ;
struct TYPE_9__ {int cfs_closed_event_fail; int cfs_closed_event_flow_control; int cfs_closed_event_ok; } ;
struct TYPE_6__ {int cfi_sock_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct cfil_info*,int *,TYPE_5__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int FUNC_4 (struct cfil_msg_sock_closed*,int) ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_4__ VAR_13 ;
 scalar_t__ FUNC_10 (int ,int ,struct cfil_msg_sock_closed*,int,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct socket*) ;

int
FUNC_14(struct socket *VAR_14, struct cfil_info *VAR_15, int VAR_16)
{
 struct cfil_entry *VAR_17;
 struct cfil_msg_sock_closed VAR_18;
 errno_t VAR_19 = 0;
 struct content_filter *VAR_20;

 FUNC_13(VAR_14);

 FUNC_6(&VAR_12);

 VAR_17 = &VAR_15->cfi_entries[VAR_16 - 1];
 VAR_20 = VAR_17->cfe_filter;
 if (VAR_20 == ((void*)0))
  goto done;

 FUNC_0(VAR_11, "so %llx kcunit %d",
    (uint64_t)FUNC_3(VAR_14), VAR_16);


 if (VAR_20->cf_flags & VAR_3) {
  VAR_19 = VAR_9;
  goto done;
 }



 if ((VAR_17->cfe_flags & VAR_2) != 0)
  goto done;
 if ((VAR_17->cfe_flags & VAR_1) == 0)
  goto done;

 FUNC_12(&VAR_17->cfe_last_event);
 FUNC_1(VAR_15, &VAR_17->cfe_last_event, &VAR_15->cfi_first_event, VAR_5);

 FUNC_4(&VAR_18, sizeof(struct cfil_msg_sock_closed));
 VAR_18.cfc_msghdr.cfm_len = sizeof(struct cfil_msg_sock_closed);
 VAR_18.cfc_msghdr.cfm_version = VAR_7;
 VAR_18.cfc_msghdr.cfm_type = VAR_6;
 VAR_18.cfc_msghdr.cfm_op = VAR_5;
 VAR_18.cfc_msghdr.cfm_sock_id = VAR_17->cfe_cfil_info->cfi_sock_id;
 VAR_18.cfc_first_event.tv_sec = VAR_15->cfi_first_event.tv_sec;
 VAR_18.cfc_first_event.tv_usec = VAR_15->cfi_first_event.tv_usec;
 FUNC_11(VAR_18.cfc_op_time, VAR_15->cfi_op_time, sizeof(uint32_t)*VAR_4);
 FUNC_11(VAR_18.cfc_op_list, VAR_15->cfi_op_list, sizeof(unsigned char)*VAR_4);
 VAR_18.cfc_op_list_ctr = VAR_15->cfi_op_list_ctr;
 VAR_19 = FUNC_10(VAR_17->cfe_filter->cf_kcref,
    VAR_17->cfe_filter->cf_kcunit,
    &VAR_18,
    sizeof(struct cfil_msg_sock_closed),
    VAR_8);
 if (VAR_19 != 0) {
  FUNC_0(VAR_10, "ctl_enqueuedata() failed: %d",
   VAR_19);
  goto done;
 }

 VAR_17->cfe_flags |= VAR_2;
 FUNC_2(&VAR_13.cfs_closed_event_ok);
done:

 if (VAR_19 == VAR_9) {
  VAR_17->cfe_flags |= VAR_0;
  FUNC_2(&VAR_13.cfs_closed_event_flow_control);

  if (!FUNC_7(&VAR_12))
   FUNC_5(&VAR_12);

  VAR_20->cf_flags |= VAR_3;

  FUNC_8(&VAR_12);
 } else {
  if (VAR_19 != 0)
   FUNC_2(&VAR_13.cfs_closed_event_fail);

  FUNC_9(&VAR_12);
 }

 return (VAR_19);
}
