
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *) ;

s32 FUNC_5(void)
{
 if (VAR_4) {
  VAR_3 = 1;

  if(VAR_2 != VAR_0)
   FUNC_1(VAR_2, ((void*)0));
  if(VAR_1 != VAR_0)
   FUNC_1(VAR_1, ((void*)0));

  VAR_4 = 0;
 }

 FUNC_2();
 FUNC_0();
 FUNC_3();

 if (VAR_5) {
  FUNC_4(VAR_5);
  VAR_5 = ((void*)0);
  VAR_6 = 0;
 }

 return 1;
}
