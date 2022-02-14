
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct target_core_fabric_ops {char* (* tpg_get_wwn ) (struct se_portal_group*) ;int (* tpg_get_tag ) (struct se_portal_group*) ;int (* get_fabric_name ) () ;} ;
struct se_wwn {int dummy; } ;
struct se_portal_group {int se_tpg_type; int se_tpg_node; struct se_lun** tpg_lun_list; int tpg_lun_lock; int session_lock; int acl_node_lock; int tpg_sess_list; int acl_node_list; int tpg_pr_ref_count; struct se_wwn* se_tpg_wwn; struct target_core_fabric_ops* se_tpg_tfo; void* se_tpg_fabric_ptr; } ;
struct se_lun {size_t unpacked_lun; int lun_sep_lock; int lun_cmd_lock; int lun_acl_lock; int lun_cmd_list; int lun_acl_list; int lun_shutdown_comp; int lun_acl_count; int lun_status; int lun_link_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct se_lun**,size_t) ;
 struct se_lun** FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct se_portal_group*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int ,char*,char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 char* FUNC_13 (struct se_portal_group*) ;
 char* FUNC_14 (struct se_portal_group*) ;
 int FUNC_15 (struct se_portal_group*) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_16(
 struct target_core_fabric_ops *VAR_8,
 struct se_wwn *VAR_9,
 struct se_portal_group *VAR_10,
 void *VAR_11,
 int VAR_12)
{
 struct se_lun *VAR_13;
 u32 VAR_14;

 VAR_10->tpg_lun_list = FUNC_2(VAR_4,
   sizeof(struct se_lun), VAR_1);
 if (!VAR_10->tpg_lun_list) {
  FUNC_8("Unable to allocate struct se_portal_group->"
    "tpg_lun_list\n");
  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_13 = VAR_10->tpg_lun_list[VAR_14];
  VAR_13->unpacked_lun = VAR_14;
  VAR_13->lun_link_magic = VAR_2;
  VAR_13->lun_status = VAR_3;
  FUNC_3(&VAR_13->lun_acl_count, 0);
  FUNC_5(&VAR_13->lun_shutdown_comp);
  FUNC_0(&VAR_13->lun_acl_list);
  FUNC_0(&VAR_13->lun_cmd_list);
  FUNC_10(&VAR_13->lun_acl_lock);
  FUNC_10(&VAR_13->lun_cmd_lock);
  FUNC_10(&VAR_13->lun_sep_lock);
 }

 VAR_10->se_tpg_type = VAR_12;
 VAR_10->se_tpg_fabric_ptr = VAR_11;
 VAR_10->se_tpg_tfo = VAR_8;
 VAR_10->se_tpg_wwn = VAR_9;
 FUNC_3(&VAR_10->tpg_pr_ref_count, 0);
 FUNC_0(&VAR_10->acl_node_list);
 FUNC_0(&VAR_10->se_tpg_node);
 FUNC_0(&VAR_10->tpg_sess_list);
 FUNC_10(&VAR_10->acl_node_lock);
 FUNC_10(&VAR_10->session_lock);
 FUNC_10(&VAR_10->tpg_lun_lock);

 if (VAR_10->se_tpg_type == VAR_5) {
  if (FUNC_4(VAR_10) < 0) {
   FUNC_1(VAR_10->tpg_lun_list,
       VAR_4);
   return -VAR_0;
  }
 }

 FUNC_9(&VAR_7);
 FUNC_6(&VAR_10->se_tpg_node, &VAR_6);
 FUNC_11(&VAR_7);

 FUNC_7("TARGET_CORE[%s]: Allocated %s struct se_portal_group for"
  " endpoint: %s, Portal Tag: %u\n", VAR_8->get_fabric_name(),
  (VAR_10->se_tpg_type == VAR_5) ?
  "Normal" : "Discovery", (VAR_8->tpg_get_wwn(VAR_10) == ((void*)0)) ?
  "None" : VAR_8->tpg_get_wwn(VAR_10), VAR_8->tpg_get_tag(VAR_10));

 return 0;
}
