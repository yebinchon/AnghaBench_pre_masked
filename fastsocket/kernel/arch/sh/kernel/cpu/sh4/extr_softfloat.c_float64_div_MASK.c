
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits64 ;
typedef int int16 ;
typedef int float64 ;
typedef int flag ;
typedef int bits64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ,int,int*,int*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int,int*,int*) ;
 int FUNC_8 (int,int*,int*) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (int,int ,int,int,int*,int*) ;

float64 FUNC_12(float64 VAR_1, float64 VAR_2)
{
 flag VAR_3, VAR_4, VAR_5;
 int16 VAR_6, VAR_7, VAR_8;
 bits64 VAR_9, VAR_10, VAR_11;
 bits64 VAR_12, VAR_13;
 bits64 VAR_14, VAR_15;

 VAR_9 = FUNC_4(VAR_1);
 VAR_6 = FUNC_3(VAR_1);
 VAR_3 = FUNC_5(VAR_1);
 VAR_10 = FUNC_4(VAR_2);
 VAR_7 = FUNC_3(VAR_2);
 VAR_4 = FUNC_5(VAR_2);
 VAR_5 = VAR_3 ^ VAR_4;
 if (VAR_6 == 0x7FF) {
  if (VAR_7 == 0x7FF) {
  }
  return FUNC_9(VAR_5, 0x7FF, 0);
 }
 if (VAR_7 == 0x7FF) {
  return FUNC_9(VAR_5, 0, 0);
 }
 if (VAR_7 == 0) {
  if (VAR_10 == 0) {
   if ((VAR_6 | VAR_9) == 0) {
    FUNC_6(VAR_0);
   }
   return FUNC_9(VAR_5, 0x7FF, 0);
  }
  FUNC_8(VAR_10, &VAR_7, &VAR_10);
 }
 if (VAR_6 == 0) {
  if (VAR_9 == 0)
   return FUNC_9(VAR_5, 0, 0);
  FUNC_8(VAR_9, &VAR_6, &VAR_9);
 }
 VAR_8 = VAR_6 - VAR_7 + 0x3FD;
 VAR_9 = (VAR_9 | FUNC_0(0x0010000000000000)) << 10;
 VAR_10 = (VAR_10 | FUNC_0(0x0010000000000000)) << 11;
 if (VAR_10 <= (VAR_9 + VAR_9)) {
  VAR_9 >>= 1;
  ++VAR_8;
 }
 VAR_11 = FUNC_2(VAR_9, 0, VAR_10);
 if ((VAR_11 & 0x1FF) <= 2) {
  FUNC_7(VAR_10, VAR_11, &VAR_14, &VAR_15);
  FUNC_11(VAR_9, 0, VAR_14, VAR_15, &VAR_12, &VAR_13);
  while ((sbits64) VAR_12 < 0) {
   --VAR_11;
   FUNC_1(VAR_12, VAR_13, 0, VAR_10, &VAR_12, &VAR_13);
  }
  VAR_11 |= (VAR_13 != 0);
 }
 return FUNC_10(VAR_5, VAR_8, VAR_11);

}
