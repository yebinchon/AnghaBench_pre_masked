
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



int FUNC_0(u32 *VAR_0)
{
   u8 VAR_1=1;
   int VAR_2;


   if ((VAR_0[0] & 0xFFFFFF) != 150)
      return 0;



   for (VAR_2 = 1; VAR_2 < 99; VAR_2++)
   {
      if (VAR_0[VAR_2] == 0xFFFFFFFF)
         break;

      VAR_1++;

      if ((VAR_0[VAR_2-1] & 0xFFFFFF) >= (VAR_0[VAR_2] & 0xFFFFFF))
         return 0;
   }


   if (VAR_0[99] & 0xFF)
      return 0;

   if (VAR_0[99] & 0xFF00)
      return 0;

   if (((VAR_0[99] & 0xFF0000) >> 16) != 0x01)
      return 0;

   if ((VAR_0[99] & 0xFF000000) != (VAR_0[0] & 0xFF000000))
      return 0;


   if (VAR_0[100] & 0xFF)
      return 0;

   if (VAR_0[100] & 0xFF00)
      return 0;

   if (((VAR_0[100] & 0xFF0000) >> 16) != VAR_1)
      return 0;

   if ((VAR_0[100] & 0xFF000000) != (VAR_0[VAR_1-1] & 0xFF000000))
      return 0;


   if ((VAR_0[101] & 0xFFFFFF) <= (VAR_0[VAR_1-1] & 0xFFFFFF))
      return 0;

   if ((VAR_0[101] & 0xFF000000) != (VAR_0[VAR_1-1] & 0xFF000000))
      return 0;

   return 1;
}
