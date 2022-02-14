
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; int transport_state; int t_state_lock; TYPE_1__* se_tfo; int t_transport_stop_comp; int t_state; int transport_lun_fe_stop_comp; int transport_lun_stop_comp; } ;
struct TYPE_2__ {int (* get_task_tag ) (struct se_cmd*) ;int (* get_cmd_state ) (struct se_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct se_cmd*,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 int FUNC_8 (struct se_cmd*) ;
 int FUNC_9 (struct se_cmd*) ;
 int FUNC_10 (int *) ;

bool FUNC_11(struct se_cmd *VAR_6)
{
 unsigned long VAR_7;

 FUNC_2(&VAR_6->t_state_lock, VAR_7);
 if (!(VAR_6->se_cmd_flags & VAR_4) &&
     !(VAR_6->se_cmd_flags & VAR_3)) {
  FUNC_3(&VAR_6->t_state_lock, VAR_7);
  return 0;
 }

 if (!(VAR_6->se_cmd_flags & VAR_5) &&
     !(VAR_6->se_cmd_flags & VAR_3)) {
  FUNC_3(&VAR_6->t_state_lock, VAR_7);
  return 0;
 }







 if (VAR_6->transport_state & VAR_1) {
  FUNC_1("wait_for_tasks: Stopping"
   " wait_for_completion(&cmd->t_tasktransport_lun_fe"
   "_stop_comp); for ITT: 0x%08x\n",
   VAR_6->se_tfo->get_task_tag(VAR_6));







  FUNC_3(&VAR_6->t_state_lock, VAR_7);
  FUNC_0(&VAR_6->transport_lun_stop_comp);
  FUNC_10(&VAR_6->transport_lun_fe_stop_comp);
  FUNC_2(&VAR_6->t_state_lock, VAR_7);

  FUNC_9(VAR_6);





  FUNC_1("wait_for_tasks: Stopped"
   " wait_for_completion(&cmd->t_tasktransport_lun_fe_"
   "stop_comp); for ITT: 0x%08x\n",
   VAR_6->se_tfo->get_task_tag(VAR_6));

  VAR_6->transport_state &= ~VAR_1;
 }

 if (!(VAR_6->transport_state & VAR_0)) {
  FUNC_3(&VAR_6->t_state_lock, VAR_7);
  return 0;
 }

 VAR_6->transport_state |= VAR_2;

 FUNC_1("wait_for_tasks: Stopping %p ITT: 0x%08x"
  " i_state: %d, t_state: %d, CMD_T_STOP\n",
  VAR_6, VAR_6->se_tfo->get_task_tag(VAR_6),
  VAR_6->se_tfo->get_cmd_state(VAR_6), VAR_6->t_state);

 FUNC_3(&VAR_6->t_state_lock, VAR_7);

 FUNC_10(&VAR_6->t_transport_stop_comp);

 FUNC_2(&VAR_6->t_state_lock, VAR_7);
 VAR_6->transport_state &= ~(VAR_0 | VAR_2);

 FUNC_1("wait_for_tasks: Stopped wait_for_completion("
  "&cmd->t_transport_stop_comp) for ITT: 0x%08x\n",
  VAR_6->se_tfo->get_task_tag(VAR_6));

 FUNC_3(&VAR_6->t_state_lock, VAR_7);

 return 1;
}
