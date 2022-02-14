
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl12xx_vif {int flags; } ;
struct wl1271 {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int aifs; int cw_max; int cw_min; scalar_t__ uapsd; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (int ) ;
 struct wl12xx_vif* FUNC_9 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_6,
        struct ieee80211_vif *VAR_7, u16 VAR_8,
        const struct ieee80211_tx_queue_params *VAR_9)
{
 struct wl1271 *VAR_10 = VAR_6->priv;
 struct wl12xx_vif *VAR_11 = FUNC_9(VAR_7);
 u8 VAR_12;
 int VAR_13 = 0;

 FUNC_0(&VAR_10->mutex);

 FUNC_5(VAR_4, "mac80211 conf tx %d", VAR_8);

 if (VAR_9->uapsd)
  VAR_12 = VAR_3;
 else
  VAR_12 = VAR_2;

 if (!FUNC_2(VAR_5, &VAR_11->flags))
  goto out;

 VAR_13 = FUNC_7(VAR_10);
 if (VAR_13 < 0)
  goto out;





 VAR_13 = FUNC_3(VAR_10, VAR_11, FUNC_8(VAR_8),
    VAR_9->cw_min, VAR_9->cw_max,
    VAR_9->aifs, VAR_9->txop << 5);
 if (VAR_13 < 0)
  goto out_sleep;

 VAR_13 = FUNC_4(VAR_10, VAR_11, FUNC_8(VAR_8),
     VAR_1,
     FUNC_8(VAR_8),
     VAR_12, VAR_0,
     0, 0);

out_sleep:
 FUNC_6(VAR_10);

out:
 FUNC_1(&VAR_10->mutex);

 return VAR_13;
}
