
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_portal_group {int tpg_lun_lock; TYPE_1__* se_tpg_tfo; struct se_lun** tpg_lun_list; } ;
struct se_lun {scalar_t__ lun_status; } ;
struct TYPE_2__ {int (* tpg_get_tag ) (struct se_portal_group*) ;int (* get_fabric_name ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_lun* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct se_portal_group*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct se_portal_group*) ;

struct se_lun *FUNC_8(
 struct se_portal_group *VAR_4,
 u32 VAR_5)
{
 struct se_lun *VAR_6;

 if (VAR_5 > (VAR_3-1)) {
  FUNC_1("%s LUN: %u exceeds TRANSPORT_MAX_LUNS_PER_TPG"
   "-1: %u for Target Portal Group: %u\n",
   VAR_4->se_tpg_tfo->get_fabric_name(), VAR_5,
   VAR_3-1,
   VAR_4->se_tpg_tfo->tpg_get_tag(VAR_4));
  return FUNC_0(-VAR_1);
 }

 FUNC_2(&VAR_4->tpg_lun_lock);
 VAR_6 = VAR_4->tpg_lun_list[VAR_5];
 if (VAR_6->lun_status != VAR_2) {
  FUNC_1("%s Logical Unit Number: %u is not active on"
   " Target Portal Group: %u, ignoring request.\n",
   VAR_4->se_tpg_tfo->get_fabric_name(), VAR_5,
   VAR_4->se_tpg_tfo->tpg_get_tag(VAR_4));
  FUNC_3(&VAR_4->tpg_lun_lock);
  return FUNC_0(-VAR_0);
 }
 FUNC_3(&VAR_4->tpg_lun_lock);

 return VAR_6;
}
