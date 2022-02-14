
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_rcom {int rc_result; scalar_t__ rc_id; } ;
struct dlm_ls {int ls_wait_general; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct dlm_ls*,char*,unsigned long long) ;
 int FUNC_2 (struct dlm_rsb*) ;
 scalar_t__ FUNC_3 (struct dlm_ls*) ;
 struct dlm_rsb* FUNC_4 (struct dlm_ls*,scalar_t__) ;
 int FUNC_5 (struct dlm_rsb*,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dlm_ls *VAR_0, struct dlm_rcom *VAR_1)
{
 struct dlm_rsb *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0, VAR_1->rc_id);
 if (!VAR_2) {
  FUNC_1(VAR_0, "dlm_recover_master_reply no id %llx",
     (unsigned long long)VAR_1->rc_id);
  goto out;
 }

 VAR_3 = VAR_1->rc_result;
 if (VAR_3 == FUNC_0())
  VAR_3 = 0;

 FUNC_5(VAR_2, VAR_3);
 FUNC_2(VAR_2);

 if (FUNC_3(VAR_0))
  FUNC_6(&VAR_0->ls_wait_general);
 out:
 return 0;
}
