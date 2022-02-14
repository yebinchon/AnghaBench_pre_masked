
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {scalar_t__ is_clk_25mhz; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int) ;
 int FUNC_8 (struct ath_hw*,int,int) ;
 int FUNC_9 (struct ath_hw*,int,int) ;
 int VAR_25 ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ath_hw *VAR_26,
         struct ath9k_channel *VAR_27)
{
 u32 VAR_28;

 if (FUNC_3(VAR_26) || FUNC_5(VAR_26)) {

  FUNC_7(VAR_26, VAR_4,
         VAR_8, 0x1);
  FUNC_7(VAR_26, VAR_4,
         VAR_13, 0x40);
  FUNC_7(VAR_26, VAR_4,
         VAR_14, 0x4);

  FUNC_7(VAR_26, VAR_0,
         VAR_3, 0x5);
  FUNC_7(VAR_26, VAR_0,
         VAR_2, 0x58);
  FUNC_7(VAR_26, VAR_0,
         VAR_1, 0x0);

  FUNC_7(VAR_26, VAR_4,
         VAR_7, 0x1);
  FUNC_7(VAR_26, VAR_4,
         VAR_6, 0x1);
  FUNC_7(VAR_26, VAR_4,
         VAR_5, 0x1);


  FUNC_7(VAR_26, VAR_9,
         VAR_10, 0x6);

  FUNC_7(VAR_26, VAR_4,
         VAR_8, 0x0);
  FUNC_11(1000);
 } else if (FUNC_1(VAR_26)) {
  u32 VAR_29, VAR_30, VAR_31;

  if (VAR_26->is_clk_25mhz) {
   VAR_29 = 0x18e82f01;
   VAR_30 = 0xe04a3d;
   VAR_31 = 0x1d;
  } else {
   VAR_29 = 0x19e82f01;
   VAR_30 = 0x886666;
   VAR_31 = 0x3d;
  }


  FUNC_9(VAR_26, VAR_11, VAR_29);


  FUNC_7(VAR_26, VAR_12,
         VAR_15, 0x1);

  FUNC_9(VAR_26, VAR_20, 0x1142c);
  FUNC_11(1000);


  FUNC_9(VAR_26, VAR_21, VAR_30);


  FUNC_7(VAR_26, VAR_4, VAR_13, VAR_31);
  FUNC_7(VAR_26, VAR_4, VAR_14, 0x06);


  FUNC_7(VAR_26, VAR_9,
         VAR_10, 0x1);
 } else if (FUNC_2(VAR_26) || FUNC_4(VAR_26)) {
  u32 VAR_32, VAR_33, VAR_34, VAR_35;

  FUNC_9(VAR_26, VAR_20, 0x1142c);
  FUNC_11(1000);

  FUNC_8(VAR_26, VAR_17, 0x1 << 16);
  FUNC_11(100);

  if (VAR_26->is_clk_25mhz) {
   VAR_33 = 0x54;
   VAR_34 = 0x1eb85;
   VAR_35 = 3;
  } else {
   if (FUNC_2(VAR_26)) {
    VAR_33 = 88;
    VAR_34 = 0;
    VAR_35 = 5;
   } else {
    VAR_33 = 0x11;
    VAR_34 = 0x26666;
    VAR_35 = 1;
   }
  }

  VAR_32 = FUNC_6(VAR_26, VAR_17);
  VAR_32 |= (0x1 << 16);
  FUNC_9(VAR_26, VAR_17, VAR_32);
  FUNC_11(100);

  FUNC_9(VAR_26, VAR_16, (VAR_35 << 27) |
     (VAR_33 << 18) | VAR_34);
  FUNC_11(100);

  VAR_32 = FUNC_6(VAR_26, VAR_17);
  if (FUNC_2(VAR_26))
   VAR_32 = (VAR_32 & 0x80071fff) | (0x1 << 30) |
     (0x1 << 13) | (0x4 << 26) | (0x18 << 19);
  else
   VAR_32 = (VAR_32 & 0x80071fff) | (0x3 << 30) |
     (0x1 << 13) | (0x4 << 26) | (0x60 << 19);
  FUNC_9(VAR_26, VAR_17, VAR_32);
  FUNC_9(VAR_26, VAR_17,
     FUNC_6(VAR_26, VAR_17) & 0xfffeffff);
  FUNC_11(1000);
 }

 VAR_28 = FUNC_10(VAR_26, VAR_27);
 if (FUNC_5(VAR_26))
  VAR_28 |= 0x40000;
 FUNC_9(VAR_26, VAR_20, VAR_28);

 if (FUNC_3(VAR_26) || FUNC_2(VAR_26) || FUNC_1(VAR_26) ||
     FUNC_4(VAR_26))
  FUNC_11(1000);


 if (FUNC_0(VAR_26)) {
  FUNC_11(500);
  FUNC_9(VAR_26, 0x50040, 0x304);
 }

 FUNC_11(VAR_25);

 FUNC_9(VAR_26, VAR_22, VAR_19);

 if (FUNC_2(VAR_26) || FUNC_4(VAR_26)) {
  if (VAR_26->is_clk_25mhz) {
   FUNC_9(VAR_26, VAR_18, 0x17c << 1);
   FUNC_9(VAR_26, VAR_24, 0x0010f3d7);
   FUNC_9(VAR_26, VAR_23, 0x0001e7ae);
  } else {
   FUNC_9(VAR_26, VAR_18, 0x261 << 1);
   FUNC_9(VAR_26, VAR_24, 0x0010f400);
   FUNC_9(VAR_26, VAR_23, 0x0001e800);
  }
  FUNC_11(100);
 }
}
