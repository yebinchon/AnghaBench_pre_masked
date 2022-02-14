
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct se_tmr_req {TYPE_3__* task_cmd; } ;
struct se_portal_group {TYPE_4__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; } ;
struct TYPE_6__ {int emulate_tas; } ;
struct se_device {int dev_reservation_flags; TYPE_5__* transport; int stats_lock; int num_resets; int dev_reservation_lock; int * dev_reserved_node_acl; TYPE_1__ dev_attrib; } ;
struct se_cmd {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {char* (* get_fabric_name ) () ;} ;
struct TYPE_8__ {TYPE_2__* se_sess; } ;
struct TYPE_7__ {struct se_portal_group* se_tpg; struct se_node_acl* se_node_acl; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_cmd*,struct se_node_acl*,int,struct list_head*) ;
 int FUNC_1 (struct se_device*,struct se_tmr_req*,struct list_head*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 () ;

int FUNC_8(
        struct se_device *VAR_1,
        struct se_tmr_req *VAR_2,
        struct list_head *VAR_3,
        struct se_cmd *VAR_4)
{
 struct se_node_acl *VAR_5 = ((void*)0);
 struct se_portal_group *VAR_6 = ((void*)0);
 int VAR_7;
 VAR_7 = VAR_1->dev_attrib.emulate_tas;




 if (VAR_2 && VAR_2->task_cmd && VAR_2->task_cmd->se_sess) {
  VAR_5 = VAR_2->task_cmd->se_sess->se_node_acl;
  VAR_6 = VAR_2->task_cmd->se_sess->se_tpg;
  if (VAR_5 && VAR_6) {
   FUNC_2("LUN_RESET: TMR caller fabric: %s"
    " initiator port %s\n",
    VAR_6->se_tpg_tfo->get_fabric_name(),
    VAR_5->initiatorname);
  }
 }
 FUNC_2("LUN_RESET: %s starting for [%s], tas: %d\n",
  (VAR_3) ? "Preempt" : "TMR",
  VAR_1->transport->name, VAR_7);

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1, VAR_4, VAR_5, VAR_7,
    VAR_3);





 if (!VAR_3 &&
      (VAR_1->dev_reservation_flags & VAR_0)) {
  FUNC_3(&VAR_1->dev_reservation_lock);
  VAR_1->dev_reserved_node_acl = ((void*)0);
  VAR_1->dev_reservation_flags &= ~VAR_0;
  FUNC_5(&VAR_1->dev_reservation_lock);
  FUNC_2("LUN_RESET: SCSI-2 Released reservation\n");
 }

 FUNC_4(&VAR_1->stats_lock);
 VAR_1->num_resets++;
 FUNC_6(&VAR_1->stats_lock);

 FUNC_2("LUN_RESET: %s for [%s] Complete\n",
   (VAR_3) ? "Preempt" : "TMR",
   VAR_1->transport->name);
 return 0;
}
