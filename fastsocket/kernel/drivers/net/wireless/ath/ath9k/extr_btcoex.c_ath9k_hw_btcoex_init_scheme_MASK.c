
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {void* scheme; int btpriority_gpio; int wlanactive_gpio; int btactive_gpio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;
struct ath_common {int btcoex_enabled; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;

void FUNC_4(struct ath_hw *VAR_9)
{
 struct ath_common *VAR_10 = FUNC_3(VAR_9);
 struct ath_btcoex_hw *VAR_11 = &VAR_9->btcoex_hw;




 if (!VAR_10->btcoex_enabled) {
  VAR_11->scheme = VAR_4;
  return;
 }

 if (FUNC_2(VAR_9)) {
  VAR_11->scheme = VAR_3;
  VAR_11->btactive_gpio = VAR_1;
  VAR_11->wlanactive_gpio = VAR_8;
  VAR_11->btpriority_gpio = VAR_6;
 } else if (FUNC_0(VAR_9)) {
  VAR_11->btactive_gpio = VAR_0;
  VAR_11->wlanactive_gpio = VAR_7;

  if (FUNC_1(VAR_9)) {
   VAR_11->scheme = VAR_3;
   VAR_11->btpriority_gpio = VAR_5;
  } else {
   VAR_11->scheme = VAR_2;
  }
 }
}
