
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


typedef size_t u8 ;
struct TYPE_13__ {int sta_supp_rates; } ;
struct TYPE_8__ {size_t bcast_id; } ;
struct il_priv {TYPE_7__* stations; TYPE_6__ _3945; TYPE_1__ hw_params; struct ieee80211_hw* hw; } ;
struct TYPE_12__ {unsigned long data; int function; } ;
struct il3945_rs_sta {int last_txrate_idx; int * win; TYPE_5__ rate_scale_flush; scalar_t__ last_tx_packets; int flush_time; void* last_flush; void* last_partial_flush; int expected_tpt; int start_rate; struct il_priv* il; } ;
struct il3945_sta_priv {struct il3945_rs_sta rs_sta; } ;
struct ieee80211_supported_band {int n_bitrates; size_t band; } ;
struct ieee80211_sta {int* supp_rates; scalar_t__ drv_priv; } ;
struct TYPE_11__ {TYPE_3__* chan; } ;
struct ieee80211_conf {TYPE_4__ chandef; } ;
struct ieee80211_hw {TYPE_2__* wiphy; struct ieee80211_conf conf; } ;
struct TYPE_14__ {int used; } ;
struct TYPE_10__ {size_t band; } ;
struct TYPE_9__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 void* VAR_8 ;

void
FUNC_2(struct il_priv *VAR_9, struct ieee80211_sta *VAR_10, u8 VAR_11)
{
 struct ieee80211_hw *VAR_12 = VAR_9->hw;
 struct ieee80211_conf *VAR_13 = &VAR_9->hw->conf;
 struct il3945_sta_priv *VAR_14;
 struct il3945_rs_sta *VAR_15;
 struct ieee80211_supported_band *VAR_16;
 int VAR_17;

 FUNC_0("enter\n");
 if (VAR_11 == VAR_9->hw_params.bcast_id)
  goto out;

 VAR_14 = (struct il3945_sta_priv *)VAR_10->drv_priv;
 VAR_15 = &VAR_14->rs_sta;
 VAR_16 = VAR_12->wiphy->bands[VAR_13->chandef.chan->band];

 VAR_15->il = VAR_9;

 VAR_15->start_rate = VAR_5;


 VAR_15->expected_tpt = VAR_7;

 VAR_15->last_partial_flush = VAR_8;
 VAR_15->last_flush = VAR_8;
 VAR_15->flush_time = VAR_4;
 VAR_15->last_tx_packets = 0;

 VAR_15->rate_scale_flush.data = (unsigned long)VAR_15;
 VAR_15->rate_scale_flush.function = VAR_6;

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
  FUNC_1(&VAR_15->win[VAR_17]);






 for (VAR_17 = VAR_16->n_bitrates - 1; VAR_17 >= 0; VAR_17--) {
  if (VAR_10->supp_rates[VAR_16->band] & (1 << VAR_17)) {
   VAR_15->last_txrate_idx = VAR_17;
   break;
  }
 }

 VAR_9->_3945.sta_supp_rates = VAR_10->supp_rates[VAR_16->band];

 if (VAR_16->band == VAR_0) {
  VAR_15->last_txrate_idx += VAR_1;
  VAR_9->_3945.sta_supp_rates <<= VAR_1;
 }

out:
 VAR_9->stations[VAR_11].used &= ~VAR_2;

 FUNC_0("leave\n");
}
