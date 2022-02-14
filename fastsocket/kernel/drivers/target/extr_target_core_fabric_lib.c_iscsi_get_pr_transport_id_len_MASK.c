
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pr_registration {scalar_t__ isid_present_at_reg; } ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {int nacl_sess_lock; int initiatorname; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

u32 FUNC_3(
 struct se_portal_group *VAR_0,
 struct se_node_acl *VAR_1,
 struct t10_pr_registration *VAR_2,
 int *VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;

 FUNC_0(&VAR_1->nacl_sess_lock);
 VAR_4 = FUNC_2(VAR_1->initiatorname);



 VAR_4++;







 if (VAR_2->isid_present_at_reg) {
  VAR_4 += 5;
  VAR_4 += 7;
  *VAR_3 = 1;
 } else
  *VAR_3 = 0;
 FUNC_1(&VAR_1->nacl_sess_lock);





 VAR_5 = ((-VAR_4) & 3);
 if (VAR_5 != 0)
  VAR_4 += VAR_5;




 VAR_4 += 4;

 return VAR_4;
}
