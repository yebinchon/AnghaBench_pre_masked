
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ar9170 {int dummy; } ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;


 int FUNC_0 () ;



 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ar9170 *VAR_2, bool VAR_3,
          u32 VAR_4, enum carl9170_bw VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13;
 u8 VAR_14 = 1, VAR_15 = 0;
 u8 VAR_16 = 0;

 switch (VAR_5) {
 case 129:
  VAR_4 += 10;
  break;
 case 128:
  VAR_4 -= 10;
  break;
 case 130:
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }

 if (VAR_3) {
  if (VAR_4 % 10) {
   VAR_13 = (VAR_4 - 4800) / 5;
  } else {
   VAR_13 = ((VAR_4 - 4800) / 10) * 2;
   VAR_14 = 0;
   VAR_15 = 1;
  }
  VAR_13 = VAR_1[VAR_13];
 } else {
  if (VAR_4 == 2484) {
   VAR_13 = 10 + (VAR_4 - 2274) / 5;
   VAR_16 = 1;
  } else
   VAR_13 = 16 + (VAR_4 - 2272) / 5;
  VAR_13 *= 4;
  VAR_13 = VAR_1[VAR_13];
 }

 VAR_8 = VAR_13;
 VAR_7 = 0x21 |
  VAR_14 << 3 |
  VAR_15 << 2 |
  VAR_16 << 1;
 VAR_9 = VAR_7 & 0x1f;
 VAR_10 = VAR_8 & 0x1f;
 VAR_11 = VAR_10 << 5 | VAR_9;

 VAR_9 = (VAR_7 >> 5) & 0x7;
 VAR_10 = (VAR_8 >> 5) & 0x7;
 VAR_12 = VAR_10 << 5 | VAR_9;

 FUNC_2(VAR_2);

 FUNC_1(0x1c58b0, VAR_11);
 FUNC_1(0x1c58e8, VAR_12);

 FUNC_3();
 VAR_6 = FUNC_4();
 if (VAR_6)
  return VAR_6;

 return 0;
}
