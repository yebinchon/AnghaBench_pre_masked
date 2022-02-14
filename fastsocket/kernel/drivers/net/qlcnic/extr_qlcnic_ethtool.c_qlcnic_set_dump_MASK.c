
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {int enable; TYPE_2__* tmpl_hdr; int clr; } ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;
struct TYPE_4__ {int drv_cap_mask; } ;
struct TYPE_3__ {struct qlcnic_fw_dump fw_dump; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;


 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 struct qlcnic_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int* VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_7, struct ethtool_dump *VAR_8)
{
 int VAR_9;
 struct qlcnic_adapter *VAR_10 = FUNC_4(VAR_7);
 struct qlcnic_fw_dump *VAR_11 = &VAR_10->ahw->fw_dump;
 u32 VAR_12;

 switch (VAR_8->flag) {
 case 131:
  if (!VAR_11->tmpl_hdr) {
   FUNC_2(VAR_7, "FW dump not supported\n");
   return -VAR_1;
  }
  if (!VAR_11->enable) {
   FUNC_3(VAR_7, "FW dump not enabled\n");
   return 0;
  }
  if (VAR_11->clr) {
   FUNC_3(VAR_7,
   "Previous dump not cleared, not forcing dump\n");
   return 0;
  }
  FUNC_3(VAR_7, "Forcing a FW dump\n");
  FUNC_5(VAR_10, VAR_8->flag);
  break;
 case 133:
  if (VAR_11->enable && VAR_11->tmpl_hdr) {
   FUNC_3(VAR_7, "Disabling FW dump\n");
   VAR_11->enable = 0;
  }
  return 0;
 case 132:
  if (!VAR_11->tmpl_hdr) {
   FUNC_2(VAR_7, "FW dump not supported\n");
   return -VAR_1;
  }
  if (!VAR_11->enable) {
   FUNC_3(VAR_7, "Enabling FW dump\n");
   VAR_11->enable = 1;
  }
  return 0;
 case 130:
  FUNC_3(VAR_7, "Forcing a FW reset\n");
  FUNC_5(VAR_10, VAR_8->flag);
  VAR_10->flags &= ~VAR_5;
  return 0;
 case 128:
 case 129:
  VAR_12 = FUNC_1(VAR_10, VAR_2);
  if (VAR_12 == VAR_4 || (VAR_12 == VAR_3))
   FUNC_3(VAR_7, "Device in FAILED state\n");
  return 0;
 default:
  if (!VAR_11->tmpl_hdr) {
   FUNC_2(VAR_7, "FW dump not supported\n");
   return -VAR_1;
  }
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
   if (VAR_8->flag == VAR_6[VAR_9]) {
    VAR_11->tmpl_hdr->drv_cap_mask =
       VAR_8->flag;
    FUNC_3(VAR_7, "Driver mask changed to: 0x%x\n",
     VAR_11->tmpl_hdr->drv_cap_mask);
    return 0;
   }
  }
  FUNC_3(VAR_7, "Invalid dump level: 0x%x\n", VAR_8->flag);
  return -VAR_0;
 }
 return 0;
}
