
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pm8001_port {size_t port_state; int port_attached; } ;
struct TYPE_2__ {scalar_t__ device_type; } ;
struct pm8001_phy {int dev_sas_addr; scalar_t__ phy_attached; TYPE_1__ identify; scalar_t__ phy_type; } ;
struct pm8001_hba_info {struct pm8001_phy* phy; struct pm8001_port* port; } ;
struct hw_event_resp {int phyid_npip_portstate; int lr_status_evt_portid; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;





 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pm8001_hba_info*,int ,int ,size_t,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct pm8001_hba_info *VAR_2, void *VAR_3)
{
 struct hw_event_resp *VAR_4 =
  (struct hw_event_resp *)(VAR_3 + 4);

 u32 VAR_5 =
  FUNC_1(VAR_4->lr_status_evt_portid);
 u8 VAR_6 = (u8)(VAR_5 & 0x000000FF);
 u32 VAR_7 = FUNC_1(VAR_4->phyid_npip_portstate);
 u8 VAR_8 =
  (u8)((VAR_7 & 0xFF0000) >> 16);
 u8 VAR_9 = (u8)(VAR_7 & 0x0000000F);

 struct pm8001_port *VAR_10 = &VAR_2->port[VAR_6];
 struct pm8001_phy *VAR_11 = &VAR_2->phy[VAR_8];
 VAR_10->port_state = VAR_9;
 VAR_11->phy_type = 0;
 VAR_11->identify.device_type = 0;
 VAR_11->phy_attached = 0;
 FUNC_2(&VAR_11->dev_sas_addr, 0, VAR_1);
 switch (VAR_9) {
 case 128:
  break;
 case 132:
  FUNC_0(VAR_2,
   FUNC_3(" PortInvalid portID %d\n", VAR_6));
  FUNC_0(VAR_2,
   FUNC_3(" Last phy Down and port invalid\n"));
  VAR_10->port_attached = 0;
  FUNC_4(VAR_2, 0, VAR_0,
   VAR_6, VAR_8, 0, 0);
  break;
 case 131:
  FUNC_0(VAR_2,
   FUNC_3(" Port In Reset portID %d\n", VAR_6));
  break;
 case 129:
  FUNC_0(VAR_2,
   FUNC_3(" phy Down and PORT_NOT_ESTABLISHED\n"));
  VAR_10->port_attached = 0;
  break;
 case 130:
  FUNC_0(VAR_2,
   FUNC_3(" phy Down and PORT_LOSTCOMM\n"));
  FUNC_0(VAR_2,
   FUNC_3(" Last phy Down and port invalid\n"));
  VAR_10->port_attached = 0;
  FUNC_4(VAR_2, 0, VAR_0,
   VAR_6, VAR_8, 0, 0);
  break;
 default:
  VAR_10->port_attached = 0;
  FUNC_0(VAR_2,
   FUNC_3(" phy Down and(default) = 0x%x\n",
   VAR_9));
  break;

 }
}
