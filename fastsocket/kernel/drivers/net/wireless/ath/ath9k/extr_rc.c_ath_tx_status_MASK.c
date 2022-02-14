
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath_softc {TYPE_1__* hw; } ;
struct ath_rate_priv {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath_softc*,struct ath_rate_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ath_softc*,struct ieee80211_sta*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int* FUNC_5 (struct ieee80211_hdr*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_sta*,int,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(void *VAR_5, struct ieee80211_supported_band *VAR_6,
     struct ieee80211_sta *VAR_7, void *VAR_8,
     struct sk_buff *VAR_9)
{
 struct ath_softc *VAR_10 = VAR_5;
 struct ath_rate_priv *VAR_11 = VAR_8;
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_9);
 struct ieee80211_hdr *VAR_13 = (struct ieee80211_hdr *)VAR_9->data;
 __le16 VAR_14 = VAR_13->frame_control;

 if (!VAR_8 || !FUNC_6(VAR_14))
  return;


 if ((VAR_12->flags & VAR_2) &&
     !(VAR_12->flags & VAR_3))
  return;

 if (VAR_12->flags & VAR_4)
  return;

 FUNC_1(VAR_10, VAR_11, VAR_9);


 if (FUNC_3(&VAR_10->hw->conf) &&
     !(VAR_9->protocol == FUNC_4(VAR_0))) {
  if (FUNC_7(VAR_14) &&
      FUNC_9(VAR_9) != VAR_1) {
   u8 *VAR_15, VAR_16;

   VAR_15 = FUNC_5(VAR_13);
   VAR_16 = VAR_15[0] & 0xf;

   if(FUNC_2(VAR_10, VAR_7, VAR_16))
    FUNC_8(VAR_7, VAR_16, 0);
  }
 }
}
