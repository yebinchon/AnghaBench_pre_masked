
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rts_cts_rate_idx; TYPE_2__* vif; TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_3__ control; } ;
struct ieee80211_bss_conf {int basic_rates; } ;
struct ath_softc {int dummy; } ;
struct ath_rate_table {int dummy; } ;
struct TYPE_5__ {struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ath_softc *VAR_1,
       const struct ath_rate_table *VAR_2,
       struct ieee80211_tx_info *VAR_3)
{
 struct ieee80211_bss_conf *VAR_4;

 if (!VAR_3->control.vif)
  return;



 if (!(VAR_3->control.rates[0].flags & VAR_0))
  return;

 VAR_4 = &VAR_3->control.vif->bss_conf;

 if (!VAR_4->basic_rates)
  return;




 VAR_3->control.rts_cts_rate_idx = FUNC_0(VAR_4->basic_rates);
}
