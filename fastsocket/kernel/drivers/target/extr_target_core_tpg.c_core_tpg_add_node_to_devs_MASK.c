
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct se_portal_group {int tpg_lun_lock; TYPE_2__* se_tpg_tfo; struct se_lun** tpg_lun_list; } ;
struct se_node_acl {int dummy; } ;
struct se_lun {scalar_t__ lun_status; int unpacked_lun; struct se_device* lun_se_dev; } ;
struct se_device {TYPE_1__* transport; } ;
struct TYPE_4__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int (* get_fabric_name ) () ;int (* tpg_check_demo_mode_write_protect ) (struct se_portal_group*) ;} ;
struct TYPE_3__ {scalar_t__ (* get_device_type ) (struct se_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct se_lun*,int *,int ,scalar_t__,struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_1 (char*,int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct se_portal_group*) ;
 scalar_t__ FUNC_5 (struct se_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct se_portal_group*) ;

void FUNC_8(
 struct se_node_acl *VAR_5,
 struct se_portal_group *VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8 = 0;
 struct se_lun *VAR_9;
 struct se_device *VAR_10;

 FUNC_2(&VAR_6->tpg_lun_lock);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_9 = VAR_6->tpg_lun_list[VAR_7];
  if (VAR_9->lun_status != VAR_2)
   continue;

  FUNC_3(&VAR_6->tpg_lun_lock);

  VAR_10 = VAR_9->lun_se_dev;




  if (!VAR_6->se_tpg_tfo->tpg_check_demo_mode_write_protect(VAR_6)) {
   VAR_8 = VAR_1;
  } else {




   if (VAR_10->transport->get_device_type(VAR_10) == VAR_4)
    VAR_8 = VAR_0;
   else
    VAR_8 = VAR_1;
  }

  FUNC_1("TARGET_CORE[%s]->TPG[%u]_LUN[%u] - Adding %s"
   " access for LUN in Demo Mode\n",
   VAR_6->se_tpg_tfo->get_fabric_name(),
   VAR_6->se_tpg_tfo->tpg_get_tag(VAR_6), VAR_9->unpacked_lun,
   (VAR_8 == VAR_1) ?
   "READ-WRITE" : "READ-ONLY");

  FUNC_0(VAR_9, ((void*)0), VAR_9->unpacked_lun,
    VAR_8, VAR_5, VAR_6);
  FUNC_2(&VAR_6->tpg_lun_lock);
 }
 FUNC_3(&VAR_6->tpg_lun_lock);
}
