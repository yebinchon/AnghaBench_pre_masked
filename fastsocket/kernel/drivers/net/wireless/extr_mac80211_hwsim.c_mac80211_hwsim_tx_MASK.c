
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mac80211_hwsim_data {struct ieee80211_channel* tmp_chan; scalar_t__ idle; struct ieee80211_channel* channel; } ;
struct TYPE_8__ {TYPE_4__* rates; TYPE_3__* vif; } ;
struct ieee80211_tx_info {int hw_queue; int flags; TYPE_2__ control; struct ieee80211_channel** rate_driver_data; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;
struct ieee80211_hdr {int addr2; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_7__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_1__ def; } ;
struct TYPE_10__ {int count; int idx; } ;
struct TYPE_9__ {int chanctx_conf; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ,struct sk_buff*,TYPE_4__*,int ) ;
 int FUNC_9 (struct ieee80211_tx_info*) ;
 int FUNC_10 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_11 (struct ieee80211_channel*,int ) ;
 int FUNC_12 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 void FUNC_13 (struct ieee80211_hw*,struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 scalar_t__ VAR_3 ;
 struct ieee80211_chanctx_conf* FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_5,
         struct ieee80211_tx_control *VAR_6,
         struct sk_buff *VAR_7)
{
 struct mac80211_hwsim_data *VAR_8 = VAR_5->priv;
 struct ieee80211_tx_info *VAR_9 = FUNC_2(VAR_7);
 struct ieee80211_chanctx_conf *VAR_10;
 struct ieee80211_channel *VAR_11;
 bool VAR_12;
 u32 VAR_13;

 if (FUNC_4(VAR_7->len < 10)) {

  FUNC_5(VAR_7);
  return;
 }

 if (VAR_2 == 1) {
  VAR_11 = VAR_8->channel;
 } else if (VAR_9->hw_queue == 4) {
  VAR_11 = VAR_8->tmp_chan;
 } else {
  VAR_10 = FUNC_15(VAR_9->control.vif->chanctx_conf);
  if (VAR_10)
   VAR_11 = VAR_10->def.chan;
  else
   VAR_11 = ((void*)0);
 }

 if (FUNC_3(!VAR_11, "TX w/o channel - queue = %d\n", VAR_9->hw_queue)) {
  FUNC_5(VAR_7);
  return;
 }

 if (VAR_8->idle && !VAR_8->tmp_chan) {
  FUNC_16(VAR_5->wiphy, "Trying to TX when idle - reject\n");
  FUNC_5(VAR_7);
  return;
 }

 if (VAR_9->control.vif)
  FUNC_6(VAR_9->control.vif);
 if (VAR_6->sta)
  FUNC_7(VAR_6->sta);

 if (VAR_3)
  FUNC_8(VAR_9->control.vif, VAR_6->sta, VAR_7,
           VAR_9->control.rates,
           FUNC_1(VAR_9->control.rates));

 VAR_9->rate_driver_data[0] = VAR_11;
 FUNC_12(VAR_5, VAR_7, VAR_11);


 VAR_13 = FUNC_0(VAR_4);

 if (VAR_13)
  return FUNC_13(VAR_5, VAR_7, VAR_13);


 VAR_12 = FUNC_14(VAR_5, VAR_7, VAR_11);

 if (VAR_12 && VAR_7->len >= 16) {
  struct ieee80211_hdr *VAR_14 = (struct ieee80211_hdr *) VAR_7->data;
  FUNC_11(VAR_11, VAR_14->addr2);
 }

 FUNC_9(VAR_9);


 VAR_9->control.rates[0].count = 1;
 VAR_9->control.rates[1].idx = -1;

 if (!(VAR_9->flags & VAR_0) && VAR_12)
  VAR_9->flags |= VAR_1;
 FUNC_10(VAR_5, VAR_7);
}
