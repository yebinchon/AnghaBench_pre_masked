
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int nic_core_hung; scalar_t__ nic_core_reset_owner; } ;
struct qla_hw_data {TYPE_1__ flags; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,TYPE_2__*,int,char*,int,int,int,int) ;
 int VAR_10 ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(scsi_qla_host_t *VAR_14, uint16_t *VAR_15)
{
 struct qla_hw_data *VAR_16 = VAR_14->hw;
 FUNC_0(VAR_10, VAR_14, 0x506b, "AEN Code: mb[0] = 0x%x AEN reason: "
     "mb[1] = 0x%x PH-status1: mb[2] = 0x%x PH-status1: mb[6] = 0x%x.\n",
     VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[6]);
 FUNC_0(VAR_10, VAR_14, 0x506c, "PH-status2: mb[3] = 0x%x "
     "PH-status2: mb[7] = 0x%x Device-State: mb[4] = 0x%x "
     "Drv-Presence: mb[5] = 0x%x.\n", VAR_15[3], VAR_15[7], VAR_15[4], VAR_15[5]);

 if (VAR_15[1] & (VAR_6 | VAR_5 |
    VAR_4)) {
  VAR_16->flags.nic_core_hung = 1;
  FUNC_1(VAR_13, VAR_14, 0x5060,
      "83XX: F/W Error Reported: Check if reset required.\n");

  if (VAR_15[1] & VAR_6) {
   uint32_t VAR_17, VAR_18, VAR_19;
   VAR_17 = (VAR_15[2] & 0xff);
   VAR_18 = (((VAR_15[2] & 0xff00) >> 8) |
       ((VAR_15[6] & 0x1fff) << 8));
   VAR_19 = ((VAR_15[6] & 0xe000) >> 13);
   FUNC_1(VAR_13, VAR_14, 0x5061, "PegHalt Status-1 "
       "Register: protocol_engine_id=0x%x "
       "fw_err_code=0x%x err_level=0x%x.\n",
       VAR_17, VAR_18, VAR_19);
   FUNC_1(VAR_13, VAR_14, 0x5062, "PegHalt Status-2 "
       "Register: 0x%x%x.\n", VAR_15[7], VAR_15[3]);
   if (VAR_19 == VAR_0) {
    FUNC_1(VAR_13, VAR_14, 0x5063,
        "Not a fatal error, f/w has recovered "
        "iteself.\n");
   } else if (VAR_19 == VAR_1) {
    FUNC_1(VAR_11, VAR_14, 0x5064,
        "Recoverable Fatal error: Chip reset "
        "required.\n");
    FUNC_2(VAR_14,
        VAR_8);
   } else if (VAR_19 == VAR_2) {
    FUNC_1(VAR_11, VAR_14, 0x5065,
        "Unrecoverable Fatal error: Set FAILED "
        "state, reboot required.\n");
    FUNC_2(VAR_14,
        VAR_9);
   }
  }

  if (VAR_15[1] & VAR_5) {
   uint16_t VAR_20, VAR_21;
   uint16_t VAR_22, VAR_23;
   uint16_t VAR_24, VAR_25;
   uint16_t VAR_26, VAR_27;
   uint16_t VAR_28, VAR_29, VAR_30;
   VAR_20 = (VAR_15[2] & 0x00ff);
   VAR_21 = ((VAR_15[2] & 0x0100) >> 8);
   VAR_22 = ((VAR_15[2] & 0x0200) >> 9);
   VAR_23 = ((VAR_15[2] & 0x0c00) >> 10);
   VAR_24 = ((VAR_15[2] & 0x7000) >> 12);
   VAR_25 = ((VAR_15[2] & 0x8000) >> 15);
   VAR_26 = (VAR_15[6] & 0x0003);
   VAR_27 = ((VAR_15[6] & 0x0004) >> 2);
   VAR_28 = ((VAR_15[6] & 0x0008) >> 3);
   VAR_29 = ((VAR_15[6] & 0x0070) >> 4);
   VAR_30 = ((VAR_15[6] & 0x7000) >> 12);

   FUNC_1(VAR_13, VAR_14, 0x5066,
       "Peg-to-Fc Status Register:\n"
       "peg_fw_state=0x%x, nw_interface_link_up=0x%x, "
       "nw_interface_signal_detect=0x%x"
       "\nsfp_statis=0x%x.\n ", VAR_20,
       VAR_21, VAR_22,
       VAR_23);
   FUNC_1(VAR_13, VAR_14, 0x5067,
       "htbt_counter=0x%x, htbt_monitor_enable=0x%x, "
       "sfp_additonal_info=0x%x, sfp_multirate=0x%x.\n ",
       VAR_24, VAR_25,
       VAR_26, VAR_27);
   FUNC_1(VAR_13, VAR_14, 0x5068,
       "sfp_tx_fault=0x%x, link_state=0x%x, "
       "dcbx_status=0x%x.\n", VAR_28, VAR_29,
       VAR_30);

   FUNC_2(VAR_14, VAR_8);
  }

  if (VAR_15[1] & VAR_4) {
   FUNC_1(VAR_13, VAR_14, 0x5069,
       "Heartbeat Failure encountered, chip reset "
       "required.\n");

   FUNC_2(VAR_14, VAR_8);
  }
 }

 if (VAR_15[1] & VAR_3) {
  FUNC_1(VAR_12, VAR_14, 0x506a,
      "IDC Device-State changed = 0x%x.\n", VAR_15[4]);
  if (VAR_16->flags.nic_core_reset_owner)
   return;
  FUNC_2(VAR_14, VAR_7);
 }
}
