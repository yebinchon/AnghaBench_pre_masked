
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_user_args {int user_lksb; scalar_t__ castparam; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {struct dlm_user_args* lkb_ua; } ;
struct dlm_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_lkb*) ;
 int FUNC_3 (struct dlm_ls*) ;
 int FUNC_4 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_5 (struct dlm_user_args*) ;
 int FUNC_6 (int ,struct dlm_user_args*,struct dlm_args*) ;

int FUNC_7(struct dlm_ls *VAR_2, struct dlm_user_args *VAR_3,
      uint32_t VAR_4, uint32_t VAR_5)
{
 struct dlm_lkb *VAR_6;
 struct dlm_args VAR_7;
 struct dlm_user_args *VAR_8;
 int VAR_9;

 FUNC_1(VAR_2);

 VAR_9 = FUNC_4(VAR_2, VAR_5, &VAR_6);
 if (VAR_9)
  goto out;

 VAR_8 = VAR_6->lkb_ua;
 if (VAR_3->castparam)
  VAR_8->castparam = VAR_3->castparam;
 VAR_8->user_lksb = VAR_3->user_lksb;

 VAR_9 = FUNC_6(VAR_4, VAR_8, &VAR_7);
 if (VAR_9)
  goto out_put;

 VAR_9 = FUNC_0(VAR_2, VAR_6, &VAR_7);

 if (VAR_9 == -VAR_0)
  VAR_9 = 0;

 if (VAR_9 == -VAR_1)
  VAR_9 = 0;
 out_put:
 FUNC_2(VAR_6);
 out:
 FUNC_3(VAR_2);
 FUNC_5(VAR_3);
 return VAR_9;
}
