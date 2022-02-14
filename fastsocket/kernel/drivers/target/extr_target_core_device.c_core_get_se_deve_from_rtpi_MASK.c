
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_port {scalar_t__ sep_rtpi; } ;
struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; struct se_portal_group* se_tpg; } ;
struct se_lun {struct se_port* lun_sep; } ;
struct se_dev_entry {int lun_flags; int pr_ref_count; struct se_lun* se_lun; } ;
struct TYPE_2__ {int (* get_fabric_name ) () ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct se_dev_entry *FUNC_7(
 struct se_node_acl *VAR_2,
 u16 VAR_3)
{
 struct se_dev_entry *VAR_4;
 struct se_lun *VAR_5;
 struct se_port *VAR_6;
 struct se_portal_group *VAR_7 = VAR_2->se_tpg;
 u32 VAR_8;

 FUNC_3(&VAR_2->device_list_lock);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_4 = VAR_2->device_list[VAR_8];

  if (!(VAR_4->lun_flags & VAR_0))
   continue;

  VAR_5 = VAR_4->se_lun;
  if (!VAR_5) {
   FUNC_1("%s device entries device pointer is"
    " NULL, but Initiator has access.\n",
    VAR_7->se_tpg_tfo->get_fabric_name());
   continue;
  }
  VAR_6 = VAR_5->lun_sep;
  if (!VAR_6) {
   FUNC_1("%s device entries device pointer is"
    " NULL, but Initiator has access.\n",
    VAR_7->se_tpg_tfo->get_fabric_name());
   continue;
  }
  if (VAR_6->sep_rtpi != VAR_3)
   continue;

  FUNC_0(&VAR_4->pr_ref_count);
  FUNC_2();
  FUNC_4(&VAR_2->device_list_lock);

  return VAR_4;
 }
 FUNC_4(&VAR_2->device_list_lock);

 return ((void*)0);
}
