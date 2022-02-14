
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;int (* notify_phy_event ) (struct asd_sas_phy*,int ) ;struct asd_sas_phy** sas_phy; } ;
struct asd_sas_phy {int sas_prim; int sas_prim_lock; } ;
struct pm8001_phy {int phy_state; int phy_attached; struct asd_sas_phy sas_phy; int enable_completion; } ;
struct pm8001_hba_info {int flags; struct pm8001_phy* phy; struct sas_ha_struct* sas; } ;
struct hw_event_resp {int lr_evt_status_phyid_portid; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pm8001_hba_info*,void*) ;
 int FUNC_3 (struct pm8001_hba_info*,void*) ;
 int FUNC_4 (struct pm8001_hba_info*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pm8001_hba_info*,int ,int const,size_t,size_t,int,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct asd_sas_phy*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct asd_sas_phy*,int ) ;
 int FUNC_12 (struct asd_sas_phy*,int ) ;
 int FUNC_13 (struct asd_sas_phy*,int ) ;
 int FUNC_14 (struct asd_sas_phy*,int ) ;
 int FUNC_15 (struct asd_sas_phy*,int ) ;
 int FUNC_16 (struct asd_sas_phy*,int ) ;
 int FUNC_17 (struct asd_sas_phy*,int ) ;
 int FUNC_18 (struct asd_sas_phy*,int ) ;
 int FUNC_19 (struct asd_sas_phy*,int ) ;
 int FUNC_20 (struct asd_sas_phy*,int ) ;
 int FUNC_21 (struct asd_sas_phy*,int ) ;
 int FUNC_22 (struct asd_sas_phy*,int ) ;
 int FUNC_23 (struct asd_sas_phy*,int ) ;
 int FUNC_24 (struct asd_sas_phy*,int ) ;
 int FUNC_25 (struct asd_sas_phy*,int ) ;
 int FUNC_26 (struct asd_sas_phy*,int ) ;

