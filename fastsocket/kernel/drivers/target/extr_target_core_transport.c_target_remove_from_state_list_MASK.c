
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int execute_task_lock; } ;
struct se_cmd {int transport_state; int state_active; int state_list; struct se_device* se_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct se_cmd *VAR_1)
{
 struct se_device *VAR_2 = VAR_1->se_dev;
 unsigned long VAR_3;

 if (!VAR_2)
  return;

 if (VAR_1->transport_state & VAR_0)
  return;

 FUNC_1(&VAR_2->execute_task_lock, VAR_3);
 if (VAR_1->state_active) {
  FUNC_0(&VAR_1->state_list);
  VAR_1->state_active = 0;
 }
 FUNC_2(&VAR_2->execute_task_lock, VAR_3);
}
