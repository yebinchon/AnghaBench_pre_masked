
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int work; } ;
struct rtl8180_vif {TYPE_3__ beacon_work; scalar_t__ enable_beacon; } ;
struct rtl8180_priv {TYPE_2__* rf; TYPE_1__* map; } ;
struct ieee80211_vif {scalar_t__ type; int drv_priv; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct ieee80211_bss_conf {scalar_t__ enable_beacon; int * bssid; } ;
struct TYPE_5__ {int (* conf_erp ) (struct ieee80211_hw*,struct ieee80211_bss_conf*) ;} ;
struct TYPE_4__ {int MSR; int * BSSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_bss_conf*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9,
         struct ieee80211_vif *VAR_10,
         struct ieee80211_bss_conf *VAR_11,
         u32 VAR_12)
{
 struct rtl8180_priv *VAR_13 = VAR_9->priv;
 struct rtl8180_vif *VAR_14;
 int VAR_15;
 u8 VAR_16;

 VAR_14 = (struct rtl8180_vif *)&VAR_10->drv_priv;

 if (VAR_12 & VAR_2) {
  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
   FUNC_2(VAR_13, &VAR_13->map->BSSID[VAR_15],
      VAR_11->bssid[VAR_15]);

  if (FUNC_1(VAR_11->bssid)) {
   if (VAR_10->type == VAR_5)
    VAR_16 = VAR_6;
   else
    VAR_16 = VAR_7;
  } else
   VAR_16 = VAR_8;
  FUNC_2(VAR_13, &VAR_13->map->MSR, VAR_16);
 }

 if (VAR_12 & VAR_3 && VAR_13->rf->conf_erp)
  VAR_13->rf->conf_erp(VAR_9, VAR_11);

 if (VAR_12 & VAR_1)
  VAR_14->enable_beacon = VAR_11->enable_beacon;

 if (VAR_12 & (VAR_1 | VAR_0)) {
  FUNC_0(&VAR_14->beacon_work);
  if (VAR_14->enable_beacon)
   FUNC_3(&VAR_14->beacon_work.work);
 }
}
