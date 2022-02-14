
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u8 *VAR_0)
{
 u32 VAR_1;
 u8 VAR_2;
 int VAR_3;
 VAR_1 = 0;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_2 = *VAR_0++;
  VAR_1 ^= (VAR_2 >> 2) ^ (VAR_2 << 4);
  VAR_2 = *VAR_0++;
  VAR_1 ^= (VAR_2 >> 4) ^ (VAR_2 << 2);
  VAR_2 = *VAR_0++;
  VAR_1 ^= (VAR_2 >> 6) ^ (VAR_2);
 }

 return VAR_1 & 0x3F;
}
