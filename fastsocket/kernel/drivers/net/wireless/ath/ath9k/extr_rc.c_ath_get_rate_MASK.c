
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_rate_control {struct sk_buff* skb; } ;
struct ieee80211_tx_rate {scalar_t__ count; scalar_t__ idx; int flags; } ;
struct TYPE_8__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct TYPE_9__ {int cap; } ;
struct ieee80211_sta {TYPE_2__ ht_cap; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
struct ath_softc {TYPE_5__* hw; } ;
struct ath_rate_table {TYPE_6__* info; } ;
struct ath_rate_priv {struct ath_rate_table* rate_table; } ;
typedef int __le16 ;
struct TYPE_11__ {TYPE_3__* chan; } ;
struct TYPE_14__ {TYPE_4__ chandef; } ;
struct TYPE_13__ {int dot11rate; int phy; } ;
struct TYPE_12__ {TYPE_7__ conf; } ;
struct TYPE_10__ {scalar_t__ band; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ath_rate_priv*,int*) ;
 int FUNC_2 (struct ath_rate_priv*,int,int*) ;
 int FUNC_3 (struct ath_softc*,struct ath_rate_table const*,struct ieee80211_tx_info*) ;
 int FUNC_4 (struct ath_rate_table const*,struct ieee80211_tx_rate*,struct ieee80211_tx_rate_control*,int,int,int) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;

__attribute__((used)) static void FUNC_9(void *VAR_10, struct ieee80211_sta *VAR_11, void *VAR_12,
    struct ieee80211_tx_rate_control *VAR_13)
{
 struct ath_softc *VAR_14 = VAR_10;
 struct ath_rate_priv *VAR_15 = VAR_12;
 const struct ath_rate_table *VAR_16;
 struct sk_buff *VAR_17 = VAR_13->skb;
 struct ieee80211_tx_info *VAR_18 = FUNC_0(VAR_17);
 struct ieee80211_tx_rate *VAR_19 = VAR_18->control.rates;
 struct ieee80211_hdr *VAR_20 = (struct ieee80211_hdr *)VAR_17->data;
 __le16 VAR_21 = VAR_20->frame_control;
 u8 VAR_22, VAR_23 = 0, VAR_24;
 int VAR_25 = 0;

 if (FUNC_8(VAR_11, VAR_12, VAR_13))
  return;
 VAR_22 = 4;

 VAR_16 = VAR_15->rate_table;
 VAR_24 = FUNC_1(VAR_15, &VAR_25);

 if (FUNC_5(&VAR_14->hw->conf) &&
     (VAR_11->ht_cap.cap & VAR_2))
  VAR_18->flags |= VAR_5;

 if (FUNC_5(&VAR_14->hw->conf) &&
     (VAR_11->ht_cap.cap & VAR_3))
  VAR_18->flags |= (1 << VAR_7);

 if (VAR_25) {




  FUNC_4(VAR_16, &VAR_19[VAR_23++], VAR_13,
           1, VAR_24, 0);




  FUNC_2(VAR_15, VAR_24, &VAR_24);
  FUNC_4(VAR_16, &VAR_19[VAR_23++], VAR_13,
           VAR_22, VAR_24, 0);

  VAR_18->flags |= VAR_6;
 } else {



  FUNC_4(VAR_16, &VAR_19[VAR_23++], VAR_13,
           VAR_22, VAR_24, 0);
 }

 for ( ; VAR_23 < 4; VAR_23++) {



  if (VAR_23 + 1 == 4)
   VAR_22 = 8;

  FUNC_2(VAR_15, VAR_24, &VAR_24);




  FUNC_4(VAR_16, &VAR_19[VAR_23], VAR_13,
           VAR_22, VAR_24, 1);
 }
 if ((VAR_14->hw->conf.chandef.chan->band == VAR_1) &&
     (FUNC_5(&VAR_14->hw->conf))) {
  u8 VAR_26 = VAR_16->info[VAR_24].dot11rate;
  u8 VAR_27 = VAR_16->info[VAR_24].phy;
  if (VAR_23 == 4 &&
      ((VAR_26 == 2 && VAR_27 == VAR_9) ||
       (VAR_26 == 3 && VAR_27 == VAR_8))) {
   VAR_19[3].idx = VAR_19[2].idx;
   VAR_19[3].flags = VAR_19[2].flags;
  }
 }
 if (FUNC_6(VAR_21) ||
     (FUNC_7(VAR_20->seq_ctrl) & VAR_4)) {
  VAR_19[1].count = VAR_19[2].count = VAR_19[3].count = 0;
  VAR_19[1].idx = VAR_19[2].idx = VAR_19[3].idx = 0;
  VAR_19[0].count = VAR_0;
 }

 FUNC_3(VAR_14, VAR_16, VAR_18);
}
