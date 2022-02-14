
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct TYPE_4__ {int tx_chain_num; int rx_chain_num; } ;
struct TYPE_3__ {int rf; } ;
struct rt2x00_dev {int lna_gain; int cap_flags; TYPE_2__ default_ant; TYPE_1__ chip; } ;
struct rf_channel {int channel; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {void* default_power2; void* default_power1; } ;


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
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (struct ieee80211_conf*) ;
 int FUNC_3 (struct ieee80211_conf*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int*) ;
 int FUNC_6 (struct rt2x00_dev*,int,int) ;
 int FUNC_7 (struct rt2x00_dev*,int,unsigned int) ;
 int FUNC_8 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_9 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_10 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_11 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_12 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_13 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_14 (struct rt2x00_dev*,struct ieee80211_conf*,struct rf_channel*,struct channel_info*) ;
 int FUNC_15 (struct rt2x00_dev*,int) ;
 int FUNC_16 (struct rt2x00_dev*,int ,unsigned int*) ;
 int FUNC_17 (struct rt2x00_dev*,int ,unsigned int) ;
 int FUNC_18 (struct rt2x00_dev*,int,int*) ;
 int FUNC_19 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_20 (struct rt2x00_dev*,int const) ;
 scalar_t__ FUNC_21 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_22 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_23 (unsigned int*,int ,int) ;
 int FUNC_24 (int*,int ,int) ;
 scalar_t__ FUNC_25 (int ,int *) ;

__attribute__((used)) static void FUNC_26(struct rt2x00_dev *VAR_34,
      struct ieee80211_conf *VAR_35,
      struct rf_channel *VAR_36,
      struct channel_info *VAR_37)
{
 u32 VAR_38;
 unsigned int VAR_39;
 u8 VAR_40, VAR_41;

 if (VAR_36->channel <= 14) {
  VAR_37->default_power1 = FUNC_1(VAR_37->default_power1);
  VAR_37->default_power2 = FUNC_1(VAR_37->default_power2);
 } else {
  VAR_37->default_power1 = FUNC_0(VAR_37->default_power1);
  VAR_37->default_power2 = FUNC_0(VAR_37->default_power2);
 }

 switch (VAR_34->chip.rf) {
 case 141:
 case 140:
 case 139:
 case 138:
 case 135:
  FUNC_12(VAR_34, VAR_35, VAR_36, VAR_37);
  break;
 case 137:
  FUNC_9(VAR_34, VAR_35, VAR_36, VAR_37);
  break;
 case 136:
  FUNC_10(VAR_34, VAR_35, VAR_36, VAR_37);
  break;
 case 134:
  FUNC_11(VAR_34, VAR_35, VAR_36, VAR_37);
  break;
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  FUNC_13(VAR_34, VAR_35, VAR_36, VAR_37);
  break;
 case 128:
  FUNC_14(VAR_34, VAR_35, VAR_36, VAR_37);
  break;
 default:
  FUNC_8(VAR_34, VAR_35, VAR_36, VAR_37);
 }

 if (FUNC_20(VAR_34, 136) ||
     FUNC_20(VAR_34, 134) ||
     FUNC_20(VAR_34, 133) ||
     FUNC_20(VAR_34, 132) ||
     FUNC_20(VAR_34, 131) ||
     FUNC_20(VAR_34, 130) ||
     FUNC_20(VAR_34, 129)) {
  FUNC_18(VAR_34, 30, &VAR_41);
  FUNC_24(&VAR_41, VAR_11, 0);
  FUNC_24(&VAR_41, VAR_10, 0);
  FUNC_19(VAR_34, 30, VAR_41);

  FUNC_18(VAR_34, 3, &VAR_41);
  FUNC_24(&VAR_41, VAR_12, 1);
  FUNC_19(VAR_34, 3, VAR_41);
 }




 if (FUNC_21(VAR_34, VAR_14)) {
  FUNC_6(VAR_34, 27, 0x0);
  FUNC_6(VAR_34, 66, 0x26 + VAR_34->lna_gain);
  FUNC_6(VAR_34, 27, 0x20);
  FUNC_6(VAR_34, 66, 0x26 + VAR_34->lna_gain);
 } else {
  FUNC_6(VAR_34, 62, 0x37 - VAR_34->lna_gain);
  FUNC_6(VAR_34, 63, 0x37 - VAR_34->lna_gain);
  FUNC_6(VAR_34, 64, 0x37 - VAR_34->lna_gain);
  FUNC_6(VAR_34, 86, 0);
 }

