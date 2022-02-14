
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct t10_pr_registration {int pr_reg_all_tg_pt; int pr_reg_aptpl; int isid_present_at_reg; int pr_reg_isid; int pr_reg_bin_isid; TYPE_2__* pr_reg_tg_pt_lun; int pr_res_key; int pr_aptpl_target_lun; int pr_res_mapped_lun; struct se_dev_entry* pr_reg_deve; struct se_node_acl* pr_reg_nacl; int pr_res_holders; int pr_reg_atp_mem_list; int pr_reg_atp_list; int pr_reg_aptpl_list; int pr_reg_abort_list; int pr_reg_list; int pr_aptpl_buf; } ;
struct se_node_acl {int dummy; } ;
struct TYPE_3__ {int pr_aptpl_buf_len; } ;
struct se_device {TYPE_1__ t10_pr; } ;
struct se_dev_entry {TYPE_2__* se_lun; int mapped_lun; } ;
struct TYPE_4__ {int unpacked_lun; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int ,struct t10_pr_registration*) ;
 struct t10_pr_registration* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,char*,unsigned char*) ;
 int VAR_2 ;

__attribute__((used)) static struct t10_pr_registration *FUNC_8(
 struct se_device *VAR_3,
 struct se_node_acl *VAR_4,
 struct se_dev_entry *VAR_5,
 unsigned char *VAR_6,
 u64 VAR_7,
 int VAR_8,
 int VAR_9)
{
 struct t10_pr_registration *VAR_10;

 VAR_10 = FUNC_4(VAR_2, VAR_0);
 if (!VAR_10) {
  FUNC_6("Unable to allocate struct t10_pr_registration\n");
  return ((void*)0);
 }

 VAR_10->pr_aptpl_buf = FUNC_5(VAR_3->t10_pr.pr_aptpl_buf_len,
     VAR_0);
 if (!VAR_10->pr_aptpl_buf) {
  FUNC_6("Unable to allocate pr_reg->pr_aptpl_buf\n");
  FUNC_3(VAR_2, VAR_10);
  return ((void*)0);
 }

 FUNC_0(&VAR_10->pr_reg_list);
 FUNC_0(&VAR_10->pr_reg_abort_list);
 FUNC_0(&VAR_10->pr_reg_aptpl_list);
 FUNC_0(&VAR_10->pr_reg_atp_list);
 FUNC_0(&VAR_10->pr_reg_atp_mem_list);
 FUNC_1(&VAR_10->pr_res_holders, 0);
 VAR_10->pr_reg_nacl = VAR_4;
 VAR_10->pr_reg_deve = VAR_5;
 VAR_10->pr_res_mapped_lun = VAR_5->mapped_lun;
 VAR_10->pr_aptpl_target_lun = VAR_5->se_lun->unpacked_lun;
 VAR_10->pr_res_key = VAR_7;
 VAR_10->pr_reg_all_tg_pt = VAR_8;
 VAR_10->pr_reg_aptpl = VAR_9;
 VAR_10->pr_reg_tg_pt_lun = VAR_5->se_lun;




 if (VAR_6 != ((void*)0)) {
  VAR_10->pr_reg_bin_isid = FUNC_2(VAR_6);
  FUNC_7(VAR_10->pr_reg_isid, VAR_1, "%s", VAR_6);
  VAR_10->isid_present_at_reg = 1;
 }

 return VAR_10;
}
