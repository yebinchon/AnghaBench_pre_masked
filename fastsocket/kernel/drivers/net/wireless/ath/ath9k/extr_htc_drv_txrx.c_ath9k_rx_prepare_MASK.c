
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
struct sk_buff {scalar_t__ len; int* data; } ;
struct ieee80211_rx_status {scalar_t__ signal; int flag; int antenna; int freq; int band; int mactime; } ;
struct TYPE_11__ {TYPE_3__* chan; } ;
struct TYPE_12__ {TYPE_4__ chandef; } ;
struct ieee80211_hw {TYPE_5__ conf; } ;
struct ieee80211_hdr {int addr3; int frame_control; } ;
struct ath_htc_rx_status {int rs_datalen; } ;
struct ath_common {int curbssid; int keymap; } ;
struct TYPE_13__ {int rs_status; int rs_keyix; scalar_t__ rs_rssi; int rs_antenna; int rs_tstamp; int rs_moreaggr; int rs_flags; int rs_rate; } ;
struct ath9k_htc_rxbuf {TYPE_6__ rxstatus; struct sk_buff* skb; } ;
struct TYPE_8__ {int last_rssi; } ;
struct ath9k_htc_priv {TYPE_7__* ah; TYPE_1__ rx; struct ieee80211_hw* hw; } ;
typedef scalar_t__ s8 ;
typedef int __le16 ;
struct TYPE_9__ {scalar_t__ avgbrssi; } ;
struct TYPE_14__ {scalar_t__ opmode; TYPE_2__ stats; } ;
struct TYPE_10__ {int center_freq; int band; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ath_htc_rx_status*) ;
 struct ath_common* FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_rx_status*,int ,int ) ;
 int FUNC_5 (struct ath_common*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (TYPE_6__*,struct ath_htc_rx_status*,scalar_t__) ;
 int FUNC_16 (int*,int*,int) ;
 int FUNC_17 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 scalar_t__ FUNC_19 (int,int ) ;

__attribute__((used)) static bool FUNC_20(struct ath9k_htc_priv *VAR_16,
        struct ath9k_htc_rxbuf *VAR_17,
        struct ieee80211_rx_status *VAR_18)

{
 struct ieee80211_hdr *VAR_19;
 struct ieee80211_hw *VAR_20 = VAR_16->hw;
 struct sk_buff *VAR_21 = VAR_17->skb;
 struct ath_common *VAR_22 = FUNC_3(VAR_16->ah);
 struct ath_htc_rx_status *VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = VAR_7;
 __le16 VAR_27;

 if (VAR_21->len < VAR_10) {
  FUNC_5(VAR_22, "Corrupted RX frame, dropping (len: %d)\n",
   VAR_21->len);
  goto rx_next;
 }

 VAR_23 = (struct ath_htc_rx_status *)VAR_21->data;

 if (FUNC_6(VAR_23->rs_datalen) -
     (VAR_21->len - VAR_10) != 0) {
  FUNC_5(VAR_22,
   "Corrupted RX data len, dropping (dlen: %d, skblen: %d)\n",
   VAR_23->rs_datalen, VAR_21->len);
  goto rx_next;
 }

 FUNC_2(VAR_16, VAR_23);


 FUNC_15(&VAR_17->rxstatus, VAR_23, VAR_10);
 FUNC_18(VAR_21, VAR_10);

 VAR_19 = (struct ieee80211_hdr *)VAR_21->data;
 VAR_27 = VAR_19->frame_control;
 VAR_24 = FUNC_9(VAR_21);

 VAR_25 = VAR_24 & 3;
 if (VAR_25 && VAR_21->len >= VAR_24+VAR_25+VAR_9) {
  FUNC_16(VAR_21->data + VAR_25, VAR_21->data, VAR_24);
  FUNC_18(VAR_21, VAR_25);
 }

 FUNC_17(VAR_18, 0, sizeof(struct ieee80211_rx_status));

 if (VAR_17->rxstatus.rs_status != 0) {
  if (VAR_17->rxstatus.rs_status & VAR_1)
   VAR_18->flag |= VAR_13;
  if (VAR_17->rxstatus.rs_status & VAR_4)
   goto rx_next;

  if (VAR_17->rxstatus.rs_status & VAR_2) {

  } else if (VAR_17->rxstatus.rs_status & VAR_3) {
   if (FUNC_12(VAR_27))





    VAR_17->rxstatus.rs_status &= ~VAR_3;
   else
    VAR_18->flag |= VAR_15;
  }






  if (VAR_16->ah->opmode == VAR_11) {
   if (VAR_17->rxstatus.rs_status &
       ~(VAR_2 | VAR_3 |
         VAR_1))
    goto rx_next;
  } else {
   if (VAR_17->rxstatus.rs_status &
       ~(VAR_2 | VAR_3)) {
    goto rx_next;
   }
  }
 }

 if (!(VAR_17->rxstatus.rs_status & VAR_2)) {
  u8 VAR_28;
  VAR_28 = VAR_17->rxstatus.rs_keyix;
  if (VAR_28 != VAR_5) {
   VAR_18->flag |= VAR_12;
  } else if (FUNC_10(VAR_27) &&
      VAR_21->len >= VAR_24 + 4) {
   VAR_28 = VAR_21->data[VAR_24 + 3] >> 6;
   if (FUNC_19(VAR_28, VAR_22->keymap))
    VAR_18->flag |= VAR_12;
  }
 }

 FUNC_4(VAR_20, VAR_18, VAR_17->rxstatus.rs_rate,
      VAR_17->rxstatus.rs_flags);

 if (VAR_17->rxstatus.rs_rssi != VAR_0 &&
     !VAR_17->rxstatus.rs_moreaggr)
  FUNC_1(VAR_16->rx.last_rssi,
        VAR_17->rxstatus.rs_rssi);

 VAR_26 = VAR_16->rx.last_rssi;

 if (FUNC_11(VAR_19->frame_control) &&
     !FUNC_13(VAR_22->curbssid) &&
     FUNC_8(VAR_19->addr3, VAR_22->curbssid)) {
  s8 VAR_29 = VAR_17->rxstatus.rs_rssi;

  if (FUNC_14(VAR_26 != VAR_7))
   VAR_29 = FUNC_0(VAR_26, VAR_8);

  if (VAR_29 < 0)
   VAR_29 = 0;

  VAR_16->ah->stats.avgbrssi = VAR_29;
 }

 VAR_18->mactime = FUNC_7(VAR_17->rxstatus.rs_tstamp);
 VAR_18->band = VAR_20->conf.chandef.chan->band;
 VAR_18->freq = VAR_20->conf.chandef.chan->center_freq;
 VAR_18->signal = VAR_17->rxstatus.rs_rssi + VAR_6;
 VAR_18->antenna = VAR_17->rxstatus.rs_antenna;
 VAR_18->flag |= VAR_14;

 return 1;

rx_next:
 return 0;
}
