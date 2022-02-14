
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_length; int res_name; struct dlm_ls* res_ls; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (struct dlm_ls*,int,int ,int ,int*) ;
 int FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dlm_rsb*,int) ;
 int FUNC_4 (struct dlm_ls*,char*,int) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_rsb*,int) ;

__attribute__((used)) static int FUNC_7(struct dlm_rsb *VAR_0)
{
 struct dlm_ls *VAR_1 = VAR_0->res_ls;
 int VAR_2, VAR_3, VAR_4, VAR_5 = FUNC_2();

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 == VAR_5) {
  VAR_2 = FUNC_0(VAR_1, VAR_5, VAR_0->res_name,
           VAR_0->res_length, &VAR_4);
  if (VAR_2)
   FUNC_4(VAR_1, "recover dir lookup error %d", VAR_2);

  if (VAR_4 == VAR_5)
   VAR_4 = 0;
  FUNC_6(VAR_0, VAR_4);
 } else {
  FUNC_5(VAR_0);
  VAR_2 = FUNC_3(VAR_0, VAR_3);
 }

 return VAR_2;
}
