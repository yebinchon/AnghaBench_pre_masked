
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sas_identify_frame {int dummy; } ;
struct sas_ha_struct {int (* notify_phy_event ) (TYPE_2__*,int ) ;} ;
struct pm8001_port {size_t port_state; int port_attached; } ;
struct TYPE_5__ {int frame_rcvd_lock; int attached_sas_addr; int oob_mode; } ;
struct TYPE_4__ {size_t device_type; int target_port_protocols; } ;
struct pm8001_phy {int phy_attached; int frame_rcvd_size; TYPE_2__ sas_phy; int frame_rcvd; TYPE_1__ identify; int phy_type; } ;
struct pm8001_hba_info {scalar_t__ flags; struct pm8001_phy* phy; struct sas_ha_struct* sas; struct pm8001_port* port; } ;
struct TYPE_6__ {size_t dev_type; } ;
struct hw_event_resp {TYPE_3__ sas_identify; int phyid_npip_portstate; int lr_status_evt_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_3 ;



 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;
 int FUNC_4 (struct pm8001_hba_info*,size_t) ;
 int FUNC_5 (struct pm8001_phy*,int ) ;
 int FUNC_6 (struct pm8001_phy*,size_t) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pm8001_hba_info*,size_t,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_12(struct pm8001_hba_info *VAR_7, void *VAR_8)
{
 struct hw_event_resp *VAR_9 =
  (struct hw_event_resp *)(VAR_8 + 4);
 u32 VAR_10 =
  FUNC_1(VAR_9->lr_status_evt_portid);
 u32 VAR_11 = FUNC_1(VAR_9->phyid_npip_portstate);

 u8 VAR_12 =
  (u8)((VAR_10 & 0xF0000000) >> 28);
 u8 VAR_13 = (u8)(VAR_10 & 0x000000FF);
 u8 VAR_14 =
  (u8)((VAR_11 & 0xFF0000) >> 16);
 u8 VAR_15 = (u8)(VAR_11 & 0x0000000F);

 struct pm8001_port *VAR_16 = &VAR_7->port[VAR_13];
 struct sas_ha_struct *VAR_17 = VAR_7->sas;
 struct pm8001_phy *VAR_18 = &VAR_7->phy[VAR_14];
 unsigned long VAR_19;
 u8 VAR_20 = VAR_9->sas_identify.dev_type;
 VAR_16->port_state = VAR_15;
 FUNC_0(VAR_7, FUNC_7(
  "portid:%d; phyid:%d; linkrate:%d; "
  "portstate:%x; devicetype:%x\n",
  VAR_13, VAR_14, VAR_12, VAR_15, VAR_20));

 switch (VAR_20) {
 case 128:
  FUNC_0(VAR_7,
   FUNC_7("device type no device.\n"));
  break;
 case 130:
  FUNC_0(VAR_7, FUNC_7("end device.\n"));
  FUNC_8(VAR_7, VAR_14,
   VAR_1);
  VAR_16->port_attached = 1;
  FUNC_6(VAR_18, VAR_12);
  break;
 case 131:
  FUNC_0(VAR_7,
   FUNC_7("expander device.\n"));
  VAR_16->port_attached = 1;
  FUNC_6(VAR_18, VAR_12);
  break;
 case 129:
  FUNC_0(VAR_7,
   FUNC_7("fanout expander device.\n"));
  VAR_16->port_attached = 1;
  FUNC_6(VAR_18, VAR_12);
  break;
 default:
  FUNC_0(VAR_7,
   FUNC_7("unknown device type(%x)\n", VAR_20));
  break;
 }
 VAR_18->phy_type |= VAR_3;
 VAR_18->identify.device_type = VAR_20;
 VAR_18->phy_attached = 1;
 if (VAR_18->identify.device_type == 130)
  VAR_18->identify.target_port_protocols = VAR_6;
 else if (VAR_18->identify.device_type != 128)
  VAR_18->identify.target_port_protocols = VAR_5;
 VAR_18->sas_phy.oob_mode = VAR_4;
 VAR_17->notify_phy_event(&VAR_18->sas_phy, VAR_0);
 FUNC_9(&VAR_18->sas_phy.frame_rcvd_lock, VAR_19);
 FUNC_3(VAR_18->frame_rcvd, &VAR_9->sas_identify,
  sizeof(struct sas_identify_frame)-4);
 VAR_18->frame_rcvd_size = sizeof(struct sas_identify_frame) - 4;
 FUNC_5(VAR_18, VAR_18->sas_phy.attached_sas_addr);
 FUNC_10(&VAR_18->sas_phy.frame_rcvd_lock, VAR_19);
 if (VAR_7->flags == VAR_2)
  FUNC_2(200);
 FUNC_4(VAR_7, VAR_14);
}
