
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x {int sp_rtnl_task; int sp_rtnl_state; int panic; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct net_device *VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_1(VAR_1);






 FUNC_5();
 FUNC_3(VAR_0, &VAR_2->sp_rtnl_state);
 FUNC_4();


 FUNC_2(&VAR_2->sp_rtnl_task, 0);
}
