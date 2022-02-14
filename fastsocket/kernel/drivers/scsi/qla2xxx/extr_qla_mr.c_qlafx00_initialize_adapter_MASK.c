
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int chip_reset_done; scalar_t__ eeh_busy; scalar_t__ pci_channel_io_perm_failure; } ;
struct qla_hw_data {TYPE_3__ flags; TYPE_2__* isp_ops; int rsp_qid_map; int req_qid_map; scalar_t__ beacon_blink_led; scalar_t__ isp_abort_cnt; scalar_t__ thermal_support; } ;
struct TYPE_13__ {scalar_t__ management_server_logged_in; scalar_t__ reset_active; scalar_t__ online; } ;
struct TYPE_16__ {int req; scalar_t__ marker_needed; TYPE_1__ flags; scalar_t__ dpc_flags; int device_flags; int loop_state; int loop_down_timer; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_14__ {int (* pci_config ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_4__*,int,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_4__*) ;

int
FUNC_10(scsi_qla_host_t *VAR_6)
{
 int VAR_7;
 struct qla_hw_data *VAR_8 = VAR_6->hw;


 VAR_6->flags.online = 0;
 VAR_8->flags.chip_reset_done = 0;
 VAR_6->flags.reset_active = 0;
 VAR_8->flags.pci_channel_io_perm_failure = 0;
 VAR_8->flags.eeh_busy = 0;
 VAR_8->thermal_support = 0;
 FUNC_0(&VAR_6->loop_down_timer, VAR_2);
 FUNC_0(&VAR_6->loop_state, VAR_1);
 VAR_6->device_flags = VAR_0;
 VAR_6->dpc_flags = 0;
 VAR_6->flags.management_server_logged_in = 0;
 VAR_6->marker_needed = 0;
 VAR_8->isp_abort_cnt = 0;
 VAR_8->beacon_blink_led = 0;

 FUNC_8(0, VAR_8->req_qid_map);
 FUNC_8(0, VAR_8->rsp_qid_map);

 FUNC_1(VAR_4, VAR_6, 0x0147,
     "Configuring PCI space...\n");

 VAR_7 = VAR_8->isp_ops->pci_config(VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_5, VAR_6, 0x0148,
      "Unable to configure PCI space.\n");
  return VAR_7;
 }

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 != VAR_3)
  return VAR_7;

 FUNC_7(VAR_6);

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 != VAR_3)
  return VAR_7;





 VAR_7 = FUNC_3(VAR_8, VAR_6->req);
 if (VAR_7 != VAR_3)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_6);
 VAR_8->flags.chip_reset_done = 1;

 return VAR_7;
}
