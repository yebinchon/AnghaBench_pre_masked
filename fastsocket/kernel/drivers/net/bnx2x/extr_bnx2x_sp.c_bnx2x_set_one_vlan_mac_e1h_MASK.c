
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mac_configuration_cmd {int dummy; } ;
struct bnx2x_raw_obj {scalar_t__ rdata; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct TYPE_5__ {int vlan; int mac; } ;
struct TYPE_6__ {TYPE_1__ vlan_mac; } ;
struct TYPE_7__ {scalar_t__ cmd; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_4__ cmd_data; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int ,int,int,int ,int ,int ,struct mac_configuration_cmd*) ;
 int FUNC_1 (struct mac_configuration_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_3,
           struct bnx2x_vlan_mac_obj *VAR_4,
           struct bnx2x_exeq_elem *VAR_5,
           int VAR_6, int VAR_7)
{
 struct bnx2x_raw_obj *VAR_8 = &VAR_4->raw;
 struct mac_configuration_cmd *VAR_9 =
  (struct mac_configuration_cmd *)(VAR_8->rdata);



 bool VAR_10 = (VAR_5->cmd_data.vlan_mac.cmd == VAR_1) ?
  1 : 0;


 FUNC_1(VAR_9, 0, sizeof(*VAR_9));

 FUNC_0(VAR_3, VAR_4, VAR_0,
         VAR_7, VAR_10,
         VAR_5->cmd_data.vlan_mac.u.vlan_mac.mac,
         VAR_5->cmd_data.vlan_mac.u.vlan_mac.vlan,
         VAR_2, VAR_9);
}
