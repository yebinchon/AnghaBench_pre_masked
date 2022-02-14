
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uuid_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int so_flags; int last_uuid; int last_pid; int e_uuid; int e_pid; TYPE_3__* so_proto; } ;
struct content_filter {int cf_necp_control_unit; int cf_flags; int cf_kcunit; int cf_kcref; } ;
struct TYPE_8__ {int cfm_len; scalar_t__ cfm_sock_id; int cfm_op; int cfm_type; int cfm_version; } ;
struct cfil_msg_sock_attached {int cfs_e_uuid; int cfs_e_pid; int cfs_uuid; int cfs_pid; int cfs_sock_protocol; int cfs_sock_type; int cfs_sock_family; TYPE_1__ cfs_msghdr; } ;
struct TYPE_12__ {int tv_usec; int tv_sec; } ;
struct cfil_info {TYPE_5__ cfi_first_event; struct cfil_entry* cfi_entries; } ;
struct TYPE_13__ {int tv_usec; int tv_sec; } ;
struct cfil_entry {int cfe_flags; TYPE_6__ cfe_last_event; struct content_filter* cfe_filter; TYPE_4__* cfe_cfil_info; } ;
typedef scalar_t__ errno_t ;
struct TYPE_14__ {int cfs_attach_event_fail; int cfs_attach_event_flow_control; int cfs_attach_event_ok; } ;
struct TYPE_11__ {scalar_t__ cfi_sock_id; } ;
struct TYPE_10__ {int pr_protocol; int pr_type; TYPE_2__* pr_domain; } ;
struct TYPE_9__ {int dom_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int FUNC_4 (struct cfil_msg_sock_attached*,int) ;
 int VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_7__ VAR_15 ;
 struct content_filter** VAR_16 ;
 scalar_t__ FUNC_10 (int ,int ,struct cfil_msg_sock_attached*,int,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (struct socket*) ;

__attribute__((used)) static int
FUNC_14(struct socket *VAR_17, struct cfil_info *VAR_18, uint32_t VAR_19)
{
 errno_t VAR_20 = 0;
 struct cfil_entry *VAR_21 = ((void*)0);
 struct cfil_msg_sock_attached VAR_22;
 uint32_t VAR_23;
 struct content_filter *VAR_24 = ((void*)0);

 FUNC_13(VAR_17);

 FUNC_6(&VAR_14);

 if (VAR_17->so_proto == ((void*)0) || VAR_17->so_proto->pr_domain == ((void*)0)) {
  VAR_20 = VAR_7;
  goto done;
 }



 for (VAR_23 = 1; VAR_23 <= VAR_12; VAR_23++) {
  VAR_24 = VAR_16[VAR_23 - 1];

  if (VAR_24 == ((void*)0))
   continue;
  if (VAR_24->cf_necp_control_unit != VAR_19)
   continue;
  VAR_21 = &VAR_18->cfi_entries[VAR_23 - 1];
  if (VAR_21->cfe_filter == ((void*)0))
   continue;

  FUNC_2(VAR_24 == VAR_21->cfe_filter);

  break;
 }

 if (VAR_21 == ((void*)0) || VAR_21->cfe_filter == ((void*)0))
  goto done;

 if ((VAR_21->cfe_flags & VAR_1))
  goto done;

 FUNC_0(VAR_11, "so %llx filter_control_unit %u kcunit %u",
  (uint64_t)FUNC_3(VAR_17), VAR_19, VAR_23);


 if (VAR_24->cf_flags & VAR_2) {
  VAR_20 = VAR_8;
  goto done;
 }

 FUNC_4(&VAR_22, sizeof(struct cfil_msg_sock_attached));
 VAR_22.cfs_msghdr.cfm_len = sizeof(struct cfil_msg_sock_attached);
 VAR_22.cfs_msghdr.cfm_version = VAR_5;
 VAR_22.cfs_msghdr.cfm_type = VAR_4;
 VAR_22.cfs_msghdr.cfm_op = VAR_3;
 VAR_22.cfs_msghdr.cfm_sock_id = VAR_21->cfe_cfil_info->cfi_sock_id;

 VAR_22.cfs_sock_family = VAR_17->so_proto->pr_domain->dom_family;
 VAR_22.cfs_sock_type = VAR_17->so_proto->pr_type;
 VAR_22.cfs_sock_protocol = VAR_17->so_proto->pr_protocol;
 VAR_22.cfs_pid = VAR_17->last_pid;
 FUNC_11(VAR_22.cfs_uuid, VAR_17->last_uuid, sizeof(uuid_t));
 if (VAR_17->so_flags & VAR_13) {
  VAR_22.cfs_e_pid = VAR_17->e_pid;
  FUNC_11(VAR_22.cfs_e_uuid, VAR_17->e_uuid, sizeof(uuid_t));
 } else {
  VAR_22.cfs_e_pid = VAR_17->last_pid;
  FUNC_11(VAR_22.cfs_e_uuid, VAR_17->last_uuid, sizeof(uuid_t));
 }






 VAR_20 = FUNC_10(VAR_21->cfe_filter->cf_kcref,
    VAR_21->cfe_filter->cf_kcunit,
    &VAR_22,
    sizeof(struct cfil_msg_sock_attached),
    VAR_6);
 if (VAR_20 != 0) {
  FUNC_0(VAR_10, "ctl_enqueuedata() failed: %d", VAR_20);
  goto done;
 }
 FUNC_12(&VAR_21->cfe_last_event);
 VAR_18->cfi_first_event.tv_sec = VAR_21->cfe_last_event.tv_sec;
 VAR_18->cfi_first_event.tv_usec = VAR_21->cfe_last_event.tv_usec;

 VAR_21->cfe_flags |= VAR_1;
 FUNC_1(&VAR_15.cfs_attach_event_ok);
done:


 if (VAR_20 == VAR_8) {
  VAR_21->cfe_flags |= VAR_0;
  FUNC_1(&VAR_15.cfs_attach_event_flow_control);

  if (!FUNC_7(&VAR_14))
   FUNC_5(&VAR_14);

  VAR_24->cf_flags |= VAR_2;

  FUNC_8(&VAR_14);
 } else {
  if (VAR_20 != 0)
   FUNC_1(&VAR_15.cfs_attach_event_fail);

  FUNC_9(&VAR_14);
 }
 return (VAR_20);
}
