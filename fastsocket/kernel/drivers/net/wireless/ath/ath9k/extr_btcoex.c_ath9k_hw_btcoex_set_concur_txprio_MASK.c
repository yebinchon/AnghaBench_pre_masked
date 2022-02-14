
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_btcoex_hw {int * tx_prio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;

void FUNC_0(struct ath_hw *VAR_1, u8 *VAR_2)
{
 struct ath_btcoex_hw *VAR_3 = &VAR_1->btcoex_hw;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->tx_prio[VAR_4] = VAR_2[VAR_4];
}
