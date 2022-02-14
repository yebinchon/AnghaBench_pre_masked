
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_out; scalar_t__ reg_data_in; struct ieee80211_hw* data; } ;
struct TYPE_2__ {int EEPROM_CMD; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8180_priv*,int *) ;
 int FUNC_1 (struct rtl8180_priv*,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct eeprom_93cx6 *VAR_4)
{
 struct ieee80211_hw *VAR_5 = VAR_4->data;
 struct rtl8180_priv *VAR_6 = VAR_5->priv;
 u8 VAR_7 = 2 << 6;

 if (VAR_4->reg_data_in)
  VAR_7 |= VAR_3;
 if (VAR_4->reg_data_out)
  VAR_7 |= VAR_2;
 if (VAR_4->reg_data_clock)
  VAR_7 |= VAR_0;
 if (VAR_4->reg_chip_select)
  VAR_7 |= VAR_1;

 FUNC_1(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_7);
 FUNC_0(VAR_6, &VAR_6->map->EEPROM_CMD);
 FUNC_2(10);
}
