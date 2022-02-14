
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int seq_ctrl; int addr1; int frame_control; } ;
struct TYPE_4__ {int rxfilter; } ;
struct ath_softc {TYPE_2__ rx; } ;
struct ath_rx_status {scalar_t__ rs_keyix; int rs_status; scalar_t__ rs_datalen; scalar_t__ rs_more; } ;
struct TYPE_3__ {scalar_t__ rx_status_len; } ;
struct ath_hw {scalar_t__ is_monitoring; TYPE_1__ caps; } ;
struct ath_common {scalar_t__ rx_bufsize; int ccmp_keymap; int tkip_keymap; struct ath_hw* ah; scalar_t__ priv; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_8(struct ath_common *VAR_12,
       struct ieee80211_hdr *VAR_13,
       struct ieee80211_rx_status *VAR_14,
       struct ath_rx_status *VAR_15,
       bool *VAR_16)
{
 struct ath_softc *VAR_17 = (struct ath_softc *) VAR_12->priv;
 bool VAR_18, VAR_19, VAR_20, VAR_21;
 struct ath_hw *VAR_22 = VAR_12->ah;
 __le16 VAR_23;
 u8 VAR_24 = VAR_22->caps.rx_status_len;

 VAR_23 = VAR_13->frame_control;

 VAR_18 = !!FUNC_5(VAR_13->addr1);
 VAR_19 = VAR_15->rs_keyix != VAR_5 &&
  FUNC_7(VAR_15->rs_keyix, VAR_12->tkip_keymap);
 VAR_20 = VAR_19 && FUNC_4(VAR_23) &&
  FUNC_2(VAR_23) &&
  !(VAR_15->rs_status &
  (VAR_1 | VAR_0 | VAR_3 |
   VAR_2));






 if (VAR_15->rs_keyix == VAR_5 ||
     !FUNC_7(VAR_15->rs_keyix, VAR_12->ccmp_keymap))
  VAR_15->rs_status &= ~VAR_2;

 if (!VAR_15->rs_datalen) {
  FUNC_0(VAR_11);
  return 0;
 }






 if (VAR_15->rs_datalen > (VAR_12->rx_bufsize - VAR_24)) {
  FUNC_0(VAR_11);
  return 0;
 }


 if (VAR_15->rs_more)
  return 1;

 VAR_21 = VAR_19 && !FUNC_3(VAR_23) &&
  !FUNC_1(VAR_23) &&
  !(FUNC_6(VAR_13->seq_ctrl) & VAR_7) &&
  (VAR_15->rs_status & VAR_3);







 if (VAR_15->rs_status != 0) {
  u8 VAR_25;

  if (VAR_15->rs_status & VAR_0) {
   VAR_14->flag |= VAR_8;
   VAR_21 = 0;
  }
  if (VAR_15->rs_status & VAR_4)
   return 0;

  if ((VAR_15->rs_status & VAR_1) ||
      (!VAR_18 && (VAR_15->rs_status & VAR_2))) {
   *VAR_16 = 1;
   VAR_21 = 0;
  }






  VAR_25 = VAR_1 | VAR_3 |
         VAR_2;

  if (VAR_22->is_monitoring && (VAR_17->rx.rxfilter & VAR_6))
   VAR_25 |= VAR_0;

  if (VAR_15->rs_status & ~VAR_25)
   return 0;
 }







 if (VAR_20)
  VAR_14->flag |= VAR_10;
 else if (VAR_18 && VAR_21)
  VAR_14->flag |= VAR_9;

 return 1;
}
