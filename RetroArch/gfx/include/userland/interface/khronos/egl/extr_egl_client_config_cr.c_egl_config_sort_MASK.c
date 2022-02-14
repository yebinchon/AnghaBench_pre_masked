
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int,int,int,int) ;

void FUNC_1(int *VAR_1, bool VAR_2, bool VAR_3, bool VAR_4, bool VAR_5)
{
   int VAR_6, VAR_7;

   for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++)
      for (VAR_7 = 0; VAR_7 < VAR_0 - VAR_6; VAR_7++)
         if (FUNC_0(VAR_1[VAR_7 + 1], VAR_1[VAR_7], VAR_2, VAR_3, VAR_4, VAR_5)) {
            int VAR_8 = VAR_1[VAR_7];
            VAR_1[VAR_7] = VAR_1[VAR_7 + 1];
            VAR_1[VAR_7 + 1] = VAR_8;
         }
}
