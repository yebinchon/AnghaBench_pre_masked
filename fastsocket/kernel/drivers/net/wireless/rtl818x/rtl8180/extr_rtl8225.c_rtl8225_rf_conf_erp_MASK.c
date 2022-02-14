
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_slot; } ;
struct TYPE_2__ {int CW_VAL; int EIFS; int DIFS; int SIFS; int SLOT; } ;


 int FUNC_0 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
    struct ieee80211_bss_conf *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_0->priv;

 if (VAR_1->use_short_slot) {
  FUNC_0(VAR_2, &VAR_2->map->SLOT, 0x9);
  FUNC_0(VAR_2, &VAR_2->map->SIFS, 0x22);
  FUNC_0(VAR_2, &VAR_2->map->DIFS, 0x14);
  FUNC_0(VAR_2, &VAR_2->map->EIFS, 81);
  FUNC_0(VAR_2, &VAR_2->map->CW_VAL, 0x73);
 } else {
  FUNC_0(VAR_2, &VAR_2->map->SLOT, 0x14);
  FUNC_0(VAR_2, &VAR_2->map->SIFS, 0x44);
  FUNC_0(VAR_2, &VAR_2->map->DIFS, 0x24);
  FUNC_0(VAR_2, &VAR_2->map->EIFS, 81);
  FUNC_0(VAR_2, &VAR_2->map->CW_VAL, 0xa5);
 }
}
