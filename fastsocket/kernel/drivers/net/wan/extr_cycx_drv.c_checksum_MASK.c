
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u8 *VAR_0, u32 VAR_1)
{
 u16 VAR_2 = 0;
 u16 VAR_3, VAR_4;

 for (; VAR_1; --VAR_1, ++VAR_0)
  for (VAR_3 = 0x80; VAR_3; VAR_3 >>= 1) {
   VAR_4 = (VAR_2 & 0x8000);
   VAR_2 <<= 1;
   VAR_2 |= ((*VAR_0 & VAR_3) ? 1 : 0);

   if (VAR_4)
    VAR_2 ^= 0x1021;
  }

 return VAR_2;
}
