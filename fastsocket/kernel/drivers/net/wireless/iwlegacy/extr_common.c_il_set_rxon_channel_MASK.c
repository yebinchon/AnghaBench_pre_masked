
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int flags; int channel; } ;
struct il_priv {int band; TYPE_1__ staging; } ;
struct ieee80211_channel {int band; scalar_t__ hw_value; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int FUNC_0 (char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(struct il_priv *VAR_2, struct ieee80211_channel *VAR_3)
{
 enum ieee80211_band VAR_4 = VAR_3->band;
 u16 VAR_5 = VAR_3->hw_value;

 if (FUNC_2(VAR_2->staging.channel) == VAR_5 && VAR_2->band == VAR_4)
  return 0;

 VAR_2->staging.channel = FUNC_1(VAR_5);
 if (VAR_4 == VAR_0)
  VAR_2->staging.flags &= ~VAR_1;
 else
  VAR_2->staging.flags |= VAR_1;

 VAR_2->band = VAR_4;

 FUNC_0("Staging channel set to %d [%d]\n", VAR_5, VAR_4);

 return 0;
}
