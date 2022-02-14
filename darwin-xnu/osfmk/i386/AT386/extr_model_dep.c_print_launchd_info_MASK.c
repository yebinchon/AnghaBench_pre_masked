
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int thread_t ;
typedef int task_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;

void FUNC_13(void)
{
 task_t VAR_5 = FUNC_1();
 thread_t VAR_6 = FUNC_2();
 volatile uint32_t *VAR_7 = &VAR_2;
 uint64_t VAR_8;
 int VAR_9 = FUNC_0();

 if(VAR_3 != VAR_9) {
  FUNC_3(&VAR_2, 1);



  FUNC_5(&VAR_4, ~0U);
  VAR_3 = VAR_9;
 }

 FUNC_11(VAR_5);
 FUNC_9(VAR_5);
 FUNC_10(VAR_6);
 FUNC_8(VAR_5);

 FUNC_7(VAR_1);




 FUNC_6(&VAR_4);
 FUNC_4(&VAR_2, 1);



 VAR_8 = FUNC_12() + VAR_0;
 while(*VAR_7 && (FUNC_12() < VAR_8));

}
