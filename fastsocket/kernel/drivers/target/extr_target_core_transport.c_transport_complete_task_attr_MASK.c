
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_cur_ordered_id; int dev_ordered_sync; int simple_cmds; TYPE_1__* transport; } ;
struct se_cmd {scalar_t__ sam_task_attr; int se_ordered_id; struct se_device* se_dev; } ;
struct TYPE_2__ {scalar_t__ transport_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct se_device*) ;

__attribute__((used)) static void FUNC_4(struct se_cmd *VAR_4)
{
 struct se_device *VAR_5 = VAR_4->se_dev;

 if (VAR_5->transport->transport_type == VAR_3)
  return;

 if (VAR_4->sam_task_attr == VAR_2) {
  FUNC_0(&VAR_5->simple_cmds);
  FUNC_2();
  VAR_5->dev_cur_ordered_id++;
  FUNC_1("Incremented dev->dev_cur_ordered_id: %u for"
   " SIMPLE: %u\n", VAR_5->dev_cur_ordered_id,
   VAR_4->se_ordered_id);
 } else if (VAR_4->sam_task_attr == VAR_0) {
  VAR_5->dev_cur_ordered_id++;
  FUNC_1("Incremented dev_cur_ordered_id: %u for"
   " HEAD_OF_QUEUE: %u\n", VAR_5->dev_cur_ordered_id,
   VAR_4->se_ordered_id);
 } else if (VAR_4->sam_task_attr == VAR_1) {
  FUNC_0(&VAR_5->dev_ordered_sync);
  FUNC_2();

  VAR_5->dev_cur_ordered_id++;
  FUNC_1("Incremented dev_cur_ordered_id: %u for ORDERED:"
   " %u\n", VAR_5->dev_cur_ordered_id, VAR_4->se_ordered_id);
 }

 FUNC_3(VAR_5);
}
