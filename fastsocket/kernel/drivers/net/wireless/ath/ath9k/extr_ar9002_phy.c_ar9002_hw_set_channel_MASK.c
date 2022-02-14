
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct chan_centers {int synth_center; } ;
struct ath_hw {struct ath9k_channel* curchan; TYPE_1__* eep_ops; int iniCckfirNormal; int iniCckfirJapan2484; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (struct ath_hw*,int ,int ,int ,int) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_10 (struct ath_hw*,int ) ;

__attribute__((used)) static int FUNC_11(struct ath_hw *VAR_7, struct ath9k_channel *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 struct chan_centers VAR_17;
 u32 VAR_18 = 24;

 FUNC_9(VAR_7, VAR_8, &VAR_17);
 VAR_12 = VAR_17.synth_center;

 VAR_16 = FUNC_5(VAR_7, VAR_5);
 VAR_16 &= 0xc0000000;

 if (VAR_12 < 4800) {
  u32 VAR_19;
  int VAR_20 = 0;

  VAR_9 = 1;
  VAR_10 = 1;
  VAR_11 = 0;
  VAR_14 = FUNC_1(VAR_12);

  if (FUNC_0(VAR_7)) {
   if (VAR_12 == 2484) {

    FUNC_7(&VAR_7->iniCckfirJapan2484,
      1, VAR_20);
   } else {
    FUNC_7(&VAR_7->iniCckfirNormal,
      1, VAR_20);
   }
  } else {
   VAR_19 = FUNC_5(VAR_7, VAR_3);
   if (VAR_12 == 2484) {

    FUNC_6(VAR_7, VAR_3,
       VAR_19 | VAR_4);
   } else {
    FUNC_6(VAR_7, VAR_3,
       VAR_19 & ~VAR_4);
   }
  }
 } else {
  VAR_9 = 0;
  VAR_10 = 0;

  switch (VAR_7->eep_ops->get_eeprom(VAR_7, VAR_6)) {
  case 0:
   if (FUNC_3(VAR_8) || FUNC_4(VAR_8))
    VAR_11 = 0;
   else if ((VAR_12 % 20) == 0)
    VAR_11 = 3;
   else if ((VAR_12 % 10) == 0)
    VAR_11 = 2;
   if (VAR_11)
    break;
  case 1:
  default:
   VAR_11 = 0;




   VAR_10 = 1;
   VAR_18 = 1;
   VAR_14 = FUNC_2(VAR_12);


   FUNC_8(VAR_7, VAR_0,
          VAR_1,
          VAR_2, VAR_18);

  }

  if (!VAR_10) {
   VAR_13 = (VAR_12 * (VAR_18 >> VAR_11)) / 60;
   VAR_14 = VAR_13 & 0x1ff;
   VAR_15 = (VAR_13 & 0xfffffe00) * 2;
   VAR_14 = (VAR_14 << 17) | VAR_15;
  }
 }

 VAR_16 = VAR_16 |
     (VAR_9 << 29) |
     (VAR_10 << 28) | (VAR_11 << 26) | (VAR_14);

 FUNC_6(VAR_7, VAR_5, VAR_16);

 VAR_7->curchan = VAR_8;

 return 0;
}
