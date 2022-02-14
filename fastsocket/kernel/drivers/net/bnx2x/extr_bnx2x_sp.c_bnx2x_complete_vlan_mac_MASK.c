
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error; } ;
union event_ring_elem {TYPE_1__ message; } ;
struct bnx2x_raw_obj {int (* clear_pending ) (struct bnx2x_raw_obj*) ;} ;
struct bnx2x_vlan_mac_obj {int exe_queue; struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnx2x*,int *) ;
 int FUNC_2 (struct bnx2x*,int *,unsigned long*) ;
 int FUNC_3 (struct bnx2x_raw_obj*) ;
 scalar_t__ FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_2,
       struct bnx2x_vlan_mac_obj *VAR_3,
       union event_ring_elem *VAR_4,
       unsigned long *VAR_5)
{
 struct bnx2x_raw_obj *VAR_6 = &VAR_3->raw;
 int VAR_7;


 FUNC_1(VAR_2, &VAR_3->exe_queue);


 VAR_6->clear_pending(VAR_6);


 if (VAR_4->message.error)
  return -VAR_0;


 if (FUNC_4(VAR_1, VAR_5)) {
  VAR_7 = FUNC_2(VAR_2, &VAR_3->exe_queue, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
 }


 if (!FUNC_0(&VAR_3->exe_queue))
  return 1;

 return 0;
}
