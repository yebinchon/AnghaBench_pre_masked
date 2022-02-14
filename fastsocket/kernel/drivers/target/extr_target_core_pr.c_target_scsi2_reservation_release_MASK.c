
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_session {scalar_t__ sess_bin_isid; TYPE_4__* se_node_acl; struct se_portal_group* se_tpg; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_device {scalar_t__ dev_res_bin_isid; int dev_reservation_flags; int dev_reservation_lock; TYPE_4__* dev_reserved_node_acl; } ;
struct se_cmd {TYPE_3__* se_deve; TYPE_2__* se_lun; struct se_session* se_sess; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_8__ {int initiatorname; } ;
struct TYPE_7__ {int mapped_lun; } ;
struct TYPE_6__ {int unpacked_lun; } ;
struct TYPE_5__ {int (* get_fabric_name ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*,int ) ;

sense_reason_t
FUNC_6(struct se_cmd *VAR_4)
{
 struct se_device *VAR_5 = VAR_4->se_dev;
 struct se_session *VAR_6 = VAR_4->se_sess;
 struct se_portal_group *VAR_7;
 int VAR_8;

 if (!VAR_6 || !VAR_6->se_tpg)
  goto out;
 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8 == 1)
  goto out;
 if (VAR_8 < 0)
  return VAR_3;

 FUNC_1(&VAR_5->dev_reservation_lock);
 if (!VAR_5->dev_reserved_node_acl || !VAR_6)
  goto out_unlock;

 if (VAR_5->dev_reserved_node_acl != VAR_6->se_node_acl)
  goto out_unlock;

 if (VAR_5->dev_res_bin_isid != VAR_6->sess_bin_isid)
  goto out_unlock;

 VAR_5->dev_reserved_node_acl = ((void*)0);
 VAR_5->dev_reservation_flags &= ~VAR_0;
 if (VAR_5->dev_reservation_flags & VAR_1) {
  VAR_5->dev_res_bin_isid = 0;
  VAR_5->dev_reservation_flags &= ~VAR_1;
 }
 VAR_7 = VAR_6->se_tpg;
 FUNC_0("SCSI-2 Released reservation for %s LUN: %u ->"
  " MAPPED LUN: %u for %s\n", VAR_7->se_tpg_tfo->get_fabric_name(),
  VAR_4->se_lun->unpacked_lun, VAR_4->se_deve->mapped_lun,
  VAR_6->se_node_acl->initiatorname);

out_unlock:
 FUNC_2(&VAR_5->dev_reservation_lock);
out:
 FUNC_5(VAR_4, VAR_2);
 return 0;
}
