
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; size_t band; TYPE_4__* bitrates; } ;
struct TYPE_22__ {int* rx_mask; } ;
struct TYPE_13__ {int cap; TYPE_8__ mcs; scalar_t__ ht_supported; } ;
struct ieee80211_sta {int* supp_rates; TYPE_10__ ht_cap; scalar_t__ drv_priv; } ;
struct TYPE_20__ {int* rs_rates; int rs_nrates; } ;
struct TYPE_19__ {int* rs_rates; int rs_nrates; } ;
struct TYPE_21__ {TYPE_6__ ht_rates; TYPE_5__ legacy_rates; } ;
struct ath9k_htc_target_rate {int isnew; int capflags; int sta_index; TYPE_7__ rates; } ;
struct ath9k_htc_sta {int index; } ;
struct ath9k_htc_priv {TYPE_9__* hw; } ;
struct TYPE_17__ {TYPE_2__* chan; } ;
struct TYPE_14__ {TYPE_3__ chandef; } ;
struct TYPE_23__ {TYPE_11__ conf; TYPE_1__* wiphy; } ;
struct TYPE_18__ {int bitrate; } ;
struct TYPE_16__ {size_t band; } ;
struct TYPE_15__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 scalar_t__ FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ath9k_htc_priv *VAR_8,
     struct ieee80211_sta *VAR_9,
     struct ath9k_htc_target_rate *VAR_10)
{
 struct ath9k_htc_sta *VAR_11 = (struct ath9k_htc_sta *) VAR_9->drv_priv;
 struct ieee80211_supported_band *VAR_12;
 u32 VAR_13 = 0;
 int VAR_14, VAR_15;

 VAR_12 = VAR_8->hw->wiphy->bands[VAR_8->hw->conf.chandef.chan->band];

 for (VAR_14 = 0, VAR_15 = 0; VAR_14 < VAR_12->n_bitrates; VAR_14++) {
  if (VAR_9->supp_rates[VAR_12->band] & FUNC_0(VAR_14)) {
   VAR_10->rates.legacy_rates.rs_rates[VAR_15]
    = (VAR_12->bitrates[VAR_14].bitrate * 2) / 10;
   VAR_15++;
  }
 }
 VAR_10->rates.legacy_rates.rs_nrates = VAR_15;

 if (VAR_9->ht_cap.ht_supported) {
  for (VAR_14 = 0, VAR_15 = 0; VAR_14 < 77; VAR_14++) {
   if (VAR_9->ht_cap.mcs.rx_mask[VAR_14/8] & (1<<(VAR_14%8)))
    VAR_10->rates.ht_rates.rs_rates[VAR_15++] = VAR_14;
   if (VAR_15 == VAR_0)
    break;
  }
  VAR_10->rates.ht_rates.rs_nrates = VAR_15;

  VAR_13 = VAR_6;
  if (VAR_9->ht_cap.mcs.rx_mask[1])
   VAR_13 |= VAR_5;
  if ((VAR_9->ht_cap.cap & VAR_3) &&
       (FUNC_2(&VAR_8->hw->conf)))
   VAR_13 |= VAR_4;
  if (FUNC_2(&VAR_8->hw->conf) &&
      (VAR_9->ht_cap.cap & VAR_2))
   VAR_13 |= VAR_7;
  else if (FUNC_1(&VAR_8->hw->conf) &&
    (VAR_9->ht_cap.cap & VAR_1))
   VAR_13 |= VAR_7;
 }

 VAR_10->sta_index = VAR_11->index;
 VAR_10->isnew = 1;
 VAR_10->capflags = FUNC_3(VAR_13);
}
