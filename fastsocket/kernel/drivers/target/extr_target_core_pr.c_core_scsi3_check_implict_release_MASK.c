
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_pr_registration {scalar_t__ pr_res_key; struct se_node_acl* pr_reg_nacl; scalar_t__ pr_reg_all_tg_pt; } ;
struct se_node_acl {int initiatorname; } ;
struct se_device {int dev_reservation_lock; struct t10_pr_registration* dev_pr_res_holder; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_node_acl*,struct t10_pr_registration*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(
 struct se_device *VAR_1,
 struct t10_pr_registration *VAR_2)
{
 struct se_node_acl *VAR_3 = VAR_2->pr_reg_nacl;
 struct t10_pr_registration *VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_1->dev_reservation_lock);
 VAR_4 = VAR_1->dev_pr_res_holder;
 if (!VAR_4) {
  FUNC_3(&VAR_1->dev_reservation_lock);
  return VAR_5;
 }
 if (VAR_4 == VAR_2) {
  FUNC_0(VAR_1, VAR_3, VAR_2, 0);
  VAR_5 = 1;






 } else if (VAR_2->pr_reg_all_tg_pt &&
    (!FUNC_4(VAR_4->pr_reg_nacl->initiatorname,
     VAR_2->pr_reg_nacl->initiatorname)) &&
    (VAR_4->pr_res_key == VAR_2->pr_res_key)) {
  FUNC_1("SPC-3 PR: Unable to perform ALL_TG_PT=1"
   " UNREGISTER while existing reservation with matching"
   " key 0x%016Lx is present from another SCSI Initiator"
   " Port\n", VAR_2->pr_res_key);
  VAR_5 = -VAR_0;
 }
 FUNC_3(&VAR_1->dev_reservation_lock);

 return VAR_5;
}
