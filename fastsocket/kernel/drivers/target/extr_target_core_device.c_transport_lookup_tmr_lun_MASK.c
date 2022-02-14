
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct se_tmr_req {TYPE_3__* tmr_dev; int tmr_list; struct se_lun* tmr_lun; } ;
struct se_session {TYPE_1__* se_node_acl; } ;
struct se_lun {TYPE_3__* lun_se_dev; } ;
struct se_dev_entry {int lun_flags; int pr_res_key; struct se_lun* se_lun; } ;
struct se_cmd {size_t orig_fe_lun; TYPE_3__* se_dev; TYPE_2__* se_tfo; int pr_res_key; struct se_lun* se_lun; struct se_dev_entry* se_deve; struct se_tmr_req* se_tmr_req; struct se_session* se_sess; } ;
struct TYPE_6__ {int se_tmr_lock; int dev_tmr_list; } ;
struct TYPE_5__ {int (* get_fabric_name ) () ;} ;
struct TYPE_4__ {int device_list_lock; struct se_dev_entry** device_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;

int FUNC_5(struct se_cmd *VAR_3, u32 VAR_4)
{
 struct se_dev_entry *VAR_5;
 struct se_lun *VAR_6 = ((void*)0);
 struct se_session *VAR_7 = VAR_3->se_sess;
 struct se_tmr_req *VAR_8 = VAR_3->se_tmr_req;
 unsigned long VAR_9;

 if (VAR_4 >= VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_7->se_node_acl->device_list_lock, VAR_9);
 VAR_3->se_deve = VAR_7->se_node_acl->device_list[VAR_4];
 VAR_5 = VAR_3->se_deve;

 if (VAR_5->lun_flags & VAR_1) {
  VAR_8->tmr_lun = VAR_5->se_lun;
  VAR_3->se_lun = VAR_5->se_lun;
  VAR_6 = VAR_5->se_lun;
  VAR_3->pr_res_key = VAR_5->pr_res_key;
  VAR_3->orig_fe_lun = VAR_4;
 }
 FUNC_3(&VAR_7->se_node_acl->device_list_lock, VAR_9);

 if (!VAR_6) {
  FUNC_1("TARGET_CORE[%s]: Detected NON_EXISTENT_LUN"
   " Access for 0x%08x\n",
   VAR_3->se_tfo->get_fabric_name(),
   VAR_4);
  return -VAR_0;
 }


 VAR_3->se_dev = VAR_6->lun_se_dev;
 VAR_8->tmr_dev = VAR_6->lun_se_dev;

 FUNC_2(&VAR_8->tmr_dev->se_tmr_lock, VAR_9);
 FUNC_0(&VAR_8->tmr_list, &VAR_8->tmr_dev->dev_tmr_list);
 FUNC_3(&VAR_8->tmr_dev->se_tmr_lock, VAR_9);

 return 0;
}
