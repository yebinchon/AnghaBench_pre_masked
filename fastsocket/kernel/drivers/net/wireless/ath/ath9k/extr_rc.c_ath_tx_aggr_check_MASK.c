
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int dummy; } ;
struct ath_atx_tid {int active; } ;


 struct ath_atx_tid* FUNC_0 (struct ath_node*,int ) ;

__attribute__((used)) static bool FUNC_1(struct ath_softc *VAR_0, struct ieee80211_sta *VAR_1,
         u8 VAR_2)
{
 struct ath_node *VAR_3 = (struct ath_node *)VAR_1->drv_priv;
 struct ath_atx_tid *VAR_4;

 if (!VAR_1->ht_cap.ht_supported)
  return 0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 return !VAR_4->active;
}
