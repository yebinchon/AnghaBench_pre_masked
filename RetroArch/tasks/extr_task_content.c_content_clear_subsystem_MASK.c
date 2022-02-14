
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int ** VAR_3 ;

void FUNC_1(void)
{
   unsigned VAR_4;

   VAR_2 = 0;
   VAR_1 = 0;

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      if (VAR_3[VAR_4])
      {
         FUNC_0(VAR_3[VAR_4]);
         VAR_3[VAR_4] = ((void*)0);
      }
   }
}
