
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef unsigned int u32 ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 unsigned VAR_5 = *VAR_1;
 unsigned VAR_6 = 1000000 * (1000000 / VAR_5);
 unsigned VAR_7;
 unsigned VAR_8 = 0xffffffff;
 unsigned VAR_9 = 0xffffffff,
          VAR_10 = 0xffffffff;
 unsigned VAR_11;
 unsigned VAR_12;
 unsigned char VAR_13 = 0;


 VAR_11 = 1000000 / VAR_5;
 VAR_12 = 1000000 % VAR_5;
 VAR_6 = 1000000 * VAR_11 + (1000000 * VAR_12) / VAR_5;

 while (VAR_6 < 100000000) {
  VAR_13 += 0x10;
  VAR_6 <<= 1;
 }

 VAR_11 = VAR_6 / VAR_0;
 VAR_12 = VAR_6 % VAR_0;



 for (VAR_7 = 3; VAR_7 <= 257; VAR_7++) {
  unsigned VAR_14 = VAR_7 * VAR_11 + (VAR_7 * VAR_12) / VAR_0;


  if (VAR_14 >= 3 && VAR_14 <= 257) {
   unsigned VAR_15 = ((VAR_6 * VAR_7) - (VAR_0 * VAR_14)) >= 0 ?
            ((VAR_6 * VAR_7) - (VAR_0 * VAR_14)) : ((VAR_0 * VAR_14) - (VAR_6 * VAR_7));
   if (VAR_15 < VAR_8) {
    VAR_10 = VAR_7;
    VAR_9 = VAR_14;
    VAR_8 = VAR_15;
   }
  }

  else if (VAR_14 <= 1028) {


   unsigned VAR_16 = ((VAR_6 * VAR_7) - (VAR_0 * (VAR_14 & ~3))) >= 0 ?
            ((VAR_6 * VAR_7) - (VAR_0 * (VAR_14 & ~3))) : ((VAR_0 * (VAR_14 & ~3)) - (VAR_6 * VAR_7));
   if (VAR_16 < VAR_8) {
    VAR_10 = VAR_7;
    VAR_9 = VAR_14;
    VAR_8 = VAR_16;
   }
  }
 }
 if (VAR_9 > 257)
  VAR_9 >>= 2;
 else
  VAR_13 |= 4;
 *VAR_2 = VAR_9 - 2;
 *VAR_3 = VAR_10 - 2;
 *VAR_4 = VAR_13;
 *VAR_1 = VAR_5;
 return;
}
