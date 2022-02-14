
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
struct req_que {int num_outstanding_cmds; TYPE_3__** outstanding_cmds; } ;
struct TYPE_13__ {scalar_t__ eeh_busy; } ;
struct qla_hw_data {int beacon_blink_led; int hardware_lock; struct req_que** req_q_map; int pdev; TYPE_1__ flags; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_5__* fcport; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_14__ {scalar_t__ online; } ;
struct TYPE_16__ {scalar_t__ loop_down_abort_time; int device_flags; int dpc_flags; int work_list; int vp_idx; int loop_down_timer; int loop_state; scalar_t__ link_down_timeout; TYPE_2__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_17__ {int flags; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,TYPE_4__*,int,char*,int,...) ;
 int VAR_17 ;
 int FUNC_10 (int ,TYPE_4__*,int,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int ,int *) ;

void
FUNC_19(scsi_qla_host_t *VAR_20)
{
 unsigned long VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23;
 srb_t *VAR_24;
 uint16_t VAR_25;
 struct qla_hw_data *VAR_26 = VAR_20->hw;
 struct req_que *VAR_27;

 if (VAR_26->flags.eeh_busy) {
  FUNC_9(VAR_17, VAR_20, 0x6000,
      "EEH = %d, restarting timer.\n",
      VAR_26->flags.eeh_busy);
  FUNC_11(VAR_20, VAR_16);
  return;
 }


 if (!FUNC_7(VAR_26->pdev))
  FUNC_8(VAR_26->pdev, VAR_11, &VAR_25);


 if (!VAR_20->vp_idx && FUNC_1(VAR_26)) {
  if (FUNC_18(VAR_7, &VAR_20->dpc_flags))
   VAR_22++;
  FUNC_13(VAR_20);
 }

 if (!VAR_20->vp_idx && FUNC_2(VAR_26))
  FUNC_14(VAR_20);


 if (FUNC_4(&VAR_20->loop_down_timer) > 0 &&
     !(FUNC_18(VAR_0, &VAR_20->dpc_flags)) &&
     !(FUNC_18(VAR_4, &VAR_20->dpc_flags))
  && VAR_20->flags.online) {

  if (FUNC_4(&VAR_20->loop_down_timer) ==
      VAR_20->loop_down_abort_time) {

   FUNC_10(VAR_18, VAR_20, 0x6008,
       "Loop down - aborting the queues before time expires.\n");

   if (!FUNC_0(VAR_26) && VAR_20->link_down_timeout)
    FUNC_5(&VAR_20->loop_state, VAR_9);






   if (!VAR_20->vp_idx) {
    FUNC_16(&VAR_26->hardware_lock,
        VAR_21);
    VAR_27 = VAR_26->req_q_map[0];
    for (VAR_23 = 1;
        VAR_23 < VAR_27->num_outstanding_cmds;
        VAR_23++) {
     fc_port_t *VAR_28;

     VAR_24 = VAR_27->outstanding_cmds[VAR_23];
     if (!VAR_24)
      continue;
     if (VAR_24->type != VAR_14)
      continue;
     VAR_28 = VAR_24->fcport;
     if (!(VAR_28->flags & VAR_3))
      continue;

     if (FUNC_1(VAR_26))
      FUNC_15(VAR_4,
       &VAR_20->dpc_flags);
     else
      FUNC_15(VAR_6,
       &VAR_20->dpc_flags);
     break;
    }
    FUNC_17(&VAR_26->hardware_lock,
        VAR_21);
   }
   VAR_22++;
  }


  if (FUNC_3(&VAR_20->loop_down_timer) != 0) {
   if (!(VAR_20->device_flags & VAR_2)) {
    FUNC_10(VAR_19, VAR_20, 0x6009,
        "Loop down - aborting ISP.\n");

    if (FUNC_1(VAR_26))
     FUNC_15(VAR_4,
      &VAR_20->dpc_flags);
    else
     FUNC_15(VAR_6,
      &VAR_20->dpc_flags);
   }
  }
  FUNC_9(VAR_17, VAR_20, 0x600a,
      "Loop down - seconds remaining %d.\n",
      FUNC_4(&VAR_20->loop_down_timer));
 }

 if (!VAR_20->vp_idx && (VAR_26->beacon_blink_led == 1)) {

  if (!FUNC_1(VAR_26)) {
   FUNC_15(VAR_1, &VAR_20->dpc_flags);
   VAR_22++;
  }
 }


 if (!FUNC_6(&VAR_20->work_list))
  VAR_22++;


 if ((FUNC_18(VAR_6, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_10, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_5, &VAR_20->dpc_flags) ||
     VAR_22 ||
     FUNC_18(VAR_13, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_1, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_8, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_4, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_15, &VAR_20->dpc_flags) ||
     FUNC_18(VAR_12, &VAR_20->dpc_flags))) {
  FUNC_9(VAR_17, VAR_20, 0x600b,
      "isp_abort_needed=%d loop_resync_needed=%d "
      "fcport_update_needed=%d start_dpc=%d "
      "reset_marker_needed=%d",
      FUNC_18(VAR_6, &VAR_20->dpc_flags),
      FUNC_18(VAR_10, &VAR_20->dpc_flags),
      FUNC_18(VAR_5, &VAR_20->dpc_flags),
      VAR_22,
      FUNC_18(VAR_13, &VAR_20->dpc_flags));
  FUNC_9(VAR_17, VAR_20, 0x600c,
      "beacon_blink_needed=%d isp_unrecoverable=%d "
      "fcoe_ctx_reset_needed=%d vp_dpc_needed=%d "
      "relogin_needed=%d.\n",
      FUNC_18(VAR_1, &VAR_20->dpc_flags),
      FUNC_18(VAR_8, &VAR_20->dpc_flags),
      FUNC_18(VAR_4, &VAR_20->dpc_flags),
      FUNC_18(VAR_15, &VAR_20->dpc_flags),
      FUNC_18(VAR_12, &VAR_20->dpc_flags));
  FUNC_12(VAR_20);
 }

 FUNC_11(VAR_20, VAR_16);
}
