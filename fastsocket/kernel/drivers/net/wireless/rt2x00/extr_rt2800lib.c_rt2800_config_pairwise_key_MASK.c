
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_crypto {scalar_t__ cmd; scalar_t__ wcid; int rx_mic; int tx_mic; int key; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ hw_key_idx; } ;
struct hw_key_entry {int rx_mic; int tx_mic; int key; } ;
typedef int key_entry ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,struct rt2x00lib_crypto*,struct ieee80211_key_conf*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct hw_key_entry*,int) ;

int FUNC_4(struct rt2x00_dev *VAR_2,
          struct rt2x00lib_crypto *VAR_3,
          struct ieee80211_key_conf *VAR_4)
{
 struct hw_key_entry VAR_5;
 u32 VAR_6;

 if (VAR_3->cmd == VAR_1) {




  if (VAR_3->wcid < 0)
   return -VAR_0;
  VAR_4->hw_key_idx = VAR_3->wcid;

  FUNC_1(VAR_5.key, VAR_3->key,
         sizeof(VAR_5.key));
  FUNC_1(VAR_5.tx_mic, VAR_3->tx_mic,
         sizeof(VAR_5.tx_mic));
  FUNC_1(VAR_5.rx_mic, VAR_3->rx_mic,
         sizeof(VAR_5.rx_mic));

  VAR_6 = FUNC_0(VAR_4->hw_key_idx);
  FUNC_3(VAR_2, VAR_6,
           &VAR_5, sizeof(VAR_5));
 }




 FUNC_2(VAR_2, VAR_3, VAR_4);

 return 0;
}
