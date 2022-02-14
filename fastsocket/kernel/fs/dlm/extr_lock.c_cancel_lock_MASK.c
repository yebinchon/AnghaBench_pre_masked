
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {struct dlm_rsb* lkb_resource; } ;
struct dlm_args {int dummy; } ;


 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (struct dlm_rsb*) ;
 int FUNC_5 (struct dlm_lkb*,struct dlm_args*) ;

__attribute__((used)) static int FUNC_6(struct dlm_ls *VAR_0, struct dlm_lkb *VAR_1,
         struct dlm_args *VAR_2)
{
 struct dlm_rsb *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->lkb_resource;

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 out:
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 return VAR_4;
}
