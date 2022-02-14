
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_rsbtbl_size; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,int) ;

void FUNC_3(struct dlm_ls *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->ls_rsbtbl_size; VAR_1++) {
  FUNC_2(VAR_0, VAR_1);
  if (FUNC_1(VAR_0))
   break;
  FUNC_0();
 }
}
