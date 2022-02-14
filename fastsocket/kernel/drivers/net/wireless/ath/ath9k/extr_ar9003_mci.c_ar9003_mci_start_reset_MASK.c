
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int FUNC_0 (struct ath9k_channel*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int *,int,int,int) ;
 scalar_t__ FUNC_6 (struct ath_hw*,int ,int ,int) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_common*,int ,char*) ;

bool FUNC_9(struct ath_hw *VAR_7, struct ath9k_channel *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_7(VAR_7);
 struct ath9k_hw_mci *VAR_10 = &VAR_7->btcoex_hw.mci;
 u32 VAR_11[4] = {0, 0, 0, 0};

 FUNC_2(VAR_7, FUNC_0(VAR_8));

 if (VAR_10->bt_state != VAR_3)
  return 0;

 VAR_10->bt_state = VAR_2;






 FUNC_3(VAR_7);

 FUNC_1(VAR_11, VAR_6);
 FUNC_5(VAR_7, VAR_4, 0, VAR_11,
    16, 1, 0);



 if (FUNC_6(VAR_7, VAR_5,
        0, 25000))
  FUNC_8(VAR_9, VAR_0, "MCI BT_CAL_DONE received\n");
 else
  FUNC_8(VAR_9, VAR_0,
   "MCI BT_CAL_DONE not received\n");

 VAR_10->bt_state = VAR_1;

 FUNC_4(VAR_7);

 return 1;
}
