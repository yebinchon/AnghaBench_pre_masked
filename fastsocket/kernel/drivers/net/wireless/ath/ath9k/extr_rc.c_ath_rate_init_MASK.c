
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211_supported_band {int n_bitrates; size_t band; TYPE_1__* bitrates; } ;
struct TYPE_8__ {int* rx_mask; } ;
struct TYPE_10__ {int ht_supported; TYPE_3__ mcs; } ;
struct ieee80211_sta {int* supp_rates; TYPE_5__ ht_cap; } ;
struct ath_softc {int sc_ah; } ;
struct TYPE_9__ {int* rs_rates; int rs_nrates; } ;
struct TYPE_7__ {int* rs_rates; int rs_nrates; } ;
struct ath_rate_priv {int ht_cap; int rate_table; TYPE_4__ neg_ht_rates; TYPE_2__ neg_rates; } ;
struct ath_common {int dummy; } ;
struct TYPE_6__ {int bitrate; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_softc*,size_t,int ) ;
 int FUNC_3 (struct ath_common*,char*) ;
 int FUNC_4 (struct ath_softc*,struct ieee80211_sta*) ;
 int FUNC_5 (struct ath_softc*,void*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, struct ieee80211_supported_band *VAR_2,
                          struct ieee80211_sta *VAR_3, void *VAR_4)
{
 struct ath_softc *VAR_5 = VAR_1;
 struct ath_common *VAR_6 = FUNC_1(VAR_5->sc_ah);
 struct ath_rate_priv *VAR_7 = VAR_4;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_2->n_bitrates; VAR_8++) {
  if (VAR_3->supp_rates[VAR_2->band] & FUNC_0(VAR_8)) {
   VAR_7->neg_rates.rs_rates[VAR_9]
    = (VAR_2->bitrates[VAR_8].bitrate * 2) / 10;
   VAR_9++;
  }
 }
 VAR_7->neg_rates.rs_nrates = VAR_9;

 if (VAR_3->ht_cap.ht_supported) {
  for (VAR_8 = 0, VAR_9 = 0; VAR_8 < 77; VAR_8++) {
   if (VAR_3->ht_cap.mcs.rx_mask[VAR_8/8] & (1<<(VAR_8%8)))
    VAR_7->neg_ht_rates.rs_rates[VAR_9++] = VAR_8;
   if (VAR_9 == VAR_0)
    break;
  }
  VAR_7->neg_ht_rates.rs_nrates = VAR_9;
 }

 VAR_7->rate_table = FUNC_2(VAR_5, VAR_2->band,
       VAR_3->ht_cap.ht_supported);
 if (!VAR_7->rate_table) {
  FUNC_3(VAR_6, "No rate table chosen\n");
  return;
 }

 VAR_7->ht_cap = FUNC_4(VAR_5, VAR_3);
 FUNC_5(VAR_5, VAR_4);
}
