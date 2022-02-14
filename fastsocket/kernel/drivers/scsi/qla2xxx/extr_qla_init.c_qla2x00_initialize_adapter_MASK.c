
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct req_que {int ring; } ;
struct TYPE_24__ {int chip_reset_done; scalar_t__ disable_serdes; scalar_t__ eeh_busy; scalar_t__ pci_channel_io_perm_failure; } ;
struct qla_hw_data {int thermal_support; TYPE_3__ flags; int cs84xx; TYPE_2__* isp_ops; int rsp_qid_map; int req_qid_map; scalar_t__ beacon_blink_led; scalar_t__ isp_abort_cnt; struct req_que** req_q_map; } ;
struct TYPE_22__ {scalar_t__ management_server_logged_in; scalar_t__ reset_active; scalar_t__ online; } ;
struct TYPE_25__ {int * port_name; scalar_t__ marker_needed; TYPE_1__ flags; scalar_t__ dpc_flags; int device_flags; int loop_state; int loop_down_timer; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_23__ {int (* pci_config ) (TYPE_4__*) ;int (* chip_diag ) (TYPE_4__*) ;int (* nvram_config ) (TYPE_4__*) ;int (* get_flash_version ) (TYPE_4__*,int ) ;int (* reset_chip ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,TYPE_4__*,int,char*) ;
 int VAR_7 ;
 int FUNC_6 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int ) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*) ;

int
FUNC_22(scsi_qla_host_t *VAR_11)
{
 int VAR_12;
 struct qla_hw_data *VAR_13 = VAR_11->hw;
 struct req_que *VAR_14 = VAR_13->req_q_map[0];


 VAR_11->flags.online = 0;
 VAR_13->flags.chip_reset_done = 0;
 VAR_11->flags.reset_active = 0;
 VAR_13->flags.pci_channel_io_perm_failure = 0;
 VAR_13->flags.eeh_busy = 0;
 VAR_13->thermal_support = VAR_5|VAR_6;
 FUNC_4(&VAR_11->loop_down_timer, VAR_2);
 FUNC_4(&VAR_11->loop_state, VAR_1);
 VAR_11->device_flags = VAR_0;
 VAR_11->dpc_flags = 0;
 VAR_11->flags.management_server_logged_in = 0;
 VAR_11->marker_needed = 0;
 VAR_13->isp_abort_cnt = 0;
 VAR_13->beacon_blink_led = 0;

 FUNC_16(0, VAR_13->req_qid_map);
 FUNC_16(0, VAR_13->rsp_qid_map);

 FUNC_5(VAR_7, VAR_11, 0x0040,
     "Configuring PCI space...\n");
 VAR_12 = VAR_13->isp_ops->pci_config(VAR_11);
 if (VAR_12) {
  FUNC_6(VAR_10, VAR_11, 0x0044,
      "Unable to configure PCI space.\n");
  return (VAR_12);
 }

 VAR_13->isp_ops->reset_chip(VAR_11);

 VAR_12 = FUNC_11(VAR_11);
 if (VAR_12) {
  FUNC_6(VAR_8, VAR_11, 0x004f,
      "Unable to validate FLASH data.\n");
  return (VAR_12);
 }

 VAR_13->isp_ops->get_flash_version(VAR_11, VAR_14->ring);
 FUNC_5(VAR_7, VAR_11, 0x0061,
     "Configure NVRAM parameters...\n");

 VAR_13->isp_ops->nvram_config(VAR_11);

 if (VAR_13->flags.disable_serdes) {

  FUNC_6(VAR_9, VAR_11, 0x0077,
      "Masking HBA WWPN "
      "%02x%02x%02x%02x%02x%02x%02x%02x (via NVRAM).\n",
      VAR_11->port_name[0], VAR_11->port_name[1],
      VAR_11->port_name[2], VAR_11->port_name[3],
      VAR_11->port_name[4], VAR_11->port_name[5],
      VAR_11->port_name[6], VAR_11->port_name[7]);
  return VAR_3;
 }

 FUNC_5(VAR_7, VAR_11, 0x0078,
     "Verifying loaded RISC code...\n");

 if (FUNC_9(VAR_11) != VAR_4) {
  VAR_12 = VAR_13->isp_ops->chip_diag(VAR_11);
  if (VAR_12)
   return (VAR_12);
  VAR_12 = FUNC_10(VAR_11);
  if (VAR_12)
   return (VAR_12);
 }

 if (FUNC_3(VAR_13)) {
  VAR_13->cs84xx = FUNC_13(VAR_11);
  if (!VAR_13->cs84xx) {
   FUNC_6(VAR_10, VAR_11, 0x00d0,
       "Unable to configure ISP84XX.\n");
   return VAR_3;
  }
 }
 VAR_12 = FUNC_8(VAR_11);
 VAR_13->flags.chip_reset_done = 1;

 if (VAR_12 == VAR_4 && FUNC_3(VAR_13)) {

  VAR_12 = FUNC_14(VAR_11);
  if (VAR_12 != VAR_4) {
   FUNC_6(VAR_10, VAR_11, 0x00d4,
       "Unable to initialize ISP84XX.\n");
  FUNC_15(VAR_11);
  }
 }


 if (FUNC_2(VAR_13)) {
  VAR_12 = FUNC_12(VAR_11);
  if (VAR_12)
   FUNC_6(VAR_10, VAR_11, 0x0122,
       "Error in initializing NIC Core f/w.\n");
 }

 if (FUNC_0(VAR_13) || FUNC_1(VAR_13))
  FUNC_7(VAR_11);

 return (VAR_12);
}
