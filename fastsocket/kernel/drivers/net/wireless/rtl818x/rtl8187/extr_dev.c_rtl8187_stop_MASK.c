
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int queue; } ;
struct rtl8187_priv {int work; int is_rtl8187b; int conf_mutex; int anchored; TYPE_3__ b_tx_status; TYPE_2__* map; TYPE_1__* rf; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_5__ {int EEPROM_CMD; int CONFIG4; int CMD; int INT_MASK; } ;
struct TYPE_4__ {int (* stop ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtl8187_priv*,int) ;
 int FUNC_5 (struct rtl8187_priv*,int *) ;
 int FUNC_6 (struct rtl8187_priv*,int *,int ) ;
 int FUNC_7 (struct rtl8187_priv*,int *,int) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_5)
{
 struct rtl8187_priv *VAR_6 = VAR_5->priv;
 struct sk_buff *VAR_7;
 u32 VAR_8;

 FUNC_2(&VAR_6->conf_mutex);
 FUNC_6(VAR_6, &VAR_6->map->INT_MASK, 0);

 VAR_8 = FUNC_5(VAR_6, &VAR_6->map->CMD);
 VAR_8 &= ~VAR_1;
 VAR_8 &= ~VAR_0;
 FUNC_7(VAR_6, &VAR_6->map->CMD, VAR_8);

 VAR_6->rf->stop(VAR_5);
 FUNC_4(VAR_6, 0);

 FUNC_7(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_3);
 VAR_8 = FUNC_5(VAR_6, &VAR_6->map->CONFIG4);
 FUNC_7(VAR_6, &VAR_6->map->CONFIG4, VAR_8 | VAR_2);
 FUNC_7(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_4);

 while ((VAR_7 = FUNC_8(&VAR_6->b_tx_status.queue)))
  FUNC_1(VAR_7);

 FUNC_10(&VAR_6->anchored);
 FUNC_3(&VAR_6->conf_mutex);

 if (!VAR_6->is_rtl8187b)
  FUNC_0(&VAR_6->work);
}
