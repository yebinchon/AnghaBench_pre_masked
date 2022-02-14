
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct p54_common {int basic_rate_mask; int fw_var; int wakeup_timer; int conf_mutex; scalar_t__ aid; int use_short_slot; int bssid; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; struct p54_common* priv; } ;
struct ieee80211_bss_conf {int basic_rates; int beacon_int; int dtim_period; scalar_t__ aid; scalar_t__ assoc; int use_short_slot; int bssid; } ;
struct TYPE_4__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct p54_common*,struct ieee80211_vif*) ;
 int FUNC_4 (struct p54_common*,int ,int ) ;
 int FUNC_5 (struct p54_common*) ;
 int FUNC_6 (struct p54_common*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_8,
     struct ieee80211_vif *VAR_9,
     struct ieee80211_bss_conf *VAR_10,
     u32 VAR_11)
{
 struct p54_common *VAR_12 = VAR_8->priv;

 FUNC_1(&VAR_12->conf_mutex);
 if (VAR_11 & VAR_3) {
  FUNC_0(VAR_12->bssid, VAR_10->bssid, VAR_5);
  FUNC_6(VAR_12);
 }

 if (VAR_11 & VAR_2) {
  FUNC_4(VAR_12, VAR_7, 0);
  FUNC_6(VAR_12);
  FUNC_3(VAR_12, VAR_9);
  FUNC_5(VAR_12);
 }

 if (VAR_11 & (VAR_4 | VAR_2)) {
  VAR_12->use_short_slot = VAR_10->use_short_slot;
  FUNC_5(VAR_12);
 }
 if (VAR_11 & VAR_1) {
  if (VAR_8->conf.chandef.chan->band == VAR_6)
   VAR_12->basic_rate_mask = (VAR_10->basic_rates << 4);
  else
   VAR_12->basic_rate_mask = VAR_10->basic_rates;
  FUNC_6(VAR_12);
  if (VAR_12->fw_var >= 0x500)
   FUNC_4(VAR_12, VAR_7, 0);
 }
 if (VAR_11 & VAR_0) {
  if (VAR_10->assoc) {
   VAR_12->aid = VAR_10->aid;
   VAR_12->wakeup_timer = VAR_10->beacon_int *
          VAR_10->dtim_period * 5;
   FUNC_6(VAR_12);
  } else {
   VAR_12->wakeup_timer = 500;
   VAR_12->aid = 0;
  }
 }

 FUNC_2(&VAR_12->conf_mutex);
}
