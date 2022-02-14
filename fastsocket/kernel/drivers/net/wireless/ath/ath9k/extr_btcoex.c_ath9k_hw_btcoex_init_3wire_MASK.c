
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {int btpriority_gpio; int btactive_gpio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ) ;

void FUNC_3(struct ath_hw *VAR_6)
{
 struct ath_btcoex_hw *VAR_7 = &VAR_6->btcoex_hw;


 FUNC_1(VAR_6, VAR_0,
   (VAR_2 |
    VAR_1));



 FUNC_0(VAR_6, VAR_3,
   VAR_4,
   VAR_7->btactive_gpio);

 FUNC_0(VAR_6, VAR_3,
   VAR_5,
   VAR_7->btpriority_gpio);



 FUNC_2(VAR_6, VAR_7->btactive_gpio);
 FUNC_2(VAR_6, VAR_7->btpriority_gpio);
}
