
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_station_priv {int pending_frames; scalar_t__ client; } ;
struct iwl_rxon_context {int vif; } ;
struct iwl_priv {int hw; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct ieee80211_sta* FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,struct ieee80211_sta*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_0,
         struct iwl_rxon_context *VAR_1,
         const u8 *VAR_2)
{
 struct ieee80211_sta *VAR_3;
 struct iwl_station_priv *VAR_4;

 FUNC_3();
 VAR_3 = FUNC_1(VAR_1->vif, VAR_2);
 if (VAR_3) {
  VAR_4 = (void *)VAR_3->drv_priv;

  if (VAR_4->client &&
      FUNC_0(&VAR_4->pending_frames) == 0)
   FUNC_2(VAR_0->hw, VAR_3, 0);
 }
 FUNC_4();
}
