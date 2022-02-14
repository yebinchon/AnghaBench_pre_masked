
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct target_core_fabric_ops {int dummy; } ;
struct se_session {int dummy; } ;
struct se_cmd {int data_direction; int sam_task_attr; unsigned char* sense_buffer; int state_active; int data_length; struct se_session* se_sess; struct target_core_fabric_ops* se_tfo; int transport_state; int t_state_lock; int task_stop_comp; int cmd_wait_comp; int t_transport_stop_comp; int transport_lun_stop_comp; int transport_lun_fe_stop_comp; int state_list; int se_cmd_list; int se_qf_node; int se_delayed_node; int se_lun_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(
 struct se_cmd *VAR_1,
 struct target_core_fabric_ops *VAR_2,
 struct se_session *VAR_3,
 u32 VAR_4,
 int VAR_5,
 int VAR_6,
 unsigned char *VAR_7)
{
 FUNC_0(&VAR_1->se_lun_node);
 FUNC_0(&VAR_1->se_delayed_node);
 FUNC_0(&VAR_1->se_qf_node);
 FUNC_0(&VAR_1->se_cmd_list);
 FUNC_0(&VAR_1->state_list);
 FUNC_1(&VAR_1->transport_lun_fe_stop_comp);
 FUNC_1(&VAR_1->transport_lun_stop_comp);
 FUNC_1(&VAR_1->t_transport_stop_comp);
 FUNC_1(&VAR_1->cmd_wait_comp);
 FUNC_1(&VAR_1->task_stop_comp);
 FUNC_2(&VAR_1->t_state_lock);
 VAR_1->transport_state = VAR_0;

 VAR_1->se_tfo = VAR_2;
 VAR_1->se_sess = VAR_3;
 VAR_1->data_length = VAR_4;
 VAR_1->data_direction = VAR_5;
 VAR_1->sam_task_attr = VAR_6;
 VAR_1->sense_buffer = VAR_7;

 VAR_1->state_active = 0;
}
