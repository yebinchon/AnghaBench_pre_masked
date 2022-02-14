
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rt2x00_dev {int cap_flags; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int flags; scalar_t__ cipher; scalar_t__ iv_len; scalar_t__ icv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;

unsigned int FUNC_2(struct rt2x00_dev *VAR_4,
          struct sk_buff *VAR_5)
{
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_5);
 struct ieee80211_key_conf *VAR_7 = VAR_6->control.hw_key;
 unsigned int VAR_8 = 0;

 if (!FUNC_1(VAR_0, &VAR_4->cap_flags) || !VAR_7)
  return VAR_8;






 VAR_8 += VAR_7->icv_len;

 if (!(VAR_7->flags & VAR_1))
  VAR_8 += VAR_7->iv_len;

 if (!(VAR_7->flags & VAR_2)) {
  if (VAR_7->cipher == VAR_3)
   VAR_8 += 8;
 }

 return VAR_8;
}
