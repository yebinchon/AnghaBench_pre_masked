
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



u16 FUNC_0(u32 VAR_0)
{
   u32 VAR_1 = (VAR_0 >> 23) & 1;
   u32 VAR_2 = 0;

   if (VAR_1 != 0)
      VAR_0 = (~VAR_0) & 0x7FFFFF;

   if (VAR_0 <= 0x1FFFF)
   {
      VAR_0 *= 64;
      VAR_2 += 0x3000;
   }

   if (VAR_0 <= 0xFFFFF)
   {
      VAR_0 *= 8;
      VAR_2 += 0x1800;
   }

   if (VAR_0 <= 0x3FFFFF)
   {
      VAR_0 *= 2;
      VAR_2 += 0x800;
   }

   if (VAR_0 <= 0x3FFFFF)
   {
      VAR_0 *= 2;
      VAR_2 += 0x800;
   }

   if (VAR_0 <= 0x3FFFFF)
      VAR_2 += 0x800;

   VAR_0 >>= 11;
   VAR_0 &= 0x7ff;
   VAR_0 |= VAR_2;

   if (VAR_1 != 0)
      VAR_0 ^= (0x7ff | (1 << 15));

   return VAR_0;
}
