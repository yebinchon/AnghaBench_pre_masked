
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int transport_state; int se_cmd_flags; TYPE_1__* se_tfo; int * t_task_cdb; } ;
struct TYPE_2__ {int (* queue_status ) (struct se_cmd*) ;int (* get_task_tag ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;

int FUNC_3(struct se_cmd *VAR_2, int VAR_3)
{
 if (!(VAR_2->transport_state & VAR_0))
  return 0;

 if (!VAR_3 || (VAR_2->se_cmd_flags & VAR_1))
  return 1;

 FUNC_0("Sending delayed SAM_STAT_TASK_ABORTED status for CDB: 0x%02x ITT: 0x%08x\n",
   VAR_2->t_task_cdb[0], VAR_2->se_tfo->get_task_tag(VAR_2));

 VAR_2->se_cmd_flags |= VAR_1;
 VAR_2->se_tfo->queue_status(VAR_2);

 return 1;
}
