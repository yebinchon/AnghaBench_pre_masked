
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sas_ha_struct {int (* notify_phy_event ) (TYPE_2__*,int ) ;} ;
struct pm8001_port {size_t port_state; int port_attached; } ;
struct TYPE_4__ {int frame_rcvd_lock; int attached_sas_addr; int oob_mode; } ;
struct TYPE_3__ {int device_type; int target_port_protocols; } ;
struct pm8001_phy {int phy_attached; int frame_rcvd_size; TYPE_2__ sas_phy; TYPE_1__ identify; int frame_rcvd; int phy_type; } ;
struct pm8001_hba_info {struct pm8001_phy* phy; struct sas_ha_struct* sas; struct pm8001_port* port; } ;
struct hw_event_resp {int sata_fis; int npip_portstate; int lr_evt_status_phyid_portid; } ;
struct dev_to_host_fis {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t*,int) ;
 int FUNC_3 (struct pm8001_hba_info*,size_t) ;
 int FUNC_4 (struct pm8001_phy*,int ) ;
 int FUNC_5 (struct pm8001_phy*,size_t) ;
 int FUNC_6 (char*,size_t,size_t) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_10(struct pm8001_hba_info *VAR_5, void *VAR_6)
{
 struct hw_event_resp *VAR_7 =
  (struct hw_event_resp *)(VAR_6 + 4);
 u32 VAR_8 =
  FUNC_1(VAR_7->lr_evt_status_phyid_portid);
 u8 VAR_9 =
  (u8)((VAR_8 & 0xF0000000) >> 28);
 u8 VAR_10 = (u8)(VAR_8 & 0x0000000F);
 u8 VAR_11 =
  (u8)((VAR_8 & 0x000000F0) >> 4);
 u32 VAR_12 = FUNC_1(VAR_7->npip_portstate);
 u8 VAR_13 = (u8)(VAR_12 & 0x0000000F);
 struct pm8001_port *VAR_14 = &VAR_5->port[VAR_10];
 struct sas_ha_struct *VAR_15 = VAR_5->sas;
 struct pm8001_phy *VAR_16 = &VAR_5->phy[VAR_11];
 unsigned long VAR_17;
 FUNC_0(VAR_5,
  FUNC_6("HW_EVENT_SATA_PHY_UP port id = %d,"
  " phy id = %d\n", VAR_10, VAR_11));
 VAR_14->port_state = VAR_13;
 VAR_14->port_attached = 1;
 FUNC_5(VAR_16, VAR_9);
 VAR_16->phy_type |= VAR_1;
 VAR_16->phy_attached = 1;
 VAR_16->sas_phy.oob_mode = VAR_4;
 VAR_15->notify_phy_event(&VAR_16->sas_phy, VAR_0);
 FUNC_7(&VAR_16->sas_phy.frame_rcvd_lock, VAR_17);
 FUNC_2(VAR_16->frame_rcvd, ((u8 *)&VAR_7->sata_fis - 4),
  sizeof(struct dev_to_host_fis));
 VAR_16->frame_rcvd_size = sizeof(struct dev_to_host_fis);
 VAR_16->identify.target_port_protocols = VAR_2;
 VAR_16->identify.device_type = VAR_3;
 FUNC_4(VAR_16, VAR_16->sas_phy.attached_sas_addr);
 FUNC_8(&VAR_16->sas_phy.frame_rcvd_lock, VAR_17);
 FUNC_3(VAR_5, VAR_11);
}
