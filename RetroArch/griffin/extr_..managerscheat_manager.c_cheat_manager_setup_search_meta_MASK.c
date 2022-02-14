
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0, unsigned int *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
   switch (VAR_0)
   {
      case 0:
         *VAR_1 = 1;
         *VAR_3 = 1;
         *VAR_2 = 0x01;
         break;
      case 1:
         *VAR_1 = 1;
         *VAR_3 = 2;
         *VAR_2 = 0x03;
         break;
      case 2:
         *VAR_1 = 1;
         *VAR_3 = 4;
         *VAR_2 = 0x0F;
         break;
      case 3:
         *VAR_1 = 1;
         *VAR_3 = 8;
         *VAR_2 = 0xFF;
         break;
      case 4:
         *VAR_1 = 2;
         *VAR_3 = 8;
         *VAR_2 = 0xFFFF;
         break;
      case 5:
         *VAR_1 = 4;
         *VAR_3 = 8;
         *VAR_2 = 0xFFFFFFFF;
         break;
   }
}
