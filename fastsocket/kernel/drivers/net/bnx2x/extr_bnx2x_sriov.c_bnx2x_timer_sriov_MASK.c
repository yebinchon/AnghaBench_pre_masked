
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid_bitmap; } ;
struct bnx2x {int sp_rtnl_task; int sp_rtnl_state; TYPE_1__ old_bulletin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct bnx2x *VAR_2)
{
 FUNC_0(VAR_2);


 if (VAR_2->old_bulletin.valid_bitmap & 1 << VAR_1) {
  FUNC_4();
  FUNC_2(VAR_0,
   &VAR_2->sp_rtnl_state);
  FUNC_3();
  FUNC_1(&VAR_2->sp_rtnl_task, 0);
 }
}
