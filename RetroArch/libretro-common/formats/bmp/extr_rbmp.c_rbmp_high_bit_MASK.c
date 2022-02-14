
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0)
{
   int VAR_1=0;
   if (VAR_0 == 0)
      return -1;

   if (VAR_0 >= 0x10000)
   {
      VAR_1 += 16;
      VAR_0 >>= 16;
   }
   if (VAR_0 >= 0x00100)
   {
      VAR_1 += 8;
      VAR_0 >>= 8;
   }
   if (VAR_0 >= 0x00010)
   {
      VAR_1 += 4;
      VAR_0 >>= 4;
   }
   if (VAR_0 >= 0x00004)
   {
      VAR_1 += 2;
      VAR_0 >>= 2;
   }
   if (VAR_0 >= 0x00002)
      VAR_1 += 1;
   return VAR_1;
}
