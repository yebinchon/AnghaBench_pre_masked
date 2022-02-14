
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_chain_num; int rx_chain_num; } ;
struct rt2x00_dev {int freq_offset; TYPE_1__ default_ant; } ;
struct rf_channel {int rf4; int rf2; int channel; int rf3; int rf1; } ;
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
 int FUNC_0 (struct ieee80211_conf*) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_11,
      struct ieee80211_conf *VAR_12,
      struct rf_channel *VAR_13,
      struct channel_info *VAR_14)
{
 FUNC_2(&VAR_13->rf4, VAR_6, VAR_11->freq_offset);

 if (VAR_11->default_ant.tx_chain_num == 1)
  FUNC_2(&VAR_13->rf2, VAR_2, 1);

 if (VAR_11->default_ant.rx_chain_num == 1) {
  FUNC_2(&VAR_13->rf2, VAR_0, 1);
  FUNC_2(&VAR_13->rf2, VAR_1, 1);
 } else if (VAR_11->default_ant.rx_chain_num == 2)
  FUNC_2(&VAR_13->rf2, VAR_1, 1);

 if (VAR_13->channel > 14) {






  FUNC_2(&VAR_13->rf3, VAR_4,
       (VAR_14->default_power1 >= 0));

  if (VAR_14->default_power1 < 0)
   VAR_14->default_power1 += 7;

  FUNC_2(&VAR_13->rf3, VAR_3, VAR_14->default_power1);

  FUNC_2(&VAR_13->rf4, VAR_9,
       (VAR_14->default_power2 >= 0));

  if (VAR_14->default_power2 < 0)
   VAR_14->default_power2 += 7;

  FUNC_2(&VAR_13->rf4, VAR_8, VAR_14->default_power2);
 } else {
  FUNC_2(&VAR_13->rf3, VAR_5, VAR_14->default_power1);
  FUNC_2(&VAR_13->rf4, VAR_10, VAR_14->default_power2);
 }

 FUNC_2(&VAR_13->rf4, VAR_7, FUNC_0(VAR_12));

 FUNC_1(VAR_11, 1, VAR_13->rf1);
 FUNC_1(VAR_11, 2, VAR_13->rf2);
 FUNC_1(VAR_11, 3, VAR_13->rf3 & ~0x00000004);
 FUNC_1(VAR_11, 4, VAR_13->rf4);

 FUNC_3(200);

 FUNC_1(VAR_11, 1, VAR_13->rf1);
 FUNC_1(VAR_11, 2, VAR_13->rf2);
 FUNC_1(VAR_11, 3, VAR_13->rf3 | 0x00000004);
 FUNC_1(VAR_11, 4, VAR_13->rf4);

 FUNC_3(200);

 FUNC_1(VAR_11, 1, VAR_13->rf1);
 FUNC_1(VAR_11, 2, VAR_13->rf2);
 FUNC_1(VAR_11, 3, VAR_13->rf3 & ~0x00000004);
 FUNC_1(VAR_11, 4, VAR_13->rf4);
}
