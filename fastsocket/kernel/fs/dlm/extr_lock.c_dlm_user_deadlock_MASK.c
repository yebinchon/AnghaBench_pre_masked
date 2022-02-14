
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_user_args {int dummy; } ;
struct dlm_rsb {int dummy; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_flags; struct dlm_rsb* lkb_resource; struct dlm_user_args* lkb_ua; } ;
struct dlm_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_lkb*) ;
 int FUNC_3 (struct dlm_ls*) ;
 int FUNC_4 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_rsb*) ;
 int FUNC_7 (struct dlm_rsb*) ;
 int FUNC_8 (int ,struct dlm_user_args*,struct dlm_args*) ;
 int FUNC_9 (struct dlm_rsb*) ;
 int FUNC_10 (struct dlm_lkb*,struct dlm_args*) ;

int FUNC_11(struct dlm_ls *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct dlm_lkb *VAR_6;
 struct dlm_args VAR_7;
 struct dlm_user_args *VAR_8;
 struct dlm_rsb *VAR_9;
 int VAR_10;

 FUNC_1(VAR_3);

 VAR_10 = FUNC_4(VAR_3, VAR_5, &VAR_6);
 if (VAR_10)
  goto out;

 VAR_8 = VAR_6->lkb_ua;

 VAR_10 = FUNC_8(VAR_4, VAR_8, &VAR_7);
 if (VAR_10)
  goto out_put;



 VAR_9 = VAR_6->lkb_resource;
 FUNC_5(VAR_9);
 FUNC_6(VAR_9);

 VAR_10 = FUNC_10(VAR_6, &VAR_7);
 if (VAR_10)
  goto out_r;
 VAR_6->lkb_flags |= VAR_1;

 VAR_10 = FUNC_0(VAR_9, VAR_6);
 out_r:
 FUNC_9(VAR_9);
 FUNC_7(VAR_9);

 if (VAR_10 == -VAR_0)
  VAR_10 = 0;

 if (VAR_10 == -VAR_2)
  VAR_10 = 0;
 out_put:
 FUNC_2(VAR_6);
 out:
 FUNC_3(VAR_3);
 return VAR_10;
}
