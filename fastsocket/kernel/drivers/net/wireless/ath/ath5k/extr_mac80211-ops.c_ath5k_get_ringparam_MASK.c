
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {TYPE_1__* txqs; } ;
struct TYPE_2__ {int txq_max; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_3,
    u32 *VAR_4, u32 *VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 struct ath5k_hw *VAR_8 = VAR_3->priv;

 *VAR_4 = VAR_8->txqs[VAR_0].txq_max;

 *VAR_5 = VAR_1;
 *VAR_6 = *VAR_7 = VAR_2;
}
