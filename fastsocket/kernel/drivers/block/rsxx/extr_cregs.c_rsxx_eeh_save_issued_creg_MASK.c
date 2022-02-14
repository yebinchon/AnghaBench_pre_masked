
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ active; int q_depth; int queue; int cmd_timer; struct creg_cmd* active_cmd; } ;
struct rsxx_cardinfo {TYPE_1__ creg_ctrl; } ;
struct creg_cmd {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rsxx_cardinfo *VAR_0)
{
 struct creg_cmd *VAR_1 = ((void*)0);

 VAR_1 = VAR_0->creg_ctrl.active_cmd;
 VAR_0->creg_ctrl.active_cmd = ((void*)0);

 if (VAR_1) {
  FUNC_0(&VAR_0->creg_ctrl.cmd_timer);

  FUNC_2(&VAR_0->creg_ctrl.lock);
  FUNC_1(&VAR_1->list, &VAR_0->creg_ctrl.queue);
  VAR_0->creg_ctrl.q_depth++;
  VAR_0->creg_ctrl.active = 0;
  FUNC_3(&VAR_0->creg_ctrl.lock);
 }
}
