
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_out; scalar_t__ reg_data_in; struct ieee80211_hw* data; } ;
struct TYPE_2__ {int EEPROM_CMD; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl8187_priv*,int *,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct eeprom_93cx6 *VAR_5)
{
 struct ieee80211_hw *VAR_6 = VAR_5->data;
 struct rtl8187_priv *VAR_7 = VAR_6->priv;
 u8 VAR_8 = VAR_2;

 if (VAR_5->reg_data_in)
  VAR_8 |= VAR_4;
 if (VAR_5->reg_data_out)
  VAR_8 |= VAR_3;
 if (VAR_5->reg_data_clock)
  VAR_8 |= VAR_0;
 if (VAR_5->reg_chip_select)
  VAR_8 |= VAR_1;

 FUNC_0(VAR_7, &VAR_7->map->EEPROM_CMD, VAR_8);
 FUNC_1(10);
}
