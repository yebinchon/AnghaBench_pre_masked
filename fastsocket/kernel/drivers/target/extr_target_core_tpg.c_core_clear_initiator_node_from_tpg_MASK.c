
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; } ;
struct se_lun {int dummy; } ;
struct se_dev_entry {int lun_flags; int mapped_lun; struct se_lun* se_lun; } ;
struct TYPE_2__ {int (* get_fabric_name ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct se_lun*,int *,int ,int ,struct se_node_acl*,struct se_portal_group*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(
 struct se_node_acl *VAR_3,
 struct se_portal_group *VAR_4)
{
 int VAR_5;
 struct se_dev_entry *VAR_6;
 struct se_lun *VAR_7;

 FUNC_2(&VAR_3->device_list_lock);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_3->device_list[VAR_5];

  if (!(VAR_6->lun_flags & VAR_0))
   continue;

  if (!VAR_6->se_lun) {
   FUNC_1("%s device entries device pointer is"
    " NULL, but Initiator has access.\n",
    VAR_4->se_tpg_tfo->get_fabric_name());
   continue;
  }

  VAR_7 = VAR_6->se_lun;
  FUNC_3(&VAR_3->device_list_lock);
  FUNC_0(VAR_7, ((void*)0), VAR_6->mapped_lun,
   VAR_1, VAR_3, VAR_4);

  FUNC_2(&VAR_3->device_list_lock);
 }
 FUNC_3(&VAR_3->device_list_lock);
}
