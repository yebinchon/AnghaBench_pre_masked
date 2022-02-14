
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dlm_ls* FUNC_0 (void*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,void*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_3)
{
 struct dlm_ls *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {
  FUNC_4("dlm_recoverd: no lockspace %p", VAR_3);
  return -1;
 }

 while (!FUNC_3()) {
  FUNC_6(VAR_1);
  if (!FUNC_8(VAR_0, &VAR_4->ls_flags))
   FUNC_5();
  FUNC_6(VAR_2);

  if (FUNC_7(VAR_0, &VAR_4->ls_flags))
   FUNC_2(VAR_4);
 }

 FUNC_1(VAR_4);
 return 0;
}
