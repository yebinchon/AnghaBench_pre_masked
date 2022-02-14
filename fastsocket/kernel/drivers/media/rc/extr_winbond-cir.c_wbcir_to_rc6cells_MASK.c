
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8
FUNC_0(u8 VAR_0)
{
 u8 VAR_1 = 0x00;
 int VAR_2;

 VAR_0 &= 0x0F;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_0 & 0x01)
   VAR_1 |= 0x02 << (VAR_2 * 2);
  else
   VAR_1 |= 0x01 << (VAR_2 * 2);
  VAR_0 >>= 1;
 }

 return VAR_1;
}
