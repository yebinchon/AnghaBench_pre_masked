
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 u16 VAR_3;

 while (VAR_2--) {
  VAR_0 ^= *VAR_1++;
  VAR_0 ^= (u8)VAR_0 >> 4;
  VAR_3 = (u8)VAR_0;
  VAR_0 ^= (VAR_3 ^ (VAR_3 << 1)) << 4;
 }
 return VAR_0;
}
