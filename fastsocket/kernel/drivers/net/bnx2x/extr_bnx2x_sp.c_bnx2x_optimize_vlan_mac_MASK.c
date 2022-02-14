
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_exe_queue_obj {struct bnx2x_exeq_elem* (* get ) (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;} ;
struct bnx2x_vlan_mac_obj {int (* get_credit ) (struct bnx2x_vlan_mac_obj*) ;int (* put_credit ) (struct bnx2x_vlan_mac_obj*) ;struct bnx2x_exe_queue_obj exe_queue; } ;
union bnx2x_qable_obj {struct bnx2x_vlan_mac_obj vlan_mac; } ;
struct TYPE_3__ {int cmd; int vlan_mac_flags; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct bnx2x_exeq_elem {int link; TYPE_2__ cmd_data; } ;
struct bnx2x {int dummy; } ;
typedef int query ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;


 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_exeq_elem*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bnx2x_exeq_elem*,struct bnx2x_exeq_elem*,int) ;
 struct bnx2x_exeq_elem* FUNC_5 (struct bnx2x_exe_queue_obj*,struct bnx2x_exeq_elem*) ;
 int FUNC_6 (struct bnx2x_vlan_mac_obj*) ;
 int FUNC_7 (struct bnx2x_vlan_mac_obj*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct bnx2x *VAR_3,
       union bnx2x_qable_obj *VAR_4,
       struct bnx2x_exeq_elem *VAR_5)
{
 struct bnx2x_exeq_elem VAR_6, *VAR_7;
 struct bnx2x_vlan_mac_obj *VAR_8 = &VAR_4->vlan_mac;
 struct bnx2x_exe_queue_obj *VAR_9 = &VAR_8->exe_queue;

 FUNC_4(&VAR_6, VAR_5, sizeof(VAR_6));

 switch (VAR_5->cmd_data.vlan_mac.cmd) {
 case 129:
  VAR_6.cmd_data.vlan_mac.cmd = 128;
  break;
 case 128:
  VAR_6.cmd_data.vlan_mac.cmd = 129;
  break;
 default:

  return 0;
 }


 VAR_7 = VAR_9->get(VAR_9, &VAR_6);
 if (VAR_7) {


  if (!FUNC_8(VAR_0,
         &VAR_7->cmd_data.vlan_mac.vlan_mac_flags)) {
   if ((VAR_6.cmd_data.vlan_mac.cmd ==
        129) && !VAR_8->put_credit(VAR_8)) {
    FUNC_0("Failed to return the credit for the optimized ADD command\n");
    return -VAR_2;
   } else if (!VAR_8->get_credit(VAR_8)) {
    FUNC_0("Failed to recover the credit from the optimized DEL command\n");
    return -VAR_2;
   }
  }

  FUNC_1(VAR_1, "Optimizing %s command\n",
      (VAR_5->cmd_data.vlan_mac.cmd == 129) ?
      "ADD" : "DEL");

  FUNC_3(&VAR_7->link);
  FUNC_2(VAR_3, VAR_7);
  return 1;
 }

 return 0;
}
