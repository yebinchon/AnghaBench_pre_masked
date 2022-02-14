
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {int enabled; int* wlan_weight; scalar_t__ scheme; int wlanactive_gpio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int ) ;

void FUNC_9(struct ath_hw *VAR_11)
{
 struct ath_btcoex_hw *VAR_12 = &VAR_11->btcoex_hw;
 int VAR_13;

 VAR_12->enabled = 0;
 if (FUNC_3(VAR_11) || FUNC_4(VAR_11)) {
  FUNC_6(VAR_11, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
   FUNC_5(VAR_11, FUNC_1(VAR_13),
      VAR_12->wlan_weight[VAR_13]);
  return;
 }
 FUNC_8(VAR_11, VAR_12->wlanactive_gpio, 0);

 FUNC_7(VAR_11, VAR_12->wlanactive_gpio,
   VAR_8);

 if (VAR_12->scheme == VAR_9) {
  FUNC_5(VAR_11, VAR_1, VAR_7 | VAR_6);
  FUNC_5(VAR_11, VAR_2, 0);

  if (FUNC_2(VAR_11)) {
   FUNC_5(VAR_11, VAR_4, 0);
   FUNC_5(VAR_11, VAR_5, 0);
   for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
    FUNC_5(VAR_11, FUNC_0(VAR_13), 0);
  } else
   FUNC_5(VAR_11, VAR_3, 0);

 }
}
