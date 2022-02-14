
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int flags; int channel; } ;
struct iwl_rxon_context {TYPE_1__ staging; } ;
struct iwl_priv {int band; } ;
struct ieee80211_channel {int band; scalar_t__ hw_value; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct iwl_priv *VAR_2, struct ieee80211_channel *VAR_3,
    struct iwl_rxon_context *VAR_4)
{
 enum ieee80211_band VAR_5 = VAR_3->band;
 u16 VAR_6 = VAR_3->hw_value;

 if ((FUNC_2(VAR_4->staging.channel) == VAR_6) &&
     (VAR_2->band == VAR_5))
  return;

 VAR_4->staging.channel = FUNC_1(VAR_6);
 if (VAR_5 == VAR_0)
  VAR_4->staging.flags &= ~VAR_1;
 else
  VAR_4->staging.flags |= VAR_1;

 VAR_2->band = VAR_5;

 FUNC_0(VAR_2, "Staging channel set to %d [%d]\n", VAR_6, VAR_5);

}
