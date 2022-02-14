
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; } ;
struct se_dev_entry {size_t lun_flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(
 u32 VAR_2,
 u32 VAR_3,
 struct se_node_acl *VAR_4)
{
 struct se_dev_entry *VAR_5;

 FUNC_0(&VAR_4->device_list_lock);
 VAR_5 = VAR_4->device_list[VAR_2];
 if (VAR_3 & VAR_1) {
  VAR_5->lun_flags &= ~VAR_0;
  VAR_5->lun_flags |= VAR_1;
 } else {
  VAR_5->lun_flags &= ~VAR_1;
  VAR_5->lun_flags |= VAR_0;
 }
 FUNC_1(&VAR_4->device_list_lock);
}
