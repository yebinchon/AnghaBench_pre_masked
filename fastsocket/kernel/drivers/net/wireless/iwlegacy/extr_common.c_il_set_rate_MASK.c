
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cck_basic_rates; int ofdm_basic_rates; } ;
struct il_priv {int active_rate; TYPE_1__ staging; int band; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int hw_value; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_supported_band* FUNC_2 (struct il_priv*,int ) ;

void
FUNC_3(struct il_priv *VAR_5)
{
 const struct ieee80211_supported_band *VAR_6 = ((void*)0);
 struct ieee80211_rate *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_5, VAR_5->band);
 if (!VAR_6) {
  FUNC_1("Failed to set rate: unable to get hw mode\n");
  return;
 }

 VAR_5->active_rate = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6->n_bitrates; VAR_8++) {
  VAR_7 = &(VAR_6->bitrates[VAR_8]);
  if (VAR_7->hw_value < VAR_4)
   VAR_5->active_rate |= (1 << VAR_7->hw_value);
 }

 FUNC_0("Set active_rate = %0x\n", VAR_5->active_rate);

 VAR_5->staging.cck_basic_rates =
     (VAR_0 >> VAR_1) & 0xF;

 VAR_5->staging.ofdm_basic_rates =
     (VAR_3 >> VAR_2) & 0xFF;
}
