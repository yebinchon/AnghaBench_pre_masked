
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_station_priv {int pending_frames; scalar_t__ client; } ;
struct il_priv {int hw; int vif; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct ieee80211_sta* FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,struct ieee80211_sta*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct il_priv *VAR_0, const u8 *VAR_1)
{
 struct ieee80211_sta *VAR_2;
 struct il_station_priv *VAR_3;

 FUNC_3();
 VAR_2 = FUNC_1(VAR_0->vif, VAR_1);
 if (VAR_2) {
  VAR_3 = (void *)VAR_2->drv_priv;

  if (VAR_3->client &&
      FUNC_0(&VAR_3->pending_frames) == 0)
   FUNC_2(VAR_0->hw, VAR_2, 0);
 }
 FUNC_4();
}
