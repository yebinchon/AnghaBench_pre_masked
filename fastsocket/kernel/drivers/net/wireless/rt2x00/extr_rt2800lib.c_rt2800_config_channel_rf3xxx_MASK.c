
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rx_chain_num; int tx_chain_num; } ;
struct rt2x00_dev {int freq_offset; TYPE_1__ default_ant; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int calibration_bw40; int calibration_bw20; } ;
struct rf_channel {int rf1; int rf3; int rf2; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {int default_power1; int default_power2; } ;


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
 scalar_t__ FUNC_0 (struct ieee80211_conf*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int*) ;
 int FUNC_3 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_16,
      struct ieee80211_conf *VAR_17,
      struct rf_channel *VAR_18,
      struct channel_info *VAR_19)
{
 struct rt2800_drv_data *VAR_20 = VAR_16->drv_data;
 u8 VAR_21, VAR_22, VAR_23;

 FUNC_3(VAR_16, 2, VAR_18->rf1);

 FUNC_2(VAR_16, 3, &VAR_21);
 FUNC_5(&VAR_21, VAR_12, VAR_18->rf3);
 FUNC_3(VAR_16, 3, VAR_21);

 FUNC_2(VAR_16, 6, &VAR_21);
 FUNC_5(&VAR_21, VAR_13, VAR_18->rf2);
 FUNC_3(VAR_16, 6, VAR_21);

 FUNC_2(VAR_16, 12, &VAR_21);
 FUNC_5(&VAR_21, VAR_0, VAR_19->default_power1);
 FUNC_3(VAR_16, 12, VAR_21);

 FUNC_2(VAR_16, 13, &VAR_21);
 FUNC_5(&VAR_21, VAR_1, VAR_19->default_power2);
 FUNC_3(VAR_16, 13, VAR_21);

 FUNC_2(VAR_16, 1, &VAR_21);
 FUNC_5(&VAR_21, VAR_2, 0);
 FUNC_5(&VAR_21, VAR_3,
     VAR_16->default_ant.rx_chain_num <= 1);
 FUNC_5(&VAR_21, VAR_4,
     VAR_16->default_ant.rx_chain_num <= 2);
 FUNC_5(&VAR_21, VAR_5, 0);
 FUNC_5(&VAR_21, VAR_6,
     VAR_16->default_ant.tx_chain_num <= 1);
 FUNC_5(&VAR_21, VAR_7,
     VAR_16->default_ant.tx_chain_num <= 2);
 FUNC_3(VAR_16, 1, VAR_21);

 FUNC_2(VAR_16, 30, &VAR_21);
 FUNC_5(&VAR_21, VAR_10, 1);
 FUNC_3(VAR_16, 30, VAR_21);
 FUNC_1(1);
 FUNC_5(&VAR_21, VAR_10, 0);
 FUNC_3(VAR_16, 30, VAR_21);

 FUNC_2(VAR_16, 23, &VAR_21);
 FUNC_5(&VAR_21, VAR_8, VAR_16->freq_offset);
 FUNC_3(VAR_16, 23, VAR_21);

 if (FUNC_4(VAR_16, VAR_15)) {
  VAR_22 = FUNC_0(VAR_17) ? 0x68 : 0x4f;
  VAR_23 = FUNC_0(VAR_17) ? 0x6f : 0x4f;
 } else {
  if (FUNC_0(VAR_17)) {
   VAR_22 = VAR_20->calibration_bw40;
   VAR_23 = VAR_20->calibration_bw40;
  } else {
   VAR_22 = VAR_20->calibration_bw20;
   VAR_23 = VAR_20->calibration_bw20;
  }
 }

 FUNC_2(VAR_16, 24, &VAR_21);
 FUNC_5(&VAR_21, VAR_9, VAR_22);
 FUNC_3(VAR_16, 24, VAR_21);

 FUNC_2(VAR_16, 31, &VAR_21);
 FUNC_5(&VAR_21, VAR_11, VAR_23);
 FUNC_3(VAR_16, 31, VAR_21);

 FUNC_2(VAR_16, 7, &VAR_21);
 FUNC_5(&VAR_21, VAR_14, 1);
 FUNC_3(VAR_16, 7, VAR_21);

 FUNC_2(VAR_16, 30, &VAR_21);
 FUNC_5(&VAR_21, VAR_10, 1);
 FUNC_3(VAR_16, 30, VAR_21);
 FUNC_1(1);
 FUNC_5(&VAR_21, VAR_10, 0);
 FUNC_3(VAR_16, 30, VAR_21);
}
