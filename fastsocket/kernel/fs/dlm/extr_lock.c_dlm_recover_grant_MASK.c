
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_ls {int ls_rsbtbl_size; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dlm_rsb*,int ) ;
 struct dlm_rsb* FUNC_2 (struct dlm_ls*,int) ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (struct dlm_rsb*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_rsb*,int ) ;
 int FUNC_7 (struct dlm_rsb*) ;

void FUNC_8(struct dlm_ls *VAR_1)
{
 struct dlm_rsb *VAR_2;
 int VAR_3 = 0;

 while (1) {
  VAR_2 = FUNC_2(VAR_1, VAR_3);
  if (!VAR_2) {
   if (VAR_3 == VAR_1->ls_rsbtbl_size - 1)
    break;
   VAR_3++;
   continue;
  }
  FUNC_4(VAR_2);

  FUNC_3(VAR_2);
  FUNC_6(VAR_2, VAR_0);
  FUNC_1(VAR_2, 0);
  FUNC_7(VAR_2);
  FUNC_5(VAR_2);
  FUNC_0();
 }
}
