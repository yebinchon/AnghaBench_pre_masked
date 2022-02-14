
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct il_priv {TYPE_2__* vif; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {int beacon_int; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct il_priv*) ;
 int FUNC_1 (int,int) ;

u16
FUNC_2(struct il_priv *VAR_5, enum ieee80211_band VAR_6,
     struct ieee80211_vif *VAR_7)
{
 u16 VAR_8;

 u16 VAR_9 =
     (VAR_6 ==
      VAR_0) ? VAR_2 +
     VAR_3 : VAR_2 +
     VAR_4;

 if (FUNC_0(VAR_5)) {





  VAR_8 = VAR_5->vif ? VAR_5->vif->bss_conf.beacon_int : 0;
  if (VAR_8 > VAR_2 || !VAR_8)
   VAR_8 = VAR_2;
  VAR_8 = (VAR_8 * 98) / 100 - VAR_1 * 2;
  VAR_9 = FUNC_1(VAR_8, VAR_9);
 }

 return VAR_9;
}
