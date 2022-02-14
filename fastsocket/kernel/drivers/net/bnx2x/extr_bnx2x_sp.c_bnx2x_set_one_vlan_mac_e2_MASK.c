
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* inner_mac; int mac_lsb; int mac_mid; int mac_msb; void* vlan; int header; } ;
union eth_classify_rule_cmd {TYPE_1__ pair; } ;
typedef int u8 ;
typedef int u16 ;
struct eth_classify_rules_ramrod_data {int header; union eth_classify_rule_cmd* rules; } ;
struct bnx2x_raw_obj {int state; int cid; scalar_t__ rdata; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct TYPE_7__ {int is_inner_mac; int * mac; int vlan; } ;
struct TYPE_8__ {TYPE_2__ vlan_mac; } ;
struct TYPE_9__ {int cmd; TYPE_3__ u; struct bnx2x_vlan_mac_obj* target_obj; } ;
struct TYPE_10__ {TYPE_4__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_5__ cmd_data; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vlan_mac_cmd { ____Placeholder_bnx2x_vlan_mac_cmd } bnx2x_vlan_mac_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct eth_classify_rules_ramrod_data*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_3,
          struct bnx2x_vlan_mac_obj *VAR_4,
          struct bnx2x_exeq_elem *VAR_5,
          int VAR_6, int VAR_7)
{
 struct bnx2x_raw_obj *VAR_8 = &VAR_4->raw;
 struct eth_classify_rules_ramrod_data *VAR_9 =
  (struct eth_classify_rules_ramrod_data *)(VAR_8->rdata);
 int VAR_10 = VAR_6 + 1;
 union eth_classify_rule_cmd *VAR_11 = &VAR_9->rules[VAR_6];
 enum bnx2x_vlan_mac_cmd VAR_12 = VAR_5->cmd_data.vlan_mac.cmd;
 bool VAR_13 = (VAR_12 == VAR_0) ? 1 : 0;
 u16 VAR_14 = VAR_5->cmd_data.vlan_mac.u.vlan_mac.vlan;
 u8 *VAR_15 = VAR_5->cmd_data.vlan_mac.u.vlan_mac.mac;


 if (VAR_6 == 0)
  FUNC_4(VAR_9, 0, sizeof(*VAR_9));


 FUNC_1(VAR_3, VAR_4, VAR_13, VAR_2,
          &VAR_11->pair.header);


 VAR_11->pair.vlan = FUNC_3(VAR_14);
 FUNC_0(&VAR_11->pair.mac_msb,
         &VAR_11->pair.mac_mid,
         &VAR_11->pair.mac_lsb, VAR_15);
 VAR_11->pair.inner_mac =
  FUNC_3(VAR_5->cmd_data.vlan_mac.u.vlan_mac.is_inner_mac);

 if (VAR_12 == VAR_1) {
  VAR_11++;
  VAR_10++;


  FUNC_1(VAR_3,
     VAR_5->cmd_data.vlan_mac.target_obj,
           1, VAR_2,
           &VAR_11->pair.header);


  VAR_11->pair.vlan = FUNC_3(VAR_14);
  FUNC_0(&VAR_11->pair.mac_msb,
          &VAR_11->pair.mac_mid,
          &VAR_11->pair.mac_lsb, VAR_15);
  VAR_11->pair.inner_mac =
   FUNC_3(VAR_5->cmd_data.vlan_mac.u.
      vlan_mac.is_inner_mac);
 }




 FUNC_2(VAR_8->cid, VAR_8->state, &VAR_9->header,
     VAR_10);
}
