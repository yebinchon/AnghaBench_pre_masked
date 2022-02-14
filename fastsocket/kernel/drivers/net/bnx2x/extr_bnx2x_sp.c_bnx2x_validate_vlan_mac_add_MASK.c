
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_exe_queue_obj {scalar_t__ (* get ) (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;} ;
struct bnx2x_vlan_mac_obj {int (* check_add ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int *) ;scalar_t__ (* get_credit ) (struct bnx2x_vlan_mac_obj*) ;struct bnx2x_exe_queue_obj exe_queue; } ;
union bnx2x_qable_obj {struct bnx2x_vlan_mac_obj vlan_mac; } ;
struct TYPE_3__ {int vlan_mac_flags; int u; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct bnx2x_exeq_elem {TYPE_2__ cmd_data; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int *) ;
 scalar_t__ FUNC_2 (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;
 scalar_t__ FUNC_3 (struct bnx2x_vlan_mac_obj*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline int FUNC_5(struct bnx2x *VAR_4,
           union bnx2x_qable_obj *VAR_5,
           struct bnx2x_exeq_elem *VAR_6)
{
 struct bnx2x_vlan_mac_obj *VAR_7 = &VAR_5->vlan_mac;
 struct bnx2x_exe_queue_obj *VAR_8 = &VAR_7->exe_queue;
 int VAR_9;


 VAR_9 = VAR_7->check_add(VAR_4, VAR_7, &VAR_6->cmd_data.vlan_mac.u);
 if (VAR_9) {
  FUNC_0(VAR_1, "ADD command is not allowed considering current registry state.\n");
  return VAR_9;
 }




 if (VAR_8->get(VAR_8, VAR_6)) {
  FUNC_0(VAR_1, "There is a pending ADD command already\n");
  return -VAR_2;
 }






 if (!(FUNC_4(VAR_0,
         &VAR_6->cmd_data.vlan_mac.vlan_mac_flags) ||
     VAR_7->get_credit(VAR_7)))
  return -VAR_3;

 return 0;
}
