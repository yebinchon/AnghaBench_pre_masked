
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; } ;
struct se_lun_acl {size_t mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_dev_entry {int lun_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(
 struct se_lun_acl *VAR_1,
 char *VAR_2)
{
 struct se_node_acl *VAR_3 = VAR_1->se_lun_nacl;
 struct se_dev_entry *VAR_4;
 ssize_t VAR_5;

 FUNC_0(&VAR_3->device_list_lock);
 VAR_4 = VAR_3->device_list[VAR_1->mapped_lun];
 VAR_5 = FUNC_2(VAR_2, "%d\n",
   (VAR_4->lun_flags & VAR_0) ?
   1 : 0);
 FUNC_1(&VAR_3->device_list_lock);

 return VAR_5;
}
