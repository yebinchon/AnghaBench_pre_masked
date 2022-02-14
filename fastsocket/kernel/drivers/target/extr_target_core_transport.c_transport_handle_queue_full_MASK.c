
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_qf_count; int qf_cmd_lock; } ;
struct se_cmd {TYPE_1__* se_dev; int se_qf_node; } ;
struct TYPE_2__ {int qf_work_queue; int qf_cmd_lock; int qf_cmd_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
 struct se_cmd *VAR_0,
 struct se_device *VAR_1)
{
 FUNC_4(&VAR_1->qf_cmd_lock);
 FUNC_1(&VAR_0->se_qf_node, &VAR_0->se_dev->qf_cmd_list);
 FUNC_0(&VAR_1->dev_qf_count);
 FUNC_3();
 FUNC_5(&VAR_0->se_dev->qf_cmd_lock);

 FUNC_2(&VAR_0->se_dev->qf_work_queue);
}
