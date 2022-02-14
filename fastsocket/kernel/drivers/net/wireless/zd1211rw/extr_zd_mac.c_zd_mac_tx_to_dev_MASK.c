
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct zd_mac {scalar_t__ ack_pending; int ack_signal; struct sk_buff_head ack_wait_queue; } ;
struct zd_ctrlset {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; struct ieee80211_hw** rate_driver_data; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 struct zd_mac* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int ,int ,int *) ;

void FUNC_10(struct sk_buff *VAR_2, int VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_2);
 struct ieee80211_hw *VAR_5 = VAR_4->rate_driver_data[0];
 struct zd_mac *VAR_6 = FUNC_8(VAR_5);

 FUNC_1(VAR_4);

 FUNC_4(VAR_2, sizeof(struct zd_ctrlset));
 if (FUNC_7(VAR_3 ||
     (VAR_4->flags & VAR_0))) {



  FUNC_2(VAR_5, VAR_2);
 } else {
  struct sk_buff_head *VAR_7 = &VAR_6->ack_wait_queue;

  FUNC_6(VAR_7, VAR_2);
  while (FUNC_5(VAR_7) > VAR_1) {
   FUNC_9(VAR_5, FUNC_3(VAR_7),
      VAR_6->ack_pending ? VAR_6->ack_signal : 0,
      ((void*)0));
   VAR_6->ack_pending = 0;
  }
 }
}
