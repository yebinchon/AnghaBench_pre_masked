
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;

void FUNC_1(uint8_t *VAR_1, size_t VAR_2)
{
   unsigned VAR_3, VAR_4;
   int VAR_5 = VAR_2 % 16;
   uint8_t VAR_6[16] = {0};

   if (VAR_0 > 1)
      return;

   FUNC_0("== %d-byte buffer ==================\n", (int)VAR_2);

   for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      VAR_6[VAR_4] = VAR_1[VAR_3];
      VAR_4++;

      if (VAR_4 == 16)
      {
         VAR_4 = 0;
         FUNC_0("%02x%02x%02x%02x%02x%02x%02x%02x  %02x%02x%02x%02x%02x%02x%02x%02x\n",
            VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7],
            VAR_6[8], VAR_6[9], VAR_6[10], VAR_6[11], VAR_6[12], VAR_6[13], VAR_6[14], VAR_6[15]);
      }
   }

   if (VAR_5)
   {
      for (VAR_3 = VAR_5; VAR_3 < 16; VAR_3++)
         VAR_6[VAR_3] = 0xff;
      FUNC_0("%02x%02x%02x%02x%02x%02x%02x%02x  %02x%02x%02x%02x%02x%02x%02x%02x\n",
         VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5], VAR_6[6], VAR_6[7],
         VAR_6[8], VAR_6[9], VAR_6[10], VAR_6[11], VAR_6[12], VAR_6[13], VAR_6[14], VAR_6[15]);
   }
   FUNC_0("==================================\n");
}
