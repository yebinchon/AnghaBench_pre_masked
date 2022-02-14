
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct se_portal_group {int dummy; } ;
struct se_port {int sep_alua_lock; int sep_alua_list; } ;
struct se_node_acl {int device_list_lock; struct se_dev_entry** device_list; } ;
struct se_lun_acl {int dummy; } ;
struct se_lun {struct se_port* lun_sep; } ;
struct se_dev_entry {int lun_flags; size_t mapped_lun; int alua_port_list; int attach_count; int creation_time; struct se_lun_acl* se_lun_acl; struct se_lun* se_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(
 struct se_lun *VAR_4,
 struct se_lun_acl *VAR_5,
 u32 VAR_6,
 u32 VAR_7,
 struct se_node_acl *VAR_8,
 struct se_portal_group *VAR_9)
{
 struct se_port *VAR_10 = VAR_4->lun_sep;
 struct se_dev_entry *VAR_11;

 FUNC_4(&VAR_8->device_list_lock);

 VAR_11 = VAR_8->device_list[VAR_6];






 if (VAR_11->lun_flags & VAR_1) {
  if (VAR_11->se_lun_acl != ((void*)0)) {
   FUNC_2("struct se_dev_entry->se_lun_acl"
          " already set for demo mode -> explict"
          " LUN ACL transition\n");
   FUNC_6(&VAR_8->device_list_lock);
   return -VAR_0;
  }
  if (VAR_11->se_lun != VAR_4) {
   FUNC_2("struct se_dev_entry->se_lun does"
          " match passed struct se_lun for demo mode"
          " -> explict LUN ACL transition\n");
   FUNC_6(&VAR_8->device_list_lock);
   return -VAR_0;
  }
  VAR_11->se_lun_acl = VAR_5;

  if (VAR_7 & VAR_3) {
   VAR_11->lun_flags &= ~VAR_2;
   VAR_11->lun_flags |= VAR_3;
  } else {
   VAR_11->lun_flags &= ~VAR_3;
   VAR_11->lun_flags |= VAR_2;
  }

  FUNC_6(&VAR_8->device_list_lock);
  return 0;
 }

 VAR_11->se_lun = VAR_4;
 VAR_11->se_lun_acl = VAR_5;
 VAR_11->mapped_lun = VAR_6;
 VAR_11->lun_flags |= VAR_1;

 if (VAR_7 & VAR_3) {
  VAR_11->lun_flags &= ~VAR_2;
  VAR_11->lun_flags |= VAR_3;
 } else {
  VAR_11->lun_flags &= ~VAR_3;
  VAR_11->lun_flags |= VAR_2;
 }

 VAR_11->creation_time = FUNC_0();
 VAR_11->attach_count++;
 FUNC_6(&VAR_8->device_list_lock);

 FUNC_3(&VAR_10->sep_alua_lock);
 FUNC_1(&VAR_11->alua_port_list, &VAR_10->sep_alua_list);
 FUNC_5(&VAR_10->sep_alua_lock);

 return 0;
}
