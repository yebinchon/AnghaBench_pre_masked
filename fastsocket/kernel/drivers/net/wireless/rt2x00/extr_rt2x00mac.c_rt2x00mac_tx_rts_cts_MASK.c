
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; int cb; } ;
struct rt2x00_dev {TYPE_3__* hw; } ;
struct TYPE_6__ {int vif; TYPE_1__* rates; int * hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; int flags; } ;
struct ieee80211_rts {int dummy; } ;
struct ieee80211_cts {int dummy; } ;
struct data_queue {int dummy; } ;
struct TYPE_7__ {scalar_t__ extra_tx_headroom; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_3__*,int ,scalar_t__,unsigned int,struct ieee80211_tx_info*,struct ieee80211_cts*) ;
 int FUNC_4 (TYPE_3__*,int ,scalar_t__,unsigned int,struct ieee80211_tx_info*,struct ieee80211_rts*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,struct sk_buff*) ;
 int FUNC_8 (struct data_queue*,struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,unsigned int) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct rt2x00_dev *VAR_4,
    struct data_queue *VAR_5,
    struct sk_buff *VAR_6)
{
 struct ieee80211_tx_info *VAR_7 = FUNC_0(VAR_6);
 struct ieee80211_tx_info *VAR_8;
 struct sk_buff *VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;

 if (VAR_7->control.rates[0].flags & VAR_2)
  VAR_10 = sizeof(struct ieee80211_cts);
 else
  VAR_10 = sizeof(struct ieee80211_rts);

 VAR_9 = FUNC_1(VAR_10 + VAR_4->hw->extra_tx_headroom);
 if (FUNC_11(!VAR_9)) {
  FUNC_6(VAR_4, "Failed to create RTS/CTS frame\n");
  return -VAR_0;
 }

 FUNC_10(VAR_9, VAR_4->hw->extra_tx_headroom);
 FUNC_9(VAR_9, VAR_10);
 FUNC_5(VAR_9->cb, VAR_6->cb, sizeof(VAR_9->cb));
 VAR_8 = FUNC_0(VAR_9);
 VAR_8->control.rates[0].flags &= ~VAR_3;
 VAR_8->control.rates[0].flags &= ~VAR_2;

 if (VAR_7->control.rates[0].flags & VAR_2)
  VAR_8->flags |= VAR_1;
 else
  VAR_8->flags &= ~VAR_1;


 VAR_8->control.hw_key = ((void*)0);





 VAR_10 += FUNC_7(VAR_4, VAR_9);

 if (VAR_7->control.rates[0].flags & VAR_2)
  FUNC_3(VAR_4->hw, VAR_7->control.vif,
     VAR_6->data, VAR_10, VAR_7,
     (struct ieee80211_cts *)(VAR_9->data));
 else
  FUNC_4(VAR_4->hw, VAR_7->control.vif,
      VAR_6->data, VAR_10, VAR_7,
      (struct ieee80211_rts *)(VAR_9->data));

 VAR_11 = FUNC_8(VAR_5, VAR_9, 1);
 if (VAR_11) {
  FUNC_2(VAR_9);
  FUNC_6(VAR_4, "Failed to send RTS/CTS frame\n");
 }

 return VAR_11;
}
