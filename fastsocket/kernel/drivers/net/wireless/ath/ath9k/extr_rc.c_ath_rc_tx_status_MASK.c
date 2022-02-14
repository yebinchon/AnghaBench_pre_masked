
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int count; int flags; } ;
struct TYPE_4__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct ath_softc {TYPE_1__* hw; } ;
struct ath_rate_priv {int ht_cap; } ;
struct TYPE_3__ {size_t max_rates; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_rate_priv*,size_t) ;
 size_t FUNC_2 (struct ath_rate_priv*,struct ieee80211_tx_rate*) ;
 int FUNC_3 (struct ath_softc*,struct ath_rate_priv*,struct ieee80211_tx_info*,size_t,int,int) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_3,
        struct ath_rate_priv *VAR_4,
        struct sk_buff *VAR_5)
{
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_5);
 struct ieee80211_tx_rate *VAR_7 = VAR_6->status.rates;
 struct ieee80211_tx_rate *VAR_8;
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12;
 u32 VAR_13 = 0, VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_3->hw->max_rates; VAR_13++) {
  VAR_8 = &VAR_6->status.rates[VAR_13];
  if (VAR_8->idx < 0 || !VAR_8->count)
   break;

  VAR_9 = VAR_13;
  VAR_11 = VAR_8->count - 1;
 }

 if (!(VAR_6->flags & VAR_1))
  VAR_10 = 1;





 if (VAR_9 != 0) {
  for (VAR_13 = 0; VAR_13 < VAR_9 ; VAR_13++) {
   if (VAR_7[VAR_13].count != 0 && (VAR_7[VAR_13].idx >= 0)) {
    VAR_12 = VAR_7[VAR_13].flags;




    if ((VAR_12 & VAR_0) &&
        !(VAR_4->ht_cap & VAR_2))
     return;

    VAR_14 = FUNC_2(VAR_4, &VAR_7[VAR_13]);
    FUNC_3(VAR_3, VAR_4, VAR_6,
       VAR_14, VAR_10 ? 1 : 2,
       VAR_7[VAR_13].count);
   }
  }
 }

 VAR_12 = VAR_7[VAR_9].flags;


 if ((VAR_12 & VAR_0) &&
     !(VAR_4->ht_cap & VAR_2))
  return;

 VAR_14 = FUNC_2(VAR_4, &VAR_7[VAR_9]);
 FUNC_3(VAR_3, VAR_4, VAR_6, VAR_14, VAR_10, VAR_11);
 FUNC_1(VAR_4, VAR_14);
}
