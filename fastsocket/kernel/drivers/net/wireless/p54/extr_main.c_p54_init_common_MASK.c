
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p54_tx_data {int dummy; } ;
struct p54_hdr {int dummy; } ;
struct p54_common {int basic_rate_mask; int noise; int * curchan; int * mc_maclist; int work; int beacon_comp; int eeprom_comp; int stat_comp; int eeprom_mutex; int conf_mutex; TYPE_1__* tx_stats; int beacon_req_id; int tx_pending; int tx_queue; int tx_stats_lock; int mode; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int flags; int channel_change_time; int queues; int max_rates; int max_rate_tries; int extra_tx_headroom; TYPE_2__* wiphy; struct p54_common* priv; } ;
struct TYPE_4__ {int interface_modes; int flags; } ;
struct TYPE_3__ {int limit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 struct ieee80211_hw* FUNC_3 (size_t,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_18 ;
 int FUNC_7 (struct p54_common*) ;
 int VAR_19 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct ieee80211_hw *FUNC_10(size_t VAR_20)
{
 struct ieee80211_hw *VAR_21;
 struct p54_common *VAR_22;

 VAR_21 = FUNC_3(VAR_20, &VAR_18);
 if (!VAR_21)
  return ((void*)0);

 VAR_22 = VAR_21->priv;
 VAR_22->hw = VAR_21;
 VAR_22->mode = VAR_11;
 VAR_22->basic_rate_mask = 0x15f;
 FUNC_9(&VAR_22->tx_stats_lock);
 FUNC_8(&VAR_22->tx_queue);
 FUNC_8(&VAR_22->tx_pending);
 VAR_21->flags = VAR_4 |
       VAR_5 |
       VAR_6 |
       VAR_2 |
       VAR_1 |
       VAR_3;

 VAR_21->wiphy->interface_modes = FUNC_0(VAR_10) |
          FUNC_0(VAR_7) |
          FUNC_0(VAR_8) |
          FUNC_0(VAR_9);

 VAR_21->channel_change_time = 1000;
 VAR_22->beacon_req_id = FUNC_2(0);
 VAR_22->tx_stats[VAR_12].limit = 1;
 VAR_22->tx_stats[VAR_15].limit = 1;
 VAR_22->tx_stats[VAR_16].limit = 3;
 VAR_22->tx_stats[VAR_13].limit = 3;
 VAR_22->tx_stats[VAR_14].limit = 5;
 VAR_21->queues = 1;
 VAR_22->noise = -94;
 VAR_21->max_rates = 4;
 VAR_21->max_rate_tries = 7;
 VAR_21->extra_tx_headroom = sizeof(struct p54_hdr) + 4 +
     sizeof(struct p54_tx_data);





 VAR_21->wiphy->flags &= ~VAR_17;

 FUNC_6(&VAR_22->conf_mutex);
 FUNC_6(&VAR_22->eeprom_mutex);
 FUNC_4(&VAR_22->stat_comp);
 FUNC_4(&VAR_22->eeprom_comp);
 FUNC_4(&VAR_22->beacon_comp);
 FUNC_1(&VAR_22->work, VAR_19);

 FUNC_5(&VAR_22->mc_maclist[0], ~0, VAR_0);
 VAR_22->curchan = ((void*)0);
 FUNC_7(VAR_22);
 return VAR_21;
}
