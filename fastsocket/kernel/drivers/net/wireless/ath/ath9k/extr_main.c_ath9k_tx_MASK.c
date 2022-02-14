
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath_tx_control {TYPE_3__* txq; int sta; } ;
struct TYPE_7__ {TYPE_3__** txq_map; } ;
struct ath_softc {TYPE_2__ tx; TYPE_4__* sc_ah; int sc_pm_lock; int ps_flags; scalar_t__ ps_enabled; } ;
struct ath_common {int dummy; } ;
struct TYPE_6__ {int hw_caps; } ;
struct TYPE_9__ {scalar_t__ power_mode; TYPE_1__ caps; } ;
struct TYPE_8__ {int axq_qnum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 struct ath_common* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_common*,int ,char*,...) ;
 int FUNC_6 (struct ath_common*,char*) ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*,struct sk_buff*,struct ath_tx_control*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ath_tx_control*,int ,int) ;
 size_t FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int VAR_8 ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_9,
       struct ieee80211_tx_control *VAR_10,
       struct sk_buff *VAR_11)
{
 struct ath_softc *VAR_12 = VAR_9->priv;
 struct ath_common *VAR_13 = FUNC_1(VAR_12->sc_ah);
 struct ath_tx_control VAR_14;
 struct ieee80211_hdr *VAR_15 = (struct ieee80211_hdr *) VAR_11->data;
 unsigned long VAR_16;

 if (VAR_12->ps_enabled) {




  if (FUNC_11(VAR_15->frame_control) &&
      !FUNC_12(VAR_15->frame_control) &&
      !FUNC_10(VAR_15->frame_control)) {
   FUNC_5(VAR_13, VAR_4,
    "Add PM=1 for a TX frame while in PS mode\n");
   VAR_15->frame_control |= FUNC_8(VAR_3);
  }
 }

 if (FUNC_18(VAR_12->sc_ah->power_mode == VAR_2)) {





  FUNC_4(VAR_12);
  FUNC_16(&VAR_12->sc_pm_lock, VAR_16);
  if (!(VAR_12->sc_ah->caps.hw_caps & VAR_0))
   FUNC_2(VAR_12->sc_ah, 0);
  if (FUNC_13(VAR_15->frame_control)) {
   FUNC_5(VAR_13, VAR_4,
    "Sending PS-Poll to pick a buffered frame\n");
   VAR_12->ps_flags |= VAR_5;
  } else {
   FUNC_5(VAR_13, VAR_4, "Wake up to complete TX\n");
   VAR_12->ps_flags |= VAR_6;
  }





  FUNC_17(&VAR_12->sc_pm_lock, VAR_16);
  FUNC_3(VAR_12);
 }





 if (FUNC_18(VAR_12->sc_ah->power_mode == VAR_1)) {
  FUNC_6(VAR_13, "TX while HW is in FULL_SLEEP mode\n");
  goto exit;
 }

 FUNC_14(&VAR_14, 0, sizeof(struct ath_tx_control));
 VAR_14.txq = VAR_12->tx.txq_map[FUNC_15(VAR_11)];
 VAR_14.sta = VAR_10->sta;

 FUNC_5(VAR_13, VAR_7, "transmitting packet, skb: %p\n", VAR_11);

 if (FUNC_7(VAR_9, VAR_11, &VAR_14) != 0) {
  FUNC_5(VAR_13, VAR_7, "TX failed\n");
  FUNC_0(VAR_14.txq->axq_qnum, VAR_8);
  goto exit;
 }

 return;
exit:
 FUNC_9(VAR_9, VAR_11);
}
