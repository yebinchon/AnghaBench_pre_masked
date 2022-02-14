
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl1251 {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; scalar_t__ uapsd; int aifs; int cw_max; int cw_min; } ;
struct ieee80211_hw {struct wl1251* priv; } ;
typedef enum wl1251_acx_ps_scheme { ____Placeholder_wl1251_acx_ps_scheme } wl1251_acx_ps_scheme ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl1251*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct wl1251*,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_5,
        struct ieee80211_vif *VAR_6, u16 VAR_7,
        const struct ieee80211_tx_queue_params *VAR_8)
{
 enum wl1251_acx_ps_scheme VAR_9;
 struct wl1251 *VAR_10 = VAR_5->priv;
 int VAR_11;

 FUNC_0(&VAR_10->mutex);

 FUNC_4(VAR_1, "mac80211 conf tx %d", VAR_7);

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 < 0)
  goto out;


 VAR_11 = FUNC_2(VAR_10, FUNC_7(VAR_7),
    VAR_8->cw_min, VAR_8->cw_max,
    VAR_8->aifs, VAR_8->txop * 32);
 if (VAR_11 < 0)
  goto out_sleep;

 if (VAR_8->uapsd)
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_3;

 VAR_11 = FUNC_3(VAR_10, FUNC_7(VAR_7),
     VAR_0,
     FUNC_7(VAR_7), VAR_9,
     VAR_2);
 if (VAR_11 < 0)
  goto out_sleep;

out_sleep:
 FUNC_5(VAR_10);

out:
 FUNC_1(&VAR_10->mutex);

 return VAR_11;
}
