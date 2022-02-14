
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



bool FUNC_0(uint8_t *VAR_0, size_t *VAR_1,
     const uint16_t *VAR_2, size_t VAR_3)
{
   static uint8_t VAR_4[5] = { 0xC0, 0xE0, 0xF0, 0xF8, 0xFC };
   size_t VAR_5 = 0;
   size_t VAR_6 = 0;

   for (;;)
   {
      unsigned VAR_7;
      uint32_t VAR_8;

      if (VAR_6 == VAR_3)
      {
         *VAR_1 = VAR_5;
         return 1;
      }
      VAR_8 = VAR_2[VAR_6++];
      if (VAR_8 < 0x80)
      {
         if (VAR_0)
            VAR_0[VAR_5] = (char)VAR_8;
         VAR_5++;
         continue;
      }

      if (VAR_8 >= 0xD800 && VAR_8 < 0xE000)
      {
         uint32_t VAR_9;

         if (VAR_8 >= 0xDC00 || VAR_6 == VAR_3)
            break;
         VAR_9 = VAR_2[VAR_6++];
         if (VAR_9 < 0xDC00 || VAR_9 >= 0xE000)
            break;
         VAR_8 = (((VAR_8 - 0xD800) << 10) | (VAR_9 - 0xDC00)) + 0x10000;
      }

      for (VAR_7 = 1; VAR_7 < 5; VAR_7++)
         if (VAR_8 < (((uint32_t)1) << (VAR_7 * 5 + 6)))
            break;
      if (VAR_0)
         VAR_0[VAR_5] = (char)(VAR_4[VAR_7 - 1]
               + (VAR_8 >> (6 * VAR_7)));
      VAR_5++;
      do
      {
         VAR_7--;
         if (VAR_0)
            VAR_0[VAR_5] = (char)(0x80
                  + ((VAR_8 >> (6 * VAR_7)) & 0x3F));
         VAR_5++;
      }while (VAR_7 != 0);
   }

   *VAR_1 = VAR_5;
   return 0;
}
