
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wl1251 {scalar_t__ state; int mutex; int rx_filter; int rx_config; int bssid; } ;
struct ieee80211_hw {struct wl1251* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned int VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wl1251*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_19,
           unsigned int VAR_20,
           unsigned int *VAR_21,u64 VAR_22)
{
 struct wl1251 *VAR_23 = VAR_19->priv;
 int VAR_24;

 FUNC_4(VAR_7, "mac80211 configure filter");

 *VAR_21 &= VAR_18;
 VAR_20 &= VAR_18;

 if (VAR_20 == 0)

  return;

 FUNC_1(&VAR_23->mutex);

 VAR_23->rx_config = VAR_15;
 VAR_23->rx_filter = VAR_16;

 if (*VAR_21 & VAR_14) {
  VAR_23->rx_config |= VAR_0;
  VAR_23->rx_config |= VAR_2;
 }
 if (*VAR_21 & VAR_8)




  VAR_23->rx_config &= ~VAR_1;
 if (*VAR_21 & VAR_11)
  VAR_23->rx_filter |= VAR_4;
 if (*VAR_21 & VAR_9) {
  VAR_23->rx_config &= ~VAR_0;
  VAR_23->rx_config &= ~VAR_6;
 }
 if (*VAR_21 & VAR_10)
  VAR_23->rx_filter |= VAR_3;
 if (*VAR_21 & VAR_12 || FUNC_0(VAR_23->bssid))
  VAR_23->rx_config &= ~VAR_0;
 if (*VAR_21 & VAR_13)
  VAR_23->rx_filter |= VAR_5;

 if (VAR_23->state == VAR_17)
  goto out;

 VAR_24 = FUNC_6(VAR_23);
 if (VAR_24 < 0)
  goto out;


 FUNC_3(VAR_23, VAR_23->rx_config, VAR_23->rx_filter);

 FUNC_5(VAR_23);

out:
 FUNC_2(&VAR_23->mutex);
}
