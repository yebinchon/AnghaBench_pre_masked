
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {struct se_node_acl* se_node_acl; } ;
struct se_node_acl {struct se_dev_entry** device_list; } ;
struct se_dev_entry {int ua_count; } ;
struct se_cmd {size_t orig_fe_lun; int* t_task_cdb; struct se_session* se_sess; } ;
typedef int sense_reason_t ;





 int VAR_0 ;
 int FUNC_0 (int *) ;

sense_reason_t
FUNC_1(struct se_cmd *VAR_1)
{
 struct se_dev_entry *VAR_2;
 struct se_session *VAR_3 = VAR_1->se_sess;
 struct se_node_acl *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->se_node_acl;
 if (!VAR_4)
  return 0;

 VAR_2 = VAR_4->device_list[VAR_1->orig_fe_lun];
 if (!FUNC_0(&VAR_2->ua_count))
  return 0;
 switch (VAR_1->t_task_cdb[0]) {
 case 130:
 case 129:
 case 128:
  return 0;
 default:
  return VAR_0;
 }
}
