
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; int update_2g5g; scalar_t__ is_2g; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (struct ath_hw*,int) ;
 scalar_t__ FUNC_7 (struct ath_hw*,int ,int,int) ;
 struct ath_common* FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_common*,int ,char*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_17)
{
 struct ath_common *VAR_18 = FUNC_8(VAR_17);
 struct ath9k_hw_mci *VAR_19 = &VAR_17->btcoex_hw.mci;
 u32 VAR_20;
 u32 VAR_21 = 150;

 VAR_19->bt_state = VAR_16;
 VAR_20 = FUNC_0(VAR_17, VAR_6);

 FUNC_2(VAR_17, VAR_6, 0);
 FUNC_2(VAR_17, VAR_11,
    FUNC_0(VAR_17, VAR_11));
 FUNC_2(VAR_17, VAR_7,
    FUNC_0(VAR_17, VAR_7));

 FUNC_3(VAR_17, 1);
 FUNC_5(VAR_17, 1);

 if (!FUNC_7(VAR_17, VAR_11,
      VAR_13, 500))
  goto clear_redunt;

 VAR_19->bt_state = VAR_15;
 FUNC_6(VAR_17, 1);
 FUNC_10(10);





 FUNC_2(VAR_17, VAR_1, 0xFFFFFFFF);
 FUNC_2(VAR_17, VAR_2, 0xFFFFFFFF);
 FUNC_2(VAR_17, VAR_3, 0xFFFFFFFF);
 FUNC_2(VAR_17, VAR_4, 0xFFFFFFFF);
 FUNC_2(VAR_17, VAR_0, 0X000000FF);







 FUNC_2(VAR_17, VAR_11,
    VAR_9);
 FUNC_2(VAR_17, VAR_7, VAR_5);

 if (VAR_19->is_2g) {
  FUNC_4(VAR_17, 1);
  FUNC_10(5);
 }

 if ((VAR_19->is_2g && !VAR_19->update_2g5g)) {
  if (FUNC_7(VAR_17,
     VAR_11,
     VAR_10,
     VAR_21))
   FUNC_9(VAR_18, VAR_14,
    "MCI WLAN has control over the LNA & BT obeys it\n");
  else
   FUNC_9(VAR_18, VAR_14,
    "MCI BT didn't respond to LNA_TRANS\n");
 }

clear_redunt:

 if ((VAR_19->bt_state == VAR_15) &&
     (FUNC_1(VAR_17, VAR_11,
       VAR_13)) &&
     (FUNC_1(VAR_17, VAR_11,
       VAR_12) == 0)) {
  FUNC_2(VAR_17, VAR_11,
     VAR_13);
  FUNC_2(VAR_17, VAR_7,
     VAR_8);
 }

 FUNC_2(VAR_17, VAR_6, VAR_20);
}
