
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 char FUNC_1 (char) ;

void FUNC_2(char * VAR_0)
{
   if (VAR_0)
   {
      size_t VAR_1 = FUNC_0(VAR_0);
      int VAR_2;

      for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
         VAR_0[VAR_2] = FUNC_1(VAR_0[VAR_2]);
   }
}
