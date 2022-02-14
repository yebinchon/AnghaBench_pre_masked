
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int execute_task_lock; int state_list; } ;
struct se_cmd {int state_active; int state_list; struct se_device* se_dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct se_cmd *VAR_0)
{
 struct se_device *VAR_1 = VAR_0->se_dev;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->execute_task_lock, VAR_2);
 if (!VAR_0->state_active) {
  FUNC_0(&VAR_0->state_list, &VAR_1->state_list);
  VAR_0->state_active = 1;
 }
 FUNC_2(&VAR_1->execute_task_lock, VAR_2);
}
