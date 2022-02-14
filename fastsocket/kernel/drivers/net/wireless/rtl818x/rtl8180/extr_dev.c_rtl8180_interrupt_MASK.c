
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rtl8180_priv {int lock; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int INT_STATUS; } ;


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
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct rtl8180_priv*,int *) ;
 int FUNC_3 (struct rtl8180_priv*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct ieee80211_hw *VAR_13 = VAR_12;
 struct rtl8180_priv *VAR_14 = VAR_13->priv;
 u16 VAR_15;

 FUNC_4(&VAR_14->lock);
 VAR_15 = FUNC_2(VAR_14, &VAR_14->map->INT_STATUS);
 if (FUNC_6(VAR_15 == 0xFFFF)) {
  FUNC_5(&VAR_14->lock);
  return VAR_0;
 }

 FUNC_3(VAR_14, &VAR_14->map->INT_STATUS, VAR_15);

 if (VAR_15 & (VAR_4 | VAR_3))
  FUNC_1(VAR_13, 3);

 if (VAR_15 & (VAR_6 | VAR_5))
  FUNC_1(VAR_13, 2);

 if (VAR_15 & (VAR_10 | VAR_9))
  FUNC_1(VAR_13, 1);

 if (VAR_15 & (VAR_8 | VAR_7))
  FUNC_1(VAR_13, 0);

 if (VAR_15 & (VAR_2 | VAR_1))
  FUNC_0(VAR_13);

 FUNC_5(&VAR_14->lock);

 return VAR_0;
}