 if (VAR_36->channel <= 14) {
  if (!FUNC_21(VAR_34, VAR_16) &&
      !FUNC_21(VAR_34, VAR_17)) {
   if (FUNC_25(VAR_5,
         &VAR_34->cap_flags)) {
    FUNC_6(VAR_34, 82, 0x62);
    FUNC_6(VAR_34, 75, 0x46);
   } else {
    FUNC_6(VAR_34, 82, 0x84);
    FUNC_6(VAR_34, 75, 0x50);
   }
  }
 } else {
  if (FUNC_21(VAR_34, VAR_15))
   FUNC_6(VAR_34, 82, 0x94);
  else
   FUNC_6(VAR_34, 82, 0xf2);

  if (FUNC_25(VAR_4, &VAR_34->cap_flags))
   FUNC_6(VAR_34, 75, 0x46);
  else
   FUNC_6(VAR_34, 75, 0x50);
 }

 FUNC_16(VAR_34, VAR_19, &VAR_38);
 FUNC_23(&VAR_38, VAR_22, FUNC_3(VAR_35));
 FUNC_23(&VAR_38, VAR_20, VAR_36->channel > 14);
 FUNC_23(&VAR_38, VAR_21, VAR_36->channel <= 14);
 FUNC_17(VAR_34, VAR_19, VAR_38);

 if (FUNC_21(VAR_34, VAR_15))
  FUNC_19(VAR_34, 8, 0);

 VAR_39 = 0;


 if (VAR_34->default_ant.tx_chain_num == 2) {
  FUNC_23(&VAR_39, VAR_29,
       VAR_36->channel > 14);
  FUNC_23(&VAR_39, VAR_31,
       VAR_36->channel <= 14);
 }


 if (VAR_34->default_ant.rx_chain_num == 2) {
  FUNC_23(&VAR_39, VAR_25, 1);
  FUNC_23(&VAR_39, VAR_27, 1);
 }

 FUNC_23(&VAR_39, VAR_24, 1);
 FUNC_23(&VAR_39, VAR_26, 1);
 FUNC_23(&VAR_39, VAR_32, 1);
 FUNC_23(&VAR_39, VAR_33, 1);
 if (FUNC_25(VAR_3, &VAR_34->cap_flags))
  FUNC_23(&VAR_39, VAR_30, 1);
 else
  FUNC_23(&VAR_39, VAR_30,
       VAR_36->channel <= 14);
 FUNC_23(&VAR_39, VAR_28, VAR_36->channel > 14);

 FUNC_17(VAR_34, VAR_23, VAR_39);

 if (FUNC_21(VAR_34, VAR_15))
  FUNC_19(VAR_34, 8, 0x80);

 if (FUNC_21(VAR_34, VAR_18)) {
  FUNC_6(VAR_34, 195, 141);
  FUNC_6(VAR_34, 196, FUNC_2(VAR_35) ? 0x10 : 0x1a);


  VAR_38 = (VAR_36->channel <= 14 ? 0x1c : 0x24) + 2 * VAR_34->lna_gain;
  FUNC_7(VAR_34, 66, VAR_38);

  FUNC_15(VAR_34, VAR_36->channel);
 }

 FUNC_5(VAR_34, 4, &VAR_40);
 FUNC_24(&VAR_40, VAR_2, 2 * FUNC_2(VAR_35));
 FUNC_6(VAR_34, 4, VAR_40);

 FUNC_5(VAR_34, 3, &VAR_40);
 FUNC_24(&VAR_40, VAR_0, FUNC_3(VAR_35));
 FUNC_6(VAR_34, 3, VAR_40);

 if (FUNC_22(VAR_34, VAR_13, VAR_9)) {
  if (FUNC_2(VAR_35)) {
   FUNC_6(VAR_34, 69, 0x1a);
   FUNC_6(VAR_34, 70, 0x0a);
   FUNC_6(VAR_34, 73, 0x16);
  } else {
   FUNC_6(VAR_34, 69, 0x16);
   FUNC_6(VAR_34, 70, 0x08);
   FUNC_6(VAR_34, 73, 0x11);
  }
 }

 FUNC_4(1);




 FUNC_16(VAR_34, VAR_8, &VAR_38);
 FUNC_16(VAR_34, VAR_6, &VAR_38);
 FUNC_16(VAR_34, VAR_7, &VAR_38);




 if (FUNC_21(VAR_34, VAR_14)) {
  FUNC_5(VAR_34, 49, &VAR_40);
  FUNC_24(&VAR_40, VAR_1, 0);
  FUNC_6(VAR_34, 49, VAR_40);
 }
}
