
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_call_group_t ;
typedef int spl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;

void
FUNC_3(void)
{
 spl_t VAR_3 = FUNC_1();

 for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  thread_call_group_t VAR_5 = &VAR_2[VAR_4];



  FUNC_0(((void*)0), VAR_5, VAR_0);
 }

 FUNC_2(VAR_3);
}
