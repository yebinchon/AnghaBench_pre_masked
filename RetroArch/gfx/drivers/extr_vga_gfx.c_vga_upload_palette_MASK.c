
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned char) ;

__attribute__((used)) static void FUNC_1(void)
{
   unsigned VAR_0;
   unsigned char VAR_1 = 0;
   unsigned char VAR_2 = 0;
   unsigned char VAR_3 = 0;

   FUNC_0(0x03c8, 0);


   for (VAR_0 = 0; VAR_0 < 256; VAR_0++)
   {
      if (VAR_0 > 0 && VAR_0 % 64 == 0)
      {
         VAR_1 = 0;
         VAR_2 = 0;
         VAR_3++;
      }
      else if (VAR_0 > 0 && VAR_0 % 8 == 0)
      {
         VAR_1 = 0;
         VAR_2++;
      }

      FUNC_0(0x03c9, VAR_1 * (63.0f / 7.0f));
      FUNC_0(0x03c9, VAR_2 * (63.0f / 7.0f));
      FUNC_0(0x03c9, VAR_3 * (63.0f / 3.0f));

      VAR_1++;
   }
}
