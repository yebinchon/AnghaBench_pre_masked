
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct se_session {TYPE_3__* se_tpg; TYPE_1__* se_node_acl; } ;
struct se_lun {int lun_cmd_lock; int lun_cmd_list; struct se_device* lun_se_dev; } ;
struct se_device {int stats_lock; int read_bytes; int write_bytes; int num_cmds; } ;
struct se_dev_entry {int lun_flags; int pr_res_key; struct se_lun* se_lun; int deve_cmds; int read_bytes; int write_bytes; int total_bytes; int total_cmds; } ;
struct se_cmd {scalar_t__ data_direction; size_t orig_fe_lun; int se_lun_node; scalar_t__ data_length; struct se_device* se_dev; int se_cmd_flags; struct se_lun* se_lun; TYPE_2__* se_tfo; int pr_res_key; struct se_dev_entry* se_deve; struct se_session* se_sess; } ;
typedef int sense_reason_t ;
struct TYPE_6__ {struct se_lun tpg_virt_lun0; } ;
struct TYPE_5__ {int (* get_fabric_name ) () ;} ;
struct TYPE_4__ {int device_list_lock; struct se_dev_entry** device_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

sense_reason_t
FUNC_6(struct se_cmd *VAR_9, u32 VAR_10)
{
 struct se_lun *VAR_11 = ((void*)0);
 struct se_session *VAR_12 = VAR_9->se_sess;
 struct se_device *VAR_13;
 unsigned long VAR_14;

 if (VAR_10 >= VAR_8)
  return VAR_4;

 FUNC_2(&VAR_12->se_node_acl->device_list_lock, VAR_14);
 VAR_9->se_deve = VAR_12->se_node_acl->device_list[VAR_10];
 if (VAR_9->se_deve->lun_flags & VAR_6) {
  struct se_dev_entry *VAR_15 = VAR_9->se_deve;

  VAR_15->total_cmds++;
  VAR_15->total_bytes += VAR_9->data_length;

  if ((VAR_9->data_direction == VAR_2) &&
      (VAR_15->lun_flags & VAR_7)) {
   FUNC_1("TARGET_CORE[%s]: Detected WRITE_PROTECTED LUN"
    " Access for 0x%08x\n",
    VAR_9->se_tfo->get_fabric_name(),
    VAR_10);
   FUNC_3(&VAR_12->se_node_acl->device_list_lock, VAR_14);
   return VAR_5;
  }

  if (VAR_9->data_direction == VAR_2)
   VAR_15->write_bytes += VAR_9->data_length;
  else if (VAR_9->data_direction == VAR_0)
   VAR_15->read_bytes += VAR_9->data_length;

  VAR_15->deve_cmds++;

  VAR_11 = VAR_15->se_lun;
  VAR_9->se_lun = VAR_15->se_lun;
  VAR_9->pr_res_key = VAR_15->pr_res_key;
  VAR_9->orig_fe_lun = VAR_10;
  VAR_9->se_cmd_flags |= VAR_3;
 }
 FUNC_3(&VAR_12->se_node_acl->device_list_lock, VAR_14);

 if (!VAR_11) {





  if (VAR_10 != 0) {
   FUNC_1("TARGET_CORE[%s]: Detected NON_EXISTENT_LUN"
    " Access for 0x%08x\n",
    VAR_9->se_tfo->get_fabric_name(),
    VAR_10);
   return VAR_4;
  }



  if ((VAR_9->data_direction != VAR_0) &&
      (VAR_9->data_direction != VAR_1))
   return VAR_5;

  VAR_11 = &VAR_12->se_tpg->tpg_virt_lun0;
  VAR_9->se_lun = &VAR_12->se_tpg->tpg_virt_lun0;
  VAR_9->orig_fe_lun = 0;
  VAR_9->se_cmd_flags |= VAR_3;
 }


 VAR_9->se_dev = VAR_11->lun_se_dev;


 VAR_13 = VAR_11->lun_se_dev;
 FUNC_2(&VAR_13->stats_lock, VAR_14);
 VAR_13->num_cmds++;
 if (VAR_9->data_direction == VAR_2)
  VAR_13->write_bytes += VAR_9->data_length;
 else if (VAR_9->data_direction == VAR_0)
  VAR_13->read_bytes += VAR_9->data_length;
 FUNC_3(&VAR_13->stats_lock, VAR_14);

 FUNC_2(&VAR_11->lun_cmd_lock, VAR_14);
 FUNC_0(&VAR_9->se_lun_node, &VAR_11->lun_cmd_list);
 FUNC_3(&VAR_11->lun_cmd_lock, VAR_14);

 return 0;
}
