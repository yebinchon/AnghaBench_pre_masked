
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(u16 VAR_2,u16 VAR_3,u8 VAR_4,u16 VAR_5,u16 VAR_6,u16 VAR_7,u16 VAR_8,u16 VAR_9,s32 VAR_10)
{
 u16 VAR_11;
 u32 VAR_12,VAR_13;
 u32 VAR_14,VAR_15;
 u32 VAR_16,VAR_17;
 u32 VAR_18,VAR_19;

 VAR_12 = 2;
 VAR_13 = 1;
 if(VAR_4>=10) {
  VAR_12 = 1;
  VAR_13 = 2;
 }

 VAR_15 = VAR_13*VAR_2;
 VAR_14 = VAR_13*(((VAR_5*VAR_12)-VAR_3)-VAR_2);
 if(VAR_2%2) {
  VAR_17 = VAR_7+VAR_15;
  VAR_16 = VAR_9+VAR_14;
  VAR_19 = VAR_6+VAR_15;
  VAR_18 = VAR_8+VAR_14;
 } else {
  VAR_17 = VAR_6+VAR_15;
  VAR_16 = VAR_8+VAR_14;
  VAR_19 = VAR_7+VAR_15;
  VAR_18 = VAR_9+VAR_14;
 }

 VAR_11 = VAR_3/VAR_12;
 if(VAR_10) {
  VAR_17 += ((VAR_11<<1)-2);
  VAR_19 += ((VAR_11<<1)-2);
  VAR_16 += 2;
  VAR_18 += 2;
  VAR_11 = 0;
 }

 VAR_1[0] = ((VAR_11<<4)&~0x0f)|VAR_4;
 VAR_0 |= FUNC_0(0);

 VAR_1[6] = VAR_16;
 VAR_1[7] = VAR_17;
 VAR_0 |= FUNC_0(6);
 VAR_0 |= FUNC_0(7);

 VAR_1[8] = VAR_18;
 VAR_1[9] = VAR_19;
 VAR_0 |= FUNC_0(8);
 VAR_0 |= FUNC_0(9);
}
