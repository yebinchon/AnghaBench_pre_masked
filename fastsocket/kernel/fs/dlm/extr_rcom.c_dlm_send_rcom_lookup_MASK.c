
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_length; int res_name; struct dlm_ls* res_ls; } ;
struct dlm_rcom {unsigned long rc_id; int rc_buf; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int,int ,int ,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

int FUNC_3(struct dlm_rsb *VAR_1, int VAR_2)
{
 struct dlm_rcom *VAR_3;
 struct dlm_mhandle *VAR_4;
 struct dlm_ls *VAR_5 = VAR_1->res_ls;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_0, VAR_1->res_length,
       &VAR_3, &VAR_4);
 if (VAR_6)
  goto out;
 FUNC_1(VAR_3->rc_buf, VAR_1->res_name, VAR_1->res_length);
 VAR_3->rc_id = (unsigned long) VAR_1;

 FUNC_2(VAR_5, VAR_4, VAR_3);
 out:
 return VAR_6;
}
