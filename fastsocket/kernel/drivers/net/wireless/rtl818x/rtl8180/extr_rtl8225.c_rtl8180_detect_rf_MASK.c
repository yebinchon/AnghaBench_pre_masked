
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rtl818x_rf_ops {int dummy; } ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int EEPROM_CMD; int RFPinsEnable; int RFPinsSelect; int RFPinsOutput; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8180_priv*,int *) ;
 int FUNC_2 (struct rtl8180_priv*,int *,int) ;
 struct rtl818x_rf_ops const VAR_0 ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int) ;
 struct rtl818x_rf_ops const VAR_1 ;

const struct rtl818x_rf_ops * FUNC_5(struct ieee80211_hw *VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_2->priv;
 u16 VAR_4, VAR_5;

 FUNC_2(VAR_3, &VAR_3->map->RFPinsOutput, 0x0480);
 FUNC_2(VAR_3, &VAR_3->map->RFPinsSelect, 0x0488);
 FUNC_2(VAR_3, &VAR_3->map->RFPinsEnable, 0x1FFF);
 FUNC_1(VAR_3, &VAR_3->map->EEPROM_CMD);
 FUNC_0(100);

 FUNC_4(VAR_2, 0, 0x1B7);

 VAR_4 = FUNC_3(VAR_2, 8);
 VAR_5 = FUNC_3(VAR_2, 9);

 FUNC_4(VAR_2, 0, 0x0B7);

 if (VAR_4 != 0x588 || VAR_5 != 0x700)
  return &VAR_0;

 return &VAR_1;
}
