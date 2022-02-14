
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_vlan_mac_registry_elem {int vlan_mac_flags; int u; int cam_offset; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_vlan_mac_registry_elem* (* check_del ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int *) ;int (* get_cam_offset ) (struct bnx2x_vlan_mac_obj*,int *) ;} ;
struct TYPE_3__ {int cmd; int u; int vlan_mac_flags; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_2__ cmd_data; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vlan_mac_cmd { ____Placeholder_bnx2x_vlan_mac_cmd } bnx2x_vlan_mac_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bnx2x_vlan_mac_registry_elem*) ;
 struct bnx2x_vlan_mac_registry_elem* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct bnx2x_vlan_mac_obj*,int *) ;
 struct bnx2x_vlan_mac_registry_elem* FUNC_6 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int *) ;

__attribute__((used)) static inline int FUNC_7(
 struct bnx2x *VAR_6,
 struct bnx2x_vlan_mac_obj *VAR_7,
 struct bnx2x_exeq_elem *VAR_8,
 bool VAR_9,
 struct bnx2x_vlan_mac_registry_elem **VAR_10)
{
 enum bnx2x_vlan_mac_cmd VAR_11 = VAR_8->cmd_data.vlan_mac.cmd;
 struct bnx2x_vlan_mac_registry_elem *VAR_12;


 if (!VAR_9 &&
     ((VAR_11 == VAR_1) || (VAR_11 == VAR_2))) {
  VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_5);
  if (!VAR_12)
   return -VAR_4;


  if (!VAR_7->get_cam_offset(VAR_7, &VAR_12->cam_offset)) {



   FUNC_1(1);
   FUNC_2(VAR_12);
   return -VAR_3;
  }

  FUNC_0(VAR_0, "Got cam offset %d\n", VAR_12->cam_offset);


  FUNC_4(&VAR_12->u, &VAR_8->cmd_data.vlan_mac.u,
     sizeof(VAR_12->u));


  VAR_12->vlan_mac_flags =
   VAR_8->cmd_data.vlan_mac.vlan_mac_flags;
 } else
  VAR_12 = VAR_7->check_del(VAR_6, VAR_7, &VAR_8->cmd_data.vlan_mac.u);

 *VAR_10 = VAR_12;
 return 0;
}
