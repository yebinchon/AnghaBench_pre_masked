
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8187_priv {int rx_conf; int conf_mutex; int work; TYPE_1__* map; scalar_t__ is_rtl8187b; struct ieee80211_hw* dev; int anchored; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int CMD; int TX_CONF; int TX_AGC_CTL; int CW_CONF; int RX_CONF; int * MAR; int INT_MASK; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int VAR_20 ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct rtl8187_priv*,int *) ;
 int FUNC_9 (struct rtl8187_priv*,int *,int) ;
 int FUNC_10 (struct rtl8187_priv*,int *,int) ;
 int FUNC_11 (struct rtl8187_priv*,int *,int) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_21)
{
 struct rtl8187_priv *VAR_22 = VAR_21->priv;
 u32 VAR_23;
 int VAR_24;

 FUNC_2(&VAR_22->conf_mutex);

 VAR_24 = (!VAR_22->is_rtl8187b) ? FUNC_4(VAR_21) :
         FUNC_6(VAR_21);
 if (VAR_24)
  goto rtl8187_start_exit;

 FUNC_1(&VAR_22->anchored);
 VAR_22->dev = VAR_21;

 if (VAR_22->is_rtl8187b) {
  VAR_23 = VAR_8 |
        VAR_7 |
        VAR_5 |
        VAR_10 |
        VAR_6 |
        (7 << 13 ) |
        (7 << 10 ) |
        VAR_12 |
        VAR_11 |
        VAR_9;
  VAR_22->rx_conf = VAR_23;
  FUNC_10(VAR_22, &VAR_22->map->RX_CONF, VAR_23);

  VAR_23 = FUNC_8(VAR_22, &VAR_22->map->TX_AGC_CTL);
  VAR_23 &= ~VAR_15;
  VAR_23 &= ~VAR_14;
  VAR_23 &= ~VAR_13;
  FUNC_11(VAR_22, &VAR_22->map->TX_AGC_CTL, VAR_23);

  FUNC_10(VAR_22, &VAR_22->map->TX_CONF,
      VAR_18 |
      VAR_17 |
      (VAR_0 << 8 ) |
      (VAR_0 << 0 ) |
      (7 << 21 ));
  FUNC_5(VAR_21);
  FUNC_7(VAR_21);
  goto rtl8187_start_exit;
 }

 FUNC_9(VAR_22, &VAR_22->map->INT_MASK, 0xFFFF);

 FUNC_10(VAR_22, &VAR_22->map->MAR[0], ~0);
 FUNC_10(VAR_22, &VAR_22->map->MAR[1], ~0);

 FUNC_5(VAR_21);

 VAR_23 = VAR_11 |
       VAR_12 |
       VAR_6 |
       VAR_8 |
       VAR_7 |
       (7 << 13 ) |
       (7 << 10 ) |
       VAR_5 |
       VAR_10;

 VAR_22->rx_conf = VAR_23;
 FUNC_10(VAR_22, &VAR_22->map->RX_CONF, VAR_23);

 VAR_23 = FUNC_8(VAR_22, &VAR_22->map->CW_CONF);
 VAR_23 &= ~VAR_3;
 VAR_23 |= VAR_4;
 FUNC_11(VAR_22, &VAR_22->map->CW_CONF, VAR_23);

 VAR_23 = FUNC_8(VAR_22, &VAR_22->map->TX_AGC_CTL);
 VAR_23 &= ~VAR_15;
 VAR_23 &= ~VAR_14;
 VAR_23 &= ~VAR_13;
 FUNC_11(VAR_22, &VAR_22->map->TX_AGC_CTL, VAR_23);

 VAR_23 = VAR_16 |
        (7 << 21 ) |
        VAR_19;
 FUNC_10(VAR_22, &VAR_22->map->TX_CONF, VAR_23);

 VAR_23 = FUNC_8(VAR_22, &VAR_22->map->CMD);
 VAR_23 |= VAR_2;
 VAR_23 |= VAR_1;
 FUNC_11(VAR_22, &VAR_22->map->CMD, VAR_23);
 FUNC_0(&VAR_22->work, VAR_20);

rtl8187_start_exit:
 FUNC_3(&VAR_22->conf_mutex);
 return VAR_24;
}
