
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {struct se_dev_entry** device_list; int device_list_lock; } ;
struct se_lun {int dummy; } ;
struct se_dev_entry {int lun_flags; int mapped_lun; struct se_lun* se_lun; } ;
struct TYPE_2__ {int (* get_fabric_name ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct se_dev_entry**,size_t) ;
 int FUNC_1 (struct se_lun*,int *,int ,int ,struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

int FUNC_6(
 struct se_node_acl *VAR_3,
 struct se_portal_group *VAR_4)
{
 struct se_dev_entry *VAR_5;
 struct se_lun *VAR_6;
 u32 VAR_7;

 if (!VAR_3->device_list)
  return 0;

 FUNC_3(&VAR_3->device_list_lock);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5 = VAR_3->device_list[VAR_7];

  if (!(VAR_5->lun_flags & VAR_0))
   continue;

  if (!VAR_5->se_lun) {
   FUNC_2("%s device entries device pointer is"
    " NULL, but Initiator has access.\n",
    VAR_4->se_tpg_tfo->get_fabric_name());
   continue;
  }
  VAR_6 = VAR_5->se_lun;

  FUNC_4(&VAR_3->device_list_lock);
  FUNC_1(VAR_6, ((void*)0), VAR_5->mapped_lun,
   VAR_1, VAR_3, VAR_4);
  FUNC_3(&VAR_3->device_list_lock);
 }
 FUNC_4(&VAR_3->device_list_lock);

 FUNC_0(VAR_3->device_list, VAR_2);
 VAR_3->device_list = ((void*)0);

 return 0;
}
