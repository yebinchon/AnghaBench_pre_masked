
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void)
{
   if (VAR_0 == VAR_2)
      return;

   if (VAR_0 < 100)
   {
      if (VAR_0 < 53)
         VAR_1 = 50;
      if (VAR_0 >= 53 && VAR_0 < 57)
         VAR_1 = 55;
      if (VAR_0 >= 57)
         VAR_1 = 60;
   }

   if (VAR_0 > 100)
   {
      if (VAR_0 < 106)
         VAR_1 = 120;
      if (VAR_0 >= 106 && VAR_0 < 114)
         VAR_1 = 110;
      if (VAR_0 >= 114)
         VAR_1 = 120;
   }

   FUNC_0(VAR_1);

   VAR_2 = VAR_0;
}
