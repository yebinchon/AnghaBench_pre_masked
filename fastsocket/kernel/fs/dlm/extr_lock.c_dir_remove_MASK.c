
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_length; int res_name; int res_ls; } ;


 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct dlm_rsb*) ;

__attribute__((used)) static void FUNC_5(struct dlm_rsb *VAR_0)
{
 int VAR_1;

 if (FUNC_2(VAR_0->res_ls))
  return;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != FUNC_3())
  FUNC_4(VAR_0);
 else
  FUNC_1(VAR_0->res_ls, VAR_1,
         VAR_0->res_name, VAR_0->res_length);
}
