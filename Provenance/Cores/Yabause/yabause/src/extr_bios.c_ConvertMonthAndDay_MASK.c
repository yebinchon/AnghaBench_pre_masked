
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, u32 VAR_1, u32 VAR_2, int VAR_3)
{
   int VAR_4;
   u16 VAR_5[11] = { 31, 31+28, 31+28+31, 31+28+31+30, 31+28+31+30+31,
                        31+28+31+30+31+30, 31+28+31+30+31+30+31,
                        31+28+31+30+31+30+31+31, 31+28+31+30+31+30+31+31+30,
                        31+28+31+30+31+30+31+31+30+31,
                        31+28+31+30+31+30+31+31+30+31+30 };

   if (VAR_0 < VAR_5[0])
   {

      FUNC_0(VAR_1, 1);


      FUNC_0(VAR_2, (u8)(VAR_0 + 1));
      return;
   }

   for (VAR_4 = 1; VAR_4 < 11; VAR_4++)
   {
      if (VAR_0 <= VAR_5[VAR_4])
         break;
   }

   if (VAR_3 == 1)
   {

      FUNC_0(VAR_1, (u8)(VAR_4 + 1));


      if ((VAR_4 + 1) == 2)
         FUNC_0(VAR_2, (u8)(VAR_0 - VAR_5[(VAR_4 - 1)] + 1));
      else
         FUNC_0(VAR_2, (u8)(VAR_0 - VAR_5[(VAR_4 - 1)]));
   }
   else
   {

      FUNC_0(VAR_1, (u8)(VAR_4 + 1));


      FUNC_0(VAR_2, (u8)(VAR_0 - VAR_5[(VAR_4 - 1)] + 1));
   }
}
