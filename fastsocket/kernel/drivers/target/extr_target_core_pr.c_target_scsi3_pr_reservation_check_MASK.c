
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_session {scalar_t__ se_node_acl; scalar_t__ sess_bin_isid; } ;
struct se_device {TYPE_1__* dev_pr_res_holder; } ;
struct se_cmd {int pr_res_key; struct se_session* se_sess; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int pr_res_type; scalar_t__ pr_reg_nacl; scalar_t__ pr_reg_bin_isid; scalar_t__ isid_present_at_reg; int pr_res_key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct se_cmd*,int) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_1)
{
 struct se_device *VAR_2 = VAR_1->se_dev;
 struct se_session *VAR_3 = VAR_1->se_sess;
 u32 VAR_4;

 if (!VAR_2->dev_pr_res_holder)
  return 0;

 VAR_4 = VAR_2->dev_pr_res_holder->pr_res_type;
 VAR_1->pr_res_key = VAR_2->dev_pr_res_holder->pr_res_key;
 if (VAR_2->dev_pr_res_holder->pr_reg_nacl != VAR_3->se_node_acl)
  goto check_nonholder;

 if (VAR_2->dev_pr_res_holder->isid_present_at_reg) {
  if (VAR_2->dev_pr_res_holder->pr_reg_bin_isid !=
      VAR_3->sess_bin_isid) {
   VAR_4 |= 0x80000000;
   goto check_nonholder;
  }
 }

 return 0;

check_nonholder:
 if (FUNC_0(VAR_1, VAR_4))
  return VAR_0;
 return 0;
}
