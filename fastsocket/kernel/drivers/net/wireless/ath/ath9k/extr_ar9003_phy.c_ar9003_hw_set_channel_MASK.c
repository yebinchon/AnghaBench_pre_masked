
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct chan_centers {int synth_center; } ;
struct ath_hw {struct ath9k_channel* curchan; scalar_t__ is_clk_25mhz; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int) ;
 int FUNC_8 (struct ath_hw*,int ,int) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;

__attribute__((used)) static int FUNC_10(struct ath_hw *VAR_4, struct ath9k_channel *VAR_5)
{
 u16 VAR_6, VAR_7 = 0, VAR_8 = 0;
 u32 VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0;
 struct chan_centers VAR_14;
 int VAR_15;

 FUNC_9(VAR_4, VAR_5, &VAR_14);
 VAR_9 = VAR_14.synth_center;

 if (VAR_9 < 4800) {
  if (FUNC_0(VAR_4)) {
   if (VAR_4->is_clk_25mhz)
    VAR_11 = 75;
   else
    VAR_11 = 120;

   VAR_12 = (VAR_9 * 4) / VAR_11;
   VAR_10 = (((VAR_9 * 4) % VAR_11) * 0x20000) / VAR_11;
   VAR_12 = (VAR_12 << 17) | VAR_10;
  } else if (FUNC_2(VAR_4) || FUNC_4(VAR_4)) {






   VAR_12 = (VAR_9 * 4) / 120;
   VAR_10 = (((VAR_9 * 4) % 120) * 0x20000) / 120;
   VAR_12 = (VAR_12 << 17) | VAR_10;
  } else if (FUNC_1(VAR_4)) {
   if (VAR_4->is_clk_25mhz) {
    VAR_12 = (VAR_9 * 2) / 75;
    VAR_10 = (((VAR_9 * 2) % 75) * 0x20000) / 75;
    VAR_12 = (VAR_12 << 17) | VAR_10;
   } else {
    VAR_12 = FUNC_5(VAR_9) >> 1;
   }
  } else if (FUNC_3(VAR_4)) {
   if (VAR_4->is_clk_25mhz)
    VAR_11 = 75;
   else
    VAR_11 = 120;

   VAR_12 = (VAR_9 * 4) / VAR_11;
   VAR_10 = (((VAR_9 * 4) % VAR_11) * 0x20000) / VAR_11;
   VAR_12 = (VAR_12 << 17) | VAR_10;
  } else {
   VAR_12 = FUNC_5(VAR_9);
  }

  VAR_6 = 1;
 } else {
  if ((FUNC_1(VAR_4) || FUNC_3(VAR_4)) &&
      VAR_4->is_clk_25mhz) {
   VAR_12 = VAR_9 / 75;
   VAR_10 = ((VAR_9 % 75) * 0x20000) / 75;
   VAR_12 = (VAR_12 << 17) | VAR_10;
  } else {
   VAR_12 = FUNC_6(VAR_9);

   VAR_12 >>= 1;
  }

  VAR_6 = 0;
 }


 VAR_7 = 1;
 VAR_8 = 0;
 VAR_15 = 0;

 VAR_13 = (VAR_6 << 29);
 FUNC_8(VAR_4, VAR_3, VAR_13);


 FUNC_7(VAR_4, VAR_0,
        VAR_2, 1);


 VAR_13 = (VAR_12 << 2) | (VAR_7 << 30) |
  (VAR_8 << 28) | (VAR_15 << 31);
 FUNC_8(VAR_4, VAR_1, VAR_13);


 VAR_15 = 1;
 VAR_13 = (VAR_12 << 2) | (VAR_7 << 30) |
  (VAR_8 << 28) | (VAR_15 << 31);
 FUNC_8(VAR_4, VAR_1, VAR_13);

 VAR_4->curchan = VAR_5;

 return 0;
}
