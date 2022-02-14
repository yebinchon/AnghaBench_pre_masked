
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {scalar_t__ hw_rev; int txpwr_base; TYPE_2__* map; TYPE_1__* channels; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_4__ {int TX_GAIN_OFDM; int TX_GAIN_CCK; } ;
struct TYPE_3__ {int hw_value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8187_priv*,int *,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_4, int VAR_5)
{
 struct rtl8187_priv *VAR_6 = VAR_4->priv;
 u8 VAR_7, VAR_8;
 const u8 *VAR_9;
 int VAR_10;

 VAR_7 = VAR_6->channels[VAR_5 - 1].hw_value & 0xF;
 VAR_8 = VAR_6->channels[VAR_5 - 1].hw_value >> 4;

 if (VAR_7 > 15)
  VAR_7 = (VAR_6->hw_rev == VAR_0) ? 15 : 22;
 else
  VAR_7 += (VAR_6->hw_rev == VAR_0) ? 0 : 7;
 VAR_7 += VAR_6->txpwr_base & 0xF;
 VAR_7 = FUNC_0(VAR_7, (u8)35);

 if (VAR_8 > 15)
  VAR_8 = (VAR_6->hw_rev == VAR_0) ? 17 : 25;
 else
  VAR_8 += (VAR_6->hw_rev == VAR_0) ? 2 : 10;
 VAR_8 += (VAR_6->txpwr_base >> 4) & 0xF;
 VAR_8 = FUNC_0(VAR_8, (u8)35);

 if (VAR_5 == 14)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;

 if (VAR_6->hw_rev == VAR_0) {
  if (VAR_7 <= 6)
   ;
  else if (VAR_7 <= 11)
   VAR_9 += 8;
  else
   VAR_9 += 16;
 } else {
  if (VAR_7 <= 5)
   ;
  else if (VAR_7 <= 11)
   VAR_9 += 8;
  else if (VAR_7 <= 17)
   VAR_9 += 16;
  else
   VAR_9 += 24;
 }

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  FUNC_3(VAR_4, 0x44 + VAR_10, *VAR_9++);

 FUNC_2(VAR_6, &VAR_6->map->TX_GAIN_CCK,
    VAR_1[VAR_7] << 1);
 FUNC_1(1);

 FUNC_2(VAR_6, &VAR_6->map->TX_GAIN_OFDM,
    VAR_1[VAR_8] << 1);
 if (VAR_6->hw_rev == VAR_0) {
  if (VAR_8 <= 11) {
   FUNC_4(VAR_4, 0x87, 0x60);
   FUNC_4(VAR_4, 0x89, 0x60);
  } else {
   FUNC_4(VAR_4, 0x87, 0x5c);
   FUNC_4(VAR_4, 0x89, 0x5c);
  }
 } else {
  if (VAR_8 <= 11) {
   FUNC_4(VAR_4, 0x87, 0x5c);
   FUNC_4(VAR_4, 0x89, 0x5c);
  } else if (VAR_8 <= 17) {
   FUNC_4(VAR_4, 0x87, 0x54);
   FUNC_4(VAR_4, 0x89, 0x54);
  } else {
   FUNC_4(VAR_4, 0x87, 0x50);
   FUNC_4(VAR_4, 0x89, 0x50);
  }
 }
 FUNC_1(1);
}
