
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; } ;
struct se_dev_entry {int deve_cmds; } ;
struct se_cmd {size_t orig_fe_lun; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct se_node_acl *VAR_0, struct se_cmd *VAR_1)
{
 struct se_dev_entry *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->device_list_lock, VAR_3);
 VAR_2 = VAR_0->device_list[VAR_1->orig_fe_lun];
 VAR_2->deve_cmds--;
 FUNC_1(&VAR_0->device_list_lock, VAR_3);
}
