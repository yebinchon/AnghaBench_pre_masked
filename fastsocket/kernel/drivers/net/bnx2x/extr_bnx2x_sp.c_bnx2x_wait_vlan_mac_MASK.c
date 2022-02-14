
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_raw_obj {int (* wait_comp ) (struct bnx2x*,struct bnx2x_raw_obj*) ;} ;
struct bnx2x_exe_queue_obj {int dummy; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; struct bnx2x_exe_queue_obj exe_queue; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x_exe_queue_obj*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_raw_obj*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_1,
          struct bnx2x_vlan_mac_obj *VAR_2)
{
 int VAR_3 = 5000, VAR_4;
 struct bnx2x_exe_queue_obj *VAR_5 = &VAR_2->exe_queue;
 struct bnx2x_raw_obj *VAR_6 = &VAR_2->raw;

 while (VAR_3--) {

  VAR_4 = VAR_6->wait_comp(VAR_1, VAR_6);
  if (VAR_4)
   return VAR_4;


  if (!FUNC_0(VAR_5))
   FUNC_2(1000, 2000);
  else
   return 0;
 }

 return -VAR_0;
}
