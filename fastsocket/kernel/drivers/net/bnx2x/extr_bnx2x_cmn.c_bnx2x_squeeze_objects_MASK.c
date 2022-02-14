
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_vlan_mac_obj {int (* delete_all ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;} ;
struct bnx2x_mcast_ramrod_params {unsigned long ramrod_flags; int * mcast_obj; int * member_0; } ;
struct bnx2x {int mcast_obj; TYPE_1__* sp_objs; } ;
struct TYPE_2__ {struct bnx2x_vlan_mac_obj mac_obj; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,unsigned long*,unsigned long*) ;

void FUNC_5(struct bnx2x *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = 0, VAR_9 = 0;
 struct bnx2x_mcast_ramrod_params VAR_10 = {((void*)0)};
 struct bnx2x_vlan_mac_obj *VAR_11 = &VAR_6->sp_objs->mac_obj;




 FUNC_1(VAR_4, &VAR_8);

 FUNC_1(VAR_5, &VAR_8);


 FUNC_1(VAR_0, &VAR_9);
 VAR_7 = VAR_11->delete_all(VAR_6, &VAR_6->sp_objs->mac_obj, &VAR_9,
     &VAR_8);
 if (VAR_7 != 0)
  FUNC_0("Failed to clean ETH MACs: %d\n", VAR_7);


 VAR_9 = 0;
 FUNC_1(VAR_3, &VAR_9);
 VAR_7 = VAR_11->delete_all(VAR_6, VAR_11, &VAR_9,
     &VAR_8);
 if (VAR_7 != 0)
  FUNC_0("Failed to clean UC list MACs: %d\n", VAR_7);


 VAR_10.mcast_obj = &VAR_6->mcast_obj;
 FUNC_1(VAR_5, &VAR_10.ramrod_flags);


 VAR_7 = FUNC_2(VAR_6, &VAR_10, VAR_2);
 if (VAR_7 < 0)
  FUNC_0("Failed to add a new DEL command to a multi-cast object: %d\n",
     VAR_7);


 VAR_7 = FUNC_2(VAR_6, &VAR_10, VAR_1);
 while (VAR_7 != 0) {
  if (VAR_7 < 0) {
   FUNC_0("Failed to clean multi-cast object: %d\n",
      VAR_7);
   return;
  }

  VAR_7 = FUNC_2(VAR_6, &VAR_10, VAR_1);
 }
}
