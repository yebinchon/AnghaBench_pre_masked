
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
struct bnx2x_vlan_mac_ramrod_params {TYPE_2__ user_req; int ramrod_flags; struct bnx2x_vlan_mac_obj* vlan_mac_obj; } ;
struct bnx2x_vlan_mac_obj {int exe_queue; } ;
struct TYPE_3__ {int vlan_mac; } ;
struct bnx2x_exeq_elem {int cmd_len; TYPE_1__ cmd_data; } ;
struct bnx2x {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,int *,struct bnx2x_exeq_elem*,int) ;
 struct bnx2x_exeq_elem* FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline int FUNC_4(
 struct bnx2x *VAR_2,
 struct bnx2x_vlan_mac_ramrod_params *VAR_3)
{
 struct bnx2x_exeq_elem *VAR_4;
 struct bnx2x_vlan_mac_obj *VAR_5 = VAR_3->vlan_mac_obj;
 bool VAR_6 = FUNC_3(VAR_1, &VAR_3->ramrod_flags);


 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;


 switch (VAR_3->user_req.cmd) {
 case 128:
  VAR_4->cmd_len = 2;
  break;
 default:
  VAR_4->cmd_len = 1;
 }


 FUNC_2(&VAR_4->cmd_data.vlan_mac, &VAR_3->user_req, sizeof(VAR_3->user_req));


 return FUNC_0(VAR_2, &VAR_5->exe_queue, VAR_4, VAR_6);
}
