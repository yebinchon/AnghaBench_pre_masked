
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int spl_t ;
typedef int processor_t ;
typedef int ast_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10()
{




 ast_t *VAR_4 = FUNC_1();
 ast_t VAR_5 = VAR_0;
 processor_t VAR_6;

 if (*VAR_4 & VAR_1) {
  thread_t VAR_7 = FUNC_4();

  spl_t VAR_8 = FUNC_5();

  VAR_6 = FUNC_3();
  FUNC_8(VAR_7);
  VAR_5 = FUNC_2(VAR_6, VAR_2);
  FUNC_0(VAR_5);
  FUNC_9(VAR_7);

  if (VAR_5 != VAR_0) {
   (void)FUNC_7(VAR_3, ((void*)0), VAR_5);
  }

  FUNC_6(VAR_8);
 }
}
