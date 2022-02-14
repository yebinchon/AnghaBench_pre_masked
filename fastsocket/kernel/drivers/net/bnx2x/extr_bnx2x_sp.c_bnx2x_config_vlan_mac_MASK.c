
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_vlan_mac_ramrod_params {unsigned long ramrod_flags; struct bnx2x_vlan_mac_obj* vlan_mac_obj; } ;
struct bnx2x_raw_obj {int (* wait_comp ) (struct bnx2x*,struct bnx2x_raw_obj*) ;int (* clear_pending ) (struct bnx2x_raw_obj*) ;} ;
struct bnx2x_vlan_mac_obj {int exe_queue; struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bnx2x*,int *,unsigned long*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_vlan_mac_ramrod_params*) ;
 int FUNC_5 (struct bnx2x_raw_obj*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_raw_obj*) ;
 int FUNC_7 (int ,unsigned long*) ;

int FUNC_8(
 struct bnx2x *VAR_5,
 struct bnx2x_vlan_mac_ramrod_params *VAR_6)
{
 int VAR_7 = 0;
 struct bnx2x_vlan_mac_obj *VAR_8 = VAR_6->vlan_mac_obj;
 unsigned long *VAR_9 = &VAR_6->ramrod_flags;
 bool VAR_10 = FUNC_7(VAR_2, VAR_9);
 struct bnx2x_raw_obj *VAR_11 = &VAR_8->raw;




 if (!VAR_10) {
  VAR_7 = FUNC_4(VAR_5, VAR_6);
  if (VAR_7)
   return VAR_7;
 }




 if (!FUNC_1(&VAR_8->exe_queue))
  VAR_7 = 1;

 if (FUNC_7(VAR_3, VAR_9)) {
  FUNC_0(VAR_0, "RAMROD_DRV_CLR_ONLY requested: clearing a pending bit.\n");
  VAR_11->clear_pending(VAR_11);
 }


 if (VAR_10 || FUNC_7(VAR_4, VAR_9) ||
     FUNC_7(VAR_1, VAR_9)) {
  VAR_7 = FUNC_3(VAR_5, &VAR_8->exe_queue, VAR_9);
  if (VAR_7 < 0)
   return VAR_7;
 }




 if (FUNC_7(VAR_1, &VAR_6->ramrod_flags)) {



  int VAR_12 = FUNC_2(&VAR_8->exe_queue) + 1;

  while (!FUNC_1(&VAR_8->exe_queue) &&
         VAR_12--) {


   VAR_7 = VAR_11->wait_comp(VAR_5, VAR_11);
   if (VAR_7)
    return VAR_7;


   VAR_7 = FUNC_3(VAR_5, &VAR_8->exe_queue,
        VAR_9);
   if (VAR_7 < 0)
    return VAR_7;
  }

  return 0;
 }

 return VAR_7;
}
