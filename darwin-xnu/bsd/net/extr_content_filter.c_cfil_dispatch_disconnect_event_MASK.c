
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct content_filter {int cf_flags; int cf_kcunit; int cf_kcref; } ;
struct cfil_msg_hdr {int cfm_len; int cfm_op; int cfm_sock_id; int cfm_type; int cfm_version; } ;
struct cfil_info {int cfi_first_event; struct cfil_entry* cfi_entries; } ;
struct cfe_buf {int cfe_ctl_q; } ;
struct cfil_entry {int cfe_flags; int cfe_last_event; struct content_filter* cfe_filter; TYPE_1__* cfe_cfil_info; struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; } ;
typedef scalar_t__ errno_t ;
struct TYPE_4__ {int cfs_disconnect_event_fail; int cfs_disconnect_event_flow_control; int cfs_disconnect_in_event_ok; int cfs_disconnect_out_event_ok; } ;
struct TYPE_3__ {int cfi_sock_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct cfil_info*,int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int FUNC_4 (struct cfil_msg_hdr*,int) ;
 int FUNC_5 (int ,struct cfil_info*,char*) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_2__ VAR_14 ;
 scalar_t__ FUNC_12 (int ,int ,struct cfil_msg_hdr*,int,int ) ;
 int FUNC_13 (struct mbuf*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct socket*) ;

__attribute__((used)) static int
FUNC_16(struct socket *VAR_15, struct cfil_info *VAR_16, uint32_t VAR_17, int VAR_18)
{
 errno_t VAR_19 = 0;
 struct mbuf *VAR_20 = ((void*)0);
 struct cfil_entry *VAR_21;
 struct cfe_buf *VAR_22;
 struct cfil_msg_hdr VAR_23;
 struct content_filter *VAR_24;

 FUNC_15(VAR_15);

 FUNC_8(&VAR_13);

 VAR_21 = &VAR_16->cfi_entries[VAR_17 - 1];
 if (VAR_18)
  VAR_22 = &VAR_21->cfe_snd;
 else
  VAR_22 = &VAR_21->cfe_rcv;

 VAR_24 = VAR_21->cfe_filter;
 if (VAR_24 == ((void*)0))
  goto done;

 FUNC_0(VAR_12, "so %llx kcunit %u outgoing %d",
    (uint64_t)FUNC_3(VAR_15), VAR_17, VAR_18);




 if ((VAR_18 && (VAR_21->cfe_flags & VAR_2)) ||
  (!VAR_18 && (VAR_21->cfe_flags & VAR_1))) {
  FUNC_0(VAR_12, "so %llx disconnect already sent",
   (uint64_t)FUNC_3(VAR_15));
  goto done;
 }





 if (VAR_18 && FUNC_6(&VAR_22->cfe_ctl_q) == 0) {
  FUNC_0(VAR_12, "so %llx control queue not empty",
   (uint64_t)FUNC_3(VAR_15));
  VAR_19 = VAR_9;
  goto done;
 }

 if (VAR_24->cf_flags & VAR_3) {
  VAR_19 = VAR_10;
  goto done;
 }







 FUNC_4(&VAR_23, sizeof(struct cfil_msg_hdr));
 VAR_23.cfm_len = sizeof(struct cfil_msg_hdr);
 VAR_23.cfm_version = VAR_7;
 VAR_23.cfm_type = VAR_6;
 VAR_23.cfm_op = VAR_18 ? VAR_5 :
  VAR_4;
 VAR_23.cfm_sock_id = VAR_21->cfe_cfil_info->cfi_sock_id;
 VAR_19 = FUNC_12(VAR_21->cfe_filter->cf_kcref,
    VAR_21->cfe_filter->cf_kcunit,
    &VAR_23,
    sizeof(struct cfil_msg_hdr),
    VAR_8);
 if (VAR_19 != 0) {
  FUNC_0(VAR_11, "ctl_enqueuembuf() failed: %d", VAR_19);
  FUNC_13(VAR_20);
  goto done;
 }
 FUNC_14(&VAR_21->cfe_last_event);
 FUNC_1(VAR_16, &VAR_21->cfe_last_event, &VAR_16->cfi_first_event, VAR_23.cfm_op);


 if (VAR_18) {
  VAR_21->cfe_flags |= VAR_2;
  FUNC_2(&VAR_14.cfs_disconnect_out_event_ok);
 } else {
  VAR_21->cfe_flags |= VAR_1;
  FUNC_2(&VAR_14.cfs_disconnect_in_event_ok);
 }
done:
 if (VAR_19 == VAR_10) {
  VAR_21->cfe_flags |= VAR_0;
  FUNC_2(
   &VAR_14.cfs_disconnect_event_flow_control);

  if (!FUNC_9(&VAR_13))
   FUNC_7(&VAR_13);

  VAR_24->cf_flags |= VAR_3;

  FUNC_10(&VAR_13);
 } else {
  if (VAR_19 != 0)
   FUNC_2(
    &VAR_14.cfs_disconnect_event_fail);

  FUNC_11(&VAR_13);
 }
 return (VAR_19);
}
