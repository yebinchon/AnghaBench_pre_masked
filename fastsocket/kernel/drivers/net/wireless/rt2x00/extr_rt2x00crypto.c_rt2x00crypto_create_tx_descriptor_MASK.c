
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txentry_desc {int flags; int iv_len; int header_length; int iv_offset; int key_idx; int cipher; } ;
struct sk_buff {int dummy; } ;
struct rt2x00_dev {int cap_flags; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int flags; int iv_len; int hw_key_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_key_conf*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct rt2x00_dev *VAR_8,
           struct sk_buff *VAR_9,
           struct txentry_desc *VAR_10)
{
 struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_9);
 struct ieee80211_key_conf *VAR_12 = VAR_11->control.hw_key;

 if (!FUNC_3(VAR_0, &VAR_8->cap_flags) || !VAR_12)
  return;

 FUNC_1(VAR_1, &VAR_10->flags);

 VAR_10->cipher = FUNC_2(VAR_12);

 if (VAR_12->flags & VAR_7)
  FUNC_1(VAR_4, &VAR_10->flags);

 VAR_10->key_idx = VAR_12->hw_key_idx;
 VAR_10->iv_offset = VAR_10->header_length;
 VAR_10->iv_len = VAR_12->iv_len;

 if (!(VAR_12->flags & VAR_5))
  FUNC_1(VAR_2, &VAR_10->flags);

 if (!(VAR_12->flags & VAR_6))
  FUNC_1(VAR_3, &VAR_10->flags);
}
