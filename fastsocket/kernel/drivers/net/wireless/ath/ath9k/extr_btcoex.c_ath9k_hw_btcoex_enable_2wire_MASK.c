
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {int wlanactive_gpio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_1)
{
 struct ath_btcoex_hw *VAR_2 = &VAR_1->btcoex_hw;


 FUNC_0(VAR_1, VAR_2->wlanactive_gpio,
       VAR_0);
}
