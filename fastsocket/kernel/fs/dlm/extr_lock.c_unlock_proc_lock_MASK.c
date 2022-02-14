
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_ua; } ;
struct dlm_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct dlm_args*) ;
 int FUNC_1 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_2, struct dlm_lkb *VAR_3)
{
 struct dlm_args VAR_4;
 int VAR_5;

 FUNC_0(VAR_1, VAR_3->lkb_ua, &VAR_4);

 VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_4);
 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 return VAR_5;
}
