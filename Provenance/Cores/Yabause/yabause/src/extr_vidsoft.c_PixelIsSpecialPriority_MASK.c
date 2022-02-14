
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1)
{
   VAR_1 &= 0xf;

   if (VAR_0 & 0x01)
   {
      if (VAR_1 == 0 || VAR_1 == 1)
         return 1;
   }
   if (VAR_0 & 0x02)
   {
      if (VAR_1 == 2 || VAR_1 == 3)
         return 1;
   }
   if (VAR_0 & 0x04)
   {
      if (VAR_1 == 4 || VAR_1 == 5)
         return 1;
   }
   if (VAR_0 & 0x08)
   {
      if (VAR_1 == 6 || VAR_1 == 7)
         return 1;
   }
   if (VAR_0 & 0x10)
   {
      if (VAR_1 == 8 || VAR_1 == 9)
         return 1;
   }
   if (VAR_0 & 0x20)
   {
      if (VAR_1 == 0xa || VAR_1 == 0xb)
         return 1;
   }
   if (VAR_0 & 0x40)
   {
      if (VAR_1 == 0xc || VAR_1 == 0xd)
         return 1;
   }
   if (VAR_0 & 0x80)
   {
      if (VAR_1 == 0xe || VAR_1 == 0xf)
         return 1;
   }

   return 0;
}
