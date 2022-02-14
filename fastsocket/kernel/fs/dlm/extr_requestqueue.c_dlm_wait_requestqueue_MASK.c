
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_requestqueue_mutex; int ls_requestqueue; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct dlm_ls *VAR_0)
{
 for (;;) {
  FUNC_1(&VAR_0->ls_requestqueue_mutex);
  if (FUNC_0(&VAR_0->ls_requestqueue))
   break;
  FUNC_2(&VAR_0->ls_requestqueue_mutex);
  FUNC_3();
 }
 FUNC_2(&VAR_0->ls_requestqueue_mutex);
}
