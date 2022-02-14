
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u32
FUNC_0(u32 VAR_0, u32 VAR_1, u8 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_0 / VAR_1;
 VAR_4 = VAR_0 % VAR_1;
 VAR_6 = VAR_1 & 1;
 VAR_5 = (VAR_1 >> 1) + VAR_6;

 while (VAR_2--) {
  VAR_3 <<= 1;
  if (VAR_4 >= VAR_5) {
   VAR_3++;
   VAR_4 = ((VAR_4 - VAR_5) << 1) + VAR_6;
  } else {
   VAR_4 <<= 1;
  }
 }

 if (VAR_4 >= VAR_5)
  VAR_3++;

 return VAR_3;
}
