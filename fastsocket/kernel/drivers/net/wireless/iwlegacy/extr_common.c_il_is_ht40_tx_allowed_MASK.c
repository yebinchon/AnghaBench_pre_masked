
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int extension_chan_offset; int is_40mhz; int enabled; } ;
struct TYPE_3__ {int channel; } ;
struct il_priv {TYPE_2__ ht; TYPE_1__ staging; int band; scalar_t__ disable_ht40; } ;
struct ieee80211_sta_ht_cap {int ht_supported; } ;


 int FUNC_0 (struct il_priv*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

bool
FUNC_2(struct il_priv *VAR_0, struct ieee80211_sta_ht_cap *VAR_1)
{
 if (!VAR_0->ht.enabled || !VAR_0->ht.is_40mhz)
  return 0;





 if (VAR_1 && !VAR_1->ht_supported)
  return 0;






 return FUNC_0(VAR_0, VAR_0->band,
           FUNC_1(VAR_0->staging.channel),
           VAR_0->ht.extension_chan_offset);
}
