
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl8187_priv {int* aifsn; int slot_time; TYPE_1__* map; scalar_t__ is_rtl8187b; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int aifs; int txop; int cw_max; int cw_min; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int CW_VAL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (struct rtl8187_priv*,int ,int) ;
 int FUNC_2 (struct rtl8187_priv*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_3,
      struct ieee80211_vif *VAR_4, u16 VAR_5,
      const struct ieee80211_tx_queue_params *VAR_6)
{
 struct rtl8187_priv *VAR_7 = VAR_3->priv;
 u8 VAR_8, VAR_9;

 if (VAR_5 > 3)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6->cw_min);
 VAR_9 = FUNC_0(VAR_6->cw_max);

 if (VAR_7->is_rtl8187b) {
  VAR_7->aifsn[VAR_5] = VAR_6->aifs;
  FUNC_1(VAR_7, VAR_2[VAR_5],
      (VAR_6->txop << 16) | (VAR_9 << 12) |
      (VAR_8 << 8) | (VAR_6->aifs *
      VAR_7->slot_time + VAR_1));
 } else {
  if (VAR_5 != 0)
   return -VAR_0;

  FUNC_2(VAR_7, &VAR_7->map->CW_VAL,
     VAR_8 | (VAR_9 << 4));
 }
 return 0;
}
