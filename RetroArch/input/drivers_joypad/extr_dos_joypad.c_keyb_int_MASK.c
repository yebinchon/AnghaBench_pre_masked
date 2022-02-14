
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int) ;
 unsigned char* VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(void)
{
   static unsigned char VAR_1 = 0;
   unsigned char VAR_2 = FUNC_0(0x60);

   unsigned char VAR_3 = !(VAR_2 & 0x80);

   int VAR_4 = VAR_2 & 0x7F;

   if (VAR_1 == 0xE0)
   {

      if (VAR_4 < 0x60)
         VAR_0[VAR_4 | (1 << 8)] = VAR_3;

      VAR_1 = 0;
   }
   else if (VAR_1 >= 0xE1 && VAR_1 <= 0xE2)
      VAR_1 = 0;
   else if (VAR_2 >= 0xE0 && VAR_2 <= 0xE2)
      VAR_1 = VAR_2;
   else if (VAR_4 < 0x60)
      VAR_0[VAR_4] = VAR_3;

   FUNC_1(0x20, 0x20);
}
