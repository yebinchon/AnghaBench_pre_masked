
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_2__* map; TYPE_1__* channels; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_4__ {int TX_GAIN_OFDM; int TX_GAIN_CCK; } ;
struct TYPE_3__ {int hw_value; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8180_priv*,int *) ;
 int FUNC_3 (struct rtl8180_priv*,int *,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4, int VAR_5)
{
 struct rtl8180_priv *VAR_6 = VAR_4->priv;
 u8 VAR_7, VAR_8;
 const u8 *VAR_9;
 int VAR_10;

 VAR_7 = VAR_6->channels[VAR_5 - 1].hw_value & 0xFF;
 VAR_8 = VAR_6->channels[VAR_5 - 1].hw_value >> 8;

 if (VAR_5 == 14)
  VAR_9 = VAR_3;
 else if (VAR_7 == 12)
  VAR_9 = VAR_2;
 else if (VAR_7 == 13)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  FUNC_4(VAR_4, 0x44 + VAR_10, *VAR_9++);

 VAR_7 = FUNC_0(VAR_7, (u8)35);
 if (VAR_7 == 13 || VAR_7 == 14)
  VAR_7 = 12;
 if (VAR_7 >= 15)
  VAR_7 -= 2;

 FUNC_3(VAR_6, &VAR_6->map->TX_GAIN_CCK, VAR_7);
 FUNC_2(VAR_6, &VAR_6->map->TX_GAIN_CCK);
 FUNC_1(1);

 VAR_8 = FUNC_0(VAR_8, (u8)35);
 FUNC_3(VAR_6, &VAR_6->map->TX_GAIN_OFDM, VAR_8);

 FUNC_5(VAR_4, 2, 0x62);
 FUNC_5(VAR_4, 5, 0x00);
 FUNC_5(VAR_4, 6, 0x40);
 FUNC_5(VAR_4, 7, 0x00);
 FUNC_5(VAR_4, 8, 0x40);

 FUNC_1(1);
}
