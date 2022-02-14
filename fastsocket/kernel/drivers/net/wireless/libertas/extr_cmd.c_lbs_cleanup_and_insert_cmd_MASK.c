
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int driver_lock; } ;
struct cmd_ctrl_node {int dummy; } ;


 int FUNC_0 (struct lbs_private*,struct cmd_ctrl_node*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct lbs_private *VAR_0,
 struct cmd_ctrl_node *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->driver_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->driver_lock, VAR_2);
}
