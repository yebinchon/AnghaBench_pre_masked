
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int dummy; } ;
struct se_node_acl {struct se_dev_entry** device_list; } ;
struct se_lun_acl {size_t mapped_lun; struct se_node_acl* se_lun_nacl; } ;
struct se_lun {int unpacked_lun; } ;
struct se_device {int dev_reservation_flags; } ;
struct se_dev_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_portal_group*,struct se_lun*,int ,struct se_node_acl*,struct se_dev_entry*) ;

int FUNC_1(
 struct se_device *VAR_1,
 struct se_portal_group *VAR_2,
 struct se_lun *VAR_3,
 struct se_lun_acl *VAR_4)
{
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_dev_entry *VAR_6 = VAR_5->device_list[VAR_4->mapped_lun];

 if (VAR_1->dev_reservation_flags & VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_3->unpacked_lun, VAR_5, VAR_6);
}
