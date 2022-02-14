
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {int wiphy; struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int EEPROM_CMD; int CMD; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8187_priv*,int *) ;
 int FUNC_2 (struct rtl8187_priv*,int *,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4)
{
 struct rtl8187_priv *VAR_5 = VAR_4->priv;
 u8 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, &VAR_5->map->CMD);
 VAR_6 &= (1 << 1);
 VAR_6 |= VAR_1;
 FUNC_2(VAR_5, &VAR_5->map->CMD, VAR_6);

 VAR_7 = 10;
 do {
  FUNC_0(2);
  if (!(FUNC_1(VAR_5, &VAR_5->map->CMD) &
        VAR_1))
   break;
 } while (--VAR_7);

 if (!VAR_7) {
  FUNC_3(VAR_4->wiphy, "Reset timeout!\n");
  return -VAR_0;
 }


 FUNC_2(VAR_5, &VAR_5->map->EEPROM_CMD, VAR_3);

 VAR_7 = 10;
 do {
  FUNC_0(4);
  if (!(FUNC_1(VAR_5, &VAR_5->map->EEPROM_CMD) &
        VAR_2))
   break;
 } while (--VAR_7);

 if (!VAR_7) {
  FUNC_3(VAR_4->wiphy, "eeprom reset timeout!\n");
  return -VAR_0;
 }

 return 0;
}
