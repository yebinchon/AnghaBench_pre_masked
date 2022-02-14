
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int * PHY; } ;


 int FUNC_0 (struct rtl8187_priv*,int *,int) ;

void FUNC_1(struct ieee80211_hw *VAR_0, u8 VAR_1, u32 VAR_2)
{
 struct rtl8187_priv *VAR_3 = VAR_0->priv;

 VAR_2 <<= 8;
 VAR_2 |= VAR_1 | 0x80;

 FUNC_0(VAR_3, &VAR_3->map->PHY[3], (VAR_2 >> 24) & 0xFF);
 FUNC_0(VAR_3, &VAR_3->map->PHY[2], (VAR_2 >> 16) & 0xFF);
 FUNC_0(VAR_3, &VAR_3->map->PHY[1], (VAR_2 >> 8) & 0xFF);
 FUNC_0(VAR_3, &VAR_3->map->PHY[0], VAR_2 & 0xFF);
}
