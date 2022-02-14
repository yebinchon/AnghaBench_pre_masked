
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct se_portal_group {int dummy; } ;
struct se_port {int sep_alua_lock; } ;
struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; } ;
struct se_lun_acl {int dummy; } ;
struct se_lun {int lun_se_dev; struct se_port* lun_sep; } ;
struct se_dev_entry {int attach_count; scalar_t__ creation_time; scalar_t__ lun_flags; int * se_lun_acl; int * se_lun; int pr_ref_count; int alua_port_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct se_node_acl*) ;
 int FUNC_2 (struct se_dev_entry*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(
 struct se_lun *VAR_0,
 struct se_lun_acl *VAR_1,
 u32 VAR_2,
 u32 VAR_3,
 struct se_node_acl *VAR_4,
 struct se_portal_group *VAR_5)
{
 struct se_port *VAR_6 = VAR_0->lun_sep;
 struct se_dev_entry *VAR_7 = VAR_4->device_list[VAR_2];
 FUNC_5(&VAR_6->sep_alua_lock);
 FUNC_4(&VAR_7->alua_port_list);
 FUNC_7(&VAR_6->sep_alua_lock);




 while (FUNC_0(&VAR_7->pr_ref_count) != 0)
  FUNC_3();

 FUNC_6(&VAR_4->device_list_lock);



 FUNC_2(VAR_7);
 VAR_7->se_lun = ((void*)0);
 VAR_7->se_lun_acl = ((void*)0);
 VAR_7->lun_flags = 0;
 VAR_7->creation_time = 0;
 VAR_7->attach_count--;
 FUNC_8(&VAR_4->device_list_lock);

 FUNC_1(VAR_0->lun_se_dev, VAR_4);
 return 0;
}
