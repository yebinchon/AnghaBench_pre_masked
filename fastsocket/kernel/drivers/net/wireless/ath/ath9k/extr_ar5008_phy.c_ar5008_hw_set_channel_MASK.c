
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct chan_centers {int synth_center; } ;
struct ath_hw {struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_2 ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*,int) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct ath_common*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct ath_hw *VAR_3, struct ath9k_channel *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u16 VAR_10;
 struct chan_centers VAR_11;

 FUNC_7(VAR_3, VAR_4, &VAR_11);
 VAR_10 = VAR_11.synth_center;

 if (VAR_10 < 4800) {
  u32 VAR_12;

  if (((VAR_10 - 2192) % 5) == 0) {
   VAR_6 = ((VAR_10 - 672) * 2 - 3040) / 10;
   VAR_7 = 0;
  } else if (((VAR_10 - 2224) % 5) == 0) {
   VAR_6 = ((VAR_10 - 704) * 2 - 3040) / 10;
   VAR_7 = 1;
  } else {
   FUNC_9(VAR_5, "Invalid channel %u MHz\n", VAR_10);
   return -VAR_2;
  }

  VAR_6 = (VAR_6 << 2) & 0xff;
  VAR_6 = FUNC_8(VAR_6, 8);

  VAR_12 = FUNC_3(VAR_3, VAR_0);
  if (VAR_10 == 2484) {

   FUNC_4(VAR_3, VAR_0,
      VAR_12 | VAR_1);
  } else {
   FUNC_4(VAR_3, VAR_0,
      VAR_12 & ~VAR_1);
  }

 } else if ((VAR_10 % 20) == 0 && VAR_10 >= 5120) {
  VAR_6 =
      FUNC_8(((VAR_10 - 4800) / 20 << 2), 8);
  VAR_8 = FUNC_8(1, 2);
 } else if ((VAR_10 % 10) == 0) {
  VAR_6 =
      FUNC_8(((VAR_10 - 4800) / 10 << 1), 8);
  if (FUNC_1(VAR_3) || FUNC_2(VAR_3))
   VAR_8 = FUNC_8(2, 2);
  else
   VAR_8 = FUNC_8(1, 2);
 } else if ((VAR_10 % 5) == 0) {
  VAR_6 = FUNC_8((VAR_10 - 4800) / 5, 8);
  VAR_8 = FUNC_8(1, 2);
 } else {
  FUNC_9(VAR_5, "Invalid channel %u MHz\n", VAR_10);
  return -VAR_2;
 }

 FUNC_5(VAR_3, VAR_10);

 VAR_9 =
     (VAR_6 << 8) | (VAR_8 << 2) | (VAR_7 << 1) |
     (1 << 5) | 0x1;

 FUNC_4(VAR_3, FUNC_0(0x37), VAR_9);

 VAR_3->curchan = VAR_4;

 return 0;
}
