
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int,int*) ;

__attribute__((used)) static float32 FUNC_6(float32 VAR_1, float32 VAR_2, flag VAR_3)
{
 int16 VAR_4, VAR_5, VAR_6;
 bits32 VAR_7, VAR_8, VAR_9;
 int16 VAR_10;

 VAR_7 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);
 VAR_8 = FUNC_1(VAR_2);
 VAR_5 = FUNC_0(VAR_2);
 VAR_10 = VAR_4 - VAR_5;
 VAR_7 <<= 7;
 VAR_8 <<= 7;
 if (0 < VAR_10)
  goto aExpBigger;
 if (VAR_10 < 0)
  goto bExpBigger;
 if (VAR_4 == 0) {
  VAR_4 = 1;
  VAR_5 = 1;
 }
 if (VAR_8 < VAR_7)
  goto aBigger;
 if (VAR_7 < VAR_8)
  goto bBigger;
 return FUNC_4(FUNC_2() == VAR_0, 0, 0);
      bExpBigger:
 if (VAR_5 == 0xFF) {
  return FUNC_4(VAR_3 ^ 1, 0xFF, 0);
 }
 if (VAR_4 == 0) {
  ++VAR_10;
 } else {
  VAR_7 |= 0x40000000;
 }
 FUNC_5(VAR_7, -VAR_10, &VAR_7);
 VAR_8 |= 0x40000000;
      bBigger:
 VAR_9 = VAR_8 - VAR_7;
 VAR_6 = VAR_5;
 VAR_3 ^= 1;
 goto normalizeRoundAndPack;
      aExpBigger:
 if (VAR_4 == 0xFF) {
  return VAR_1;
 }
 if (VAR_5 == 0) {
  --VAR_10;
 } else {
  VAR_8 |= 0x40000000;
 }
 FUNC_5(VAR_8, VAR_10, &VAR_8);
 VAR_7 |= 0x40000000;
      aBigger:
 VAR_9 = VAR_7 - VAR_8;
 VAR_6 = VAR_4;
      normalizeRoundAndPack:
 --VAR_6;
 return FUNC_3(VAR_3, VAR_6, VAR_9);

}
