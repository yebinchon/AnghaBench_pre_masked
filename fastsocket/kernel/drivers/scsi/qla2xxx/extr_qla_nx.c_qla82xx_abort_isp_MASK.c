
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int nic_core_reset_hdlr_active; scalar_t__ isp82xx_fw_hung; } ;
struct qla_hw_data {scalar_t__ isp_abort_cnt; TYPE_2__* isp_ops; TYPE_1__ flags; } ;
struct TYPE_14__ {int online; } ;
struct TYPE_15__ {int device_flags; int dpc_flags; TYPE_3__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_13__ {int (* reset_adapter ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_4__*,int,char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_6 ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int
FUNC_12(scsi_qla_host_t *VAR_7)
{
 int VAR_8;
 struct qla_hw_data *VAR_9 = VAR_7->hw;

 if (VAR_7->device_flags & VAR_0) {
  FUNC_2(VAR_6, VAR_7, 0x8024,
      "Device in failed state, exiting.\n");
  return VAR_4;
 }
 VAR_9->flags.nic_core_reset_hdlr_active = 1;

 FUNC_5(VAR_9);
 FUNC_8(VAR_7);
 FUNC_6(VAR_9);

 VAR_8 = FUNC_4(VAR_7);

 FUNC_5(VAR_9);
 FUNC_3(VAR_9);
 FUNC_6(VAR_9);

 if (VAR_8 == VAR_4) {
  VAR_9->flags.isp82xx_fw_hung = 0;
  VAR_9->flags.nic_core_reset_hdlr_active = 0;
  FUNC_7(VAR_7);
 }

 if (VAR_8) {
  VAR_7->flags.online = 1;
  if (FUNC_11(VAR_1, &VAR_7->dpc_flags)) {
   if (VAR_9->isp_abort_cnt == 0) {
    FUNC_2(VAR_6, VAR_7, 0x8027,
        "ISP error recover failed - board "
        "disabled.\n");




    VAR_9->isp_ops->reset_adapter(VAR_7);
    VAR_7->flags.online = 0;
    FUNC_0(VAR_1,
        &VAR_7->dpc_flags);
    VAR_8 = VAR_4;
   } else {
    VAR_9->isp_abort_cnt--;
    FUNC_2(VAR_6, VAR_7, 0x8036,
        "ISP abort - retry remaining %d.\n",
        VAR_9->isp_abort_cnt);
    VAR_8 = VAR_3;
   }
  } else {
   VAR_9->isp_abort_cnt = VAR_2;
   FUNC_1(VAR_5, VAR_7, 0x8029,
       "ISP error recovery - retrying (%d) more times.\n",
       VAR_9->isp_abort_cnt);
   FUNC_9(VAR_1, &VAR_7->dpc_flags);
   VAR_8 = VAR_3;
  }
 }
 return VAR_8;
}
