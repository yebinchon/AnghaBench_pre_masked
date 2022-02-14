
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_chain_num; int rx_chain_num; } ;
struct rt2x00_dev {TYPE_1__ default_ant; } ;
struct rf_channel {int rf1; int rf3; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {int default_power1; int default_power2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int,int*) ;
 int FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_7,
      struct ieee80211_conf *VAR_8,
      struct rf_channel *VAR_9,
      struct channel_info *VAR_10)
{
 u8 VAR_11;

 FUNC_2(VAR_7, 8, VAR_9->rf1);
 FUNC_2(VAR_7, 9, VAR_9->rf3);

 FUNC_2(VAR_7, 11, 0x42);
 FUNC_2(VAR_7, 12, 0x1c);
 FUNC_2(VAR_7, 13, 0x00);

 if (VAR_10->default_power1 > VAR_0)
  FUNC_2(VAR_7, 47, VAR_0);
 else
  FUNC_2(VAR_7, 47, VAR_10->default_power1);

 if (VAR_10->default_power2 > VAR_0)
  FUNC_2(VAR_7, 48, VAR_0);
 else
  FUNC_2(VAR_7, 48, VAR_10->default_power2);

 FUNC_0(VAR_7);

 FUNC_1(VAR_7, 1, &VAR_11);
 FUNC_3(&VAR_11, VAR_1, 1);
 FUNC_3(&VAR_11, VAR_4, 1);

 if ( VAR_7->default_ant.tx_chain_num == 2 )
  FUNC_3(&VAR_11, VAR_5, 1);
 else
  FUNC_3(&VAR_11, VAR_5, 0);

 if ( VAR_7->default_ant.rx_chain_num == 2 )
  FUNC_3(&VAR_11, VAR_2, 1);
 else
  FUNC_3(&VAR_11, VAR_2, 0);

 FUNC_3(&VAR_11, VAR_3, 0);
 FUNC_3(&VAR_11, VAR_6, 0);

 FUNC_2(VAR_7, 1, VAR_11);

 FUNC_2(VAR_7, 31, 80);
}
