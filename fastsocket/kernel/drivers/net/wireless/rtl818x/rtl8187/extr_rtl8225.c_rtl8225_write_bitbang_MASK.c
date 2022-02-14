
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int RFPinsSelect; int RFPinsOutput; int RFPinsEnable; } ;


 int FUNC_0 (struct rtl8187_priv*,int *) ;
 int FUNC_1 (struct rtl8187_priv*,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct rtl8187_priv *VAR_3 = VAR_0->priv;
 u16 VAR_4, VAR_5, VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = (VAR_2 << 4) | (VAR_1 & 0xf);

 VAR_4 = FUNC_0(VAR_3, &VAR_3->map->RFPinsOutput) & 0xfff3;
 VAR_6 = FUNC_0(VAR_3, &VAR_3->map->RFPinsEnable);

 FUNC_1(VAR_3, &VAR_3->map->RFPinsEnable, VAR_6 | 0x7);

 VAR_5 = FUNC_0(VAR_3, &VAR_3->map->RFPinsSelect);
 FUNC_1(VAR_3, &VAR_3->map->RFPinsSelect, VAR_5 | 0x7);
 FUNC_2(10);

 FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_4 | (1 << 2));
 FUNC_2(2);
 FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_4);
 FUNC_2(10);

 for (VAR_8 = 15; VAR_8 >= 0; VAR_8--) {
  u16 VAR_9 = VAR_4 | (VAR_7 & (1 << VAR_8)) >> VAR_8;

  if (VAR_8 & 1)
   FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_9);

  FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_9 | (1 << 1));
  FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_9 | (1 << 1));

  if (!(VAR_8 & 1))
   FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_9);
 }

 FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_4 | (1 << 2));
 FUNC_2(10);

 FUNC_1(VAR_3, &VAR_3->map->RFPinsOutput, VAR_4 | (1 << 2));
 FUNC_1(VAR_3, &VAR_3->map->RFPinsSelect, VAR_5);
}
