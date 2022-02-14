
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_btcoex_hw {int bt_coex_mode; int bt_coex_mode2; int* wlan_weight; int* bt_weight; int bt_coex_weights; int wlanactive_gpio; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_hw*,int ,int ,int) ;
 int FUNC_5 (struct ath_hw*,int,int) ;
 int FUNC_6 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_11)
{
 struct ath_btcoex_hw *VAR_12 = &VAR_11->btcoex_hw;
 u32 VAR_13;
 int VAR_14;





 FUNC_5(VAR_11, VAR_1, VAR_12->bt_coex_mode);
 FUNC_5(VAR_11, VAR_2, VAR_12->bt_coex_mode2);


 if (FUNC_2(VAR_11)) {
  FUNC_5(VAR_11, VAR_4, VAR_12->wlan_weight[0]);
  FUNC_5(VAR_11, VAR_5, VAR_12->wlan_weight[1]);
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
   FUNC_5(VAR_11, FUNC_0(VAR_14),
      VAR_12->bt_weight[VAR_14]);
 } else
  FUNC_5(VAR_11, VAR_3, VAR_12->bt_coex_weights);



 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_3(VAR_11, 0x50040);
  VAR_13 &= 0xFFFFFEFF;
  FUNC_5(VAR_11, 0x50040, VAR_13);
 }

 FUNC_4(VAR_11, VAR_9, VAR_10, 1);
 FUNC_4(VAR_11, VAR_8, VAR_7, 0);

 FUNC_6(VAR_11, VAR_12->wlanactive_gpio,
       VAR_6);
}
