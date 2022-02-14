
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_length; int res_recover_list; int res_root_list; int res_waitqueue; int res_convertqueue; int res_grantqueue; int res_lookup; int res_mutex; int res_name; struct dlm_ls* res_ls; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (int *) ;
 struct dlm_rsb* FUNC_1 (struct dlm_ls*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct dlm_rsb *FUNC_4(struct dlm_ls *VAR_0, char *VAR_1, int VAR_2)
{
 struct dlm_rsb *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->res_ls = VAR_0;
 VAR_3->res_length = VAR_2;
 FUNC_2(VAR_3->res_name, VAR_1, VAR_2);
 FUNC_3(&VAR_3->res_mutex);

 FUNC_0(&VAR_3->res_lookup);
 FUNC_0(&VAR_3->res_grantqueue);
 FUNC_0(&VAR_3->res_convertqueue);
 FUNC_0(&VAR_3->res_waitqueue);
 FUNC_0(&VAR_3->res_root_list);
 FUNC_0(&VAR_3->res_recover_list);

 return VAR_3;
}