__attribute__((used)) static int FUNC_27(struct pm8001_hba_info *VAR_7, void* VAR_8)
{
 unsigned long VAR_9;
 struct hw_event_resp *VAR_10 =
  (struct hw_event_resp *)(VAR_8 + 4);
 u32 VAR_11 =
  FUNC_5(VAR_10->lr_evt_status_phyid_portid);
 u8 VAR_12 = (u8)(VAR_11 & 0x0000000F);
 u8 VAR_13 =
  (u8)((VAR_11 & 0x000000F0) >> 4);
 u16 VAR_14 =
  (u16)((VAR_11 & 0x00FFFF00) >> 8);
 u8 VAR_15 =
  (u8)((VAR_11 & 0x0F000000) >> 24);
 struct sas_ha_struct *VAR_16 = VAR_7->sas;
 struct pm8001_phy *VAR_17 = &VAR_7->phy[VAR_13];
 struct asd_sas_phy *VAR_18 = VAR_16->sas_phy[VAR_13];
 FUNC_0(VAR_7,
  FUNC_7("outbound queue HW event & event type : "));
 switch (VAR_14) {
 case 137:
  FUNC_0(VAR_7,
  FUNC_7("HW_EVENT_PHY_START_STATUS"
   " status = %x\n", VAR_15));
  if (VAR_15 == 0) {
   VAR_17->phy_state = 1;
   if (VAR_7->flags == VAR_3)
    FUNC_1(VAR_17->enable_completion);
  }
  break;
 case 130:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PHY_START_STATUS\n"));
  FUNC_3(VAR_7, VAR_8);
  break;
 case 129:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_SATA_PHY_UP\n"));
  FUNC_4(VAR_7, VAR_8);
  break;
 case 136:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PHY_STOP_STATUS "
   "status = %x\n", VAR_15));
  if (VAR_15 == 0)
   VAR_17->phy_state = 0;
  break;
 case 128:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_SATA_SPINUP_HOLD\n"));
  VAR_16->notify_phy_event(&VAR_17->sas_phy, VAR_2);
  break;
 case 139:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PHY_DOWN\n"));
  VAR_16->notify_phy_event(&VAR_17->sas_phy, VAR_0);
  VAR_17->phy_attached = 0;
  VAR_17->phy_state = 0;
  FUNC_2(VAR_7, VAR_8);
  break;
 case 135:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PORT_INVALID\n"));
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;


 case 151:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_BROADCAST_CHANGE\n"));
  FUNC_6(VAR_7, 0, 151,
   VAR_12, VAR_13, 1, 0);
  FUNC_9(&VAR_18->sas_prim_lock, VAR_9);
  VAR_18->sas_prim = 151;
  FUNC_10(&VAR_18->sas_prim_lock, VAR_9);
  VAR_16->notify_port_event(VAR_18, VAR_4);
  break;
 case 138:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PHY_ERROR\n"));
  FUNC_8(&VAR_17->sas_phy);
  VAR_17->phy_attached = 0;
  VAR_16->notify_phy_event(&VAR_17->sas_phy, VAR_1);
  break;
 case 150:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_BROADCAST_EXP\n"));
  FUNC_9(&VAR_18->sas_prim_lock, VAR_9);
  VAR_18->sas_prim = 150;
  FUNC_10(&VAR_18->sas_prim_lock, VAR_9);
  VAR_16->notify_port_event(VAR_18, VAR_4);
  break;
 case 143:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_LINK_ERR_INVALID_DWORD\n"));
  FUNC_6(VAR_7, 0,
   143, VAR_12, VAR_13, 0, 0);
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 144:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_LINK_ERR_DISPARITY_ERROR\n"));
  FUNC_6(VAR_7, 0,
   144,
   VAR_12, VAR_13, 0, 0);
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 145:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_LINK_ERR_CODE_VIOLATION\n"));
  FUNC_6(VAR_7, 0,
   145,
   VAR_12, VAR_13, 0, 0);
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 142:
  FUNC_0(VAR_7,
        FUNC_7("HW_EVENT_LINK_ERR_LOSS_OF_DWORD_SYNCH\n"));
  FUNC_6(VAR_7, 0,
   142,
   VAR_12, VAR_13, 0, 0);
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 140:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_MALFUNCTION\n"));
  break;
 case 149:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_BROADCAST_SES\n"));
  FUNC_9(&VAR_18->sas_prim_lock, VAR_9);
  VAR_18->sas_prim = 149;
  FUNC_10(&VAR_18->sas_prim_lock, VAR_9);
  VAR_16->notify_port_event(VAR_18, VAR_4);
  break;
 case 146:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_INBOUND_CRC_ERROR\n"));
  FUNC_6(VAR_7, 0,
   146,
   VAR_12, VAR_13, 0, 0);
  break;
 case 148:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_HARD_RESET_RECEIVED\n"));
  VAR_16->notify_port_event(VAR_18, VAR_5);
  break;
 case 147:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_ID_FRAME_TIMEOUT\n"));
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 141:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_LINK_ERR_PHY_RESET_FAILED\n"));
  FUNC_6(VAR_7, 0,
   141,
   VAR_12, VAR_13, 0, 0);
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 131:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PORT_RESET_TIMER_TMO\n"));
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 133:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PORT_RECOVERY_TIMER_TMO\n"));
  FUNC_8(VAR_18);
  VAR_17->phy_attached = 0;
  VAR_16->notify_port_event(VAR_18, VAR_6);
  break;
 case 134:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PORT_RECOVER\n"));
  break;
 case 132:
  FUNC_0(VAR_7,
   FUNC_7("HW_EVENT_PORT_RESET_COMPLETE\n"));
  break;
 case 152:
  FUNC_0(VAR_7,
   FUNC_7("EVENT_BROADCAST_ASYNCH_EVENT\n"));
  break;
 default:
  FUNC_0(VAR_7,
   FUNC_7("Unknown event type = %x\n", VAR_14));
  break;
 }
 return 0;
}
