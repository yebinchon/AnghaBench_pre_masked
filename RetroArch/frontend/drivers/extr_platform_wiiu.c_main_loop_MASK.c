
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSTime ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
   OSTime VAR_1;
   int VAR_2;

   do
   {
      if(FUNC_3(0))
      {
         VAR_1 = FUNC_0();
         FUNC_2(VAR_0, &VAR_1);
      }
      else
         FUNC_2(((void*)0), ((void*)0));

      VAR_2 = FUNC_1();

      if (VAR_2 == -1)
         break;
   } while(1);
}
