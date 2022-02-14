
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int,int,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(u32 VAR_3, int VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 if (FUNC_6(VAR_5)) {
  u32 VAR_8 = VAR_5;
  u32 VAR_9 = VAR_7;
  u32 VAR_10 = FUNC_4(FUNC_0(VAR_3, VAR_4) + VAR_0);
  if (VAR_10 && (VAR_7 > VAR_10)) {
   s32 VAR_11 =
    FUNC_4(FUNC_0(VAR_3, VAR_4) + VAR_2);
   u32 VAR_12 = (VAR_7+VAR_10-1)/VAR_10 - 1;
   if (VAR_11 >= 0) {
    VAR_9 += VAR_12 * VAR_11;
   } else if (-VAR_11 > VAR_10) {
    s32 VAR_13 = VAR_12 * (VAR_10 + VAR_11);
    VAR_8 += VAR_13;
    VAR_9 = VAR_10 - VAR_13;
   } else {
    VAR_9 = FUNC_3(VAR_9 + VAR_12 * VAR_11,
     (VAR_10 + VAR_11) * VAR_12 - VAR_11);
   }
  }
  FUNC_1(VAR_8, VAR_9);
 }
 if (FUNC_7(VAR_6)) {
  u32 VAR_14 = VAR_6;
  u32 VAR_15 = VAR_7;
  u32 VAR_16 = FUNC_4(FUNC_0(VAR_3, VAR_4) + VAR_0);
  if (VAR_16 && (VAR_7 > VAR_16)) {
   s32 VAR_17 =
    FUNC_4(FUNC_0(VAR_3, VAR_4) + VAR_1);
   u32 VAR_18 = (VAR_7+VAR_16-1)/VAR_16 - 1;
   if (VAR_17 >= 0) {
    VAR_15 += VAR_18 * VAR_17;
   } else if (-VAR_17 > VAR_16) {
    s32 VAR_19 = VAR_18 * (VAR_16 + VAR_17);
    VAR_14 += VAR_19;
    VAR_15 = VAR_16 - VAR_19;
   } else {
    VAR_15 = FUNC_3(VAR_15 + VAR_18 * VAR_17,
     (VAR_16 + VAR_17) * VAR_18 - VAR_17);
   }
  }
  FUNC_2(VAR_14, VAR_15);
 }
 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
