
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int delayed_cmd_lock; int delayed_cmd_list; int dev_ordered_sync; int simple_cmds; TYPE_1__* transport; } ;
struct se_cmd {int sam_task_attr; int se_ordered_id; int * t_task_cdb; int se_delayed_node; struct se_device* se_dev; } ;
struct TYPE_2__ {scalar_t__ transport_type; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct se_cmd *VAR_1)
{
 struct se_device *VAR_2 = VAR_1->se_dev;

 if (VAR_2->transport->transport_type == VAR_0)
  return 0;





 switch (VAR_1->sam_task_attr) {
 case 129:
  FUNC_3("Added HEAD_OF_QUEUE for CDB: 0x%02x, "
    "se_ordered_id: %u\n",
    VAR_1->t_task_cdb[0], VAR_1->se_ordered_id);
  return 0;
 case 128:
  FUNC_0(&VAR_2->dev_ordered_sync);
  FUNC_4();

  FUNC_3("Added ORDERED for CDB: 0x%02x to ordered list, "
    " se_ordered_id: %u\n",
    VAR_1->t_task_cdb[0], VAR_1->se_ordered_id);





  if (!FUNC_1(&VAR_2->simple_cmds))
   return 0;
  break;
 default:



  FUNC_0(&VAR_2->simple_cmds);
  FUNC_4();
  break;
 }

 if (FUNC_1(&VAR_2->dev_ordered_sync) == 0)
  return 0;

 FUNC_5(&VAR_2->delayed_cmd_lock);
 FUNC_2(&VAR_1->se_delayed_node, &VAR_2->delayed_cmd_list);
 FUNC_6(&VAR_2->delayed_cmd_lock);

 FUNC_3("Added CDB: 0x%02x Task Attr: 0x%02x to"
  " delayed CMD list, se_ordered_id: %u\n",
  VAR_1->t_task_cdb[0], VAR_1->sam_task_attr,
  VAR_1->se_ordered_id);
 return 1;
}
