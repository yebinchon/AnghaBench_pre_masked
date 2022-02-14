
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TRACKING_LIST ;
typedef int CALLSTACK_DATA ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 () ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

void FUNC_4()
{
 UINT VAR_7;
 CALLSTACK_DATA *VAR_8;


 VAR_3 = (TRACKING_LIST **)FUNC_2(sizeof(TRACKING_LIST *) * VAR_0);

 for (VAR_7 = 0;VAR_7 < VAR_0;VAR_7++)
 {
  VAR_3[VAR_7] = ((void*)0);
 }

 VAR_4 = 0;


 VAR_6 = FUNC_3();
 VAR_5 = FUNC_3();
 VAR_1 = FUNC_3();

 VAR_8 = FUNC_1();
 if (VAR_8 == ((void*)0))
 {
  VAR_2 = 1;
 }
 else
 {
  VAR_2 = 0;
  FUNC_0(VAR_8);
 }
}
