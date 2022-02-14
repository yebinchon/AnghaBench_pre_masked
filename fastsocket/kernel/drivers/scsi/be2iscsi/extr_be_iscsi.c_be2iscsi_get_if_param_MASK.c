
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_iface {scalar_t__ iface_type; } ;
struct beiscsi_hba {int dummy; } ;
struct TYPE_2__ {int subnet_mask; int addr; } ;
struct be_cmd_get_if_info_resp {int vlan_priority; TYPE_1__ ip_addr; int dhcp_state; } ;
typedef int if_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (int) ;
 int FUNC_1 (struct be_cmd_get_if_info_resp*,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,int,struct be_cmd_get_if_info_resp*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct beiscsi_hba *VAR_7,
  struct iscsi_iface *VAR_8, int VAR_9,
  char *VAR_10)
{
 struct be_cmd_get_if_info_resp VAR_11;
 int VAR_12, VAR_13 = VAR_0;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 if (VAR_8->iface_type == VAR_4)
  VAR_13 = VAR_1;

 VAR_12 = FUNC_2(VAR_7, VAR_13, &VAR_11);
 if (VAR_12)
  return VAR_12;

 switch (VAR_9) {
 case 134:
  VAR_12 = FUNC_3(VAR_10, "%pI4\n", &VAR_11.ip_addr.addr);
  break;
 case 131:
  VAR_12 = FUNC_3(VAR_10, "%pI6\n", &VAR_11.ip_addr.addr);
  break;
 case 133:
  if (!VAR_11.dhcp_state)
   VAR_12 = FUNC_3(VAR_10, "static\n");
  else
   VAR_12 = FUNC_3(VAR_10, "dhcp\n");
  break;
 case 132:
  VAR_12 = FUNC_3(VAR_10, "%pI4\n", &VAR_11.ip_addr.subnet_mask);
  break;
 case 130:
  VAR_12 = FUNC_3(VAR_10, "%s\n",
        (VAR_11.vlan_priority == VAR_2)
        ? "Disabled\n" : "Enabled\n");
  break;
 case 129:
  if (VAR_11.vlan_priority == VAR_2)
   return -VAR_3;
  else
   VAR_12 = FUNC_3(VAR_10, "%d\n",
         (VAR_11.vlan_priority &
         VAR_5));
  break;
 case 128:
  if (VAR_11.vlan_priority == VAR_2)
   return -VAR_3;
  else
   VAR_12 = FUNC_3(VAR_10, "%d\n",
         ((VAR_11.vlan_priority >> 13) &
         VAR_6));
  break;
 default:
  FUNC_0(1);
 }

 return VAR_12;
}
