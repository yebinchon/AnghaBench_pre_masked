
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {scalar_t__ bt_state; int ready; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath9k_hw_cal_data {int done_txiqcal_once; int done_txclcal_once; int rtt_done; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int) ;
 int FUNC_7 (struct ath_hw*,int) ;
 int FUNC_8 (struct ath_hw*,int) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_10 (int) ;

int FUNC_11(struct ath_hw *VAR_8, struct ath9k_channel *VAR_9,
    struct ath9k_hw_cal_data *VAR_10)
{
 struct ath9k_hw_mci *VAR_11 = &VAR_8->btcoex_hw.mci;

 if (!VAR_11->ready)
  return 0;

 if (!FUNC_0(VAR_9) || (VAR_11->bt_state != VAR_7))
  goto exit;

 if (!FUNC_4(VAR_8, VAR_1) &&
     !FUNC_4(VAR_8, VAR_2))
  goto exit;







 FUNC_3(VAR_8, VAR_0,
    (VAR_1 |
     VAR_2));

 FUNC_6(VAR_8, 1);
 FUNC_8(VAR_8, 1);
 FUNC_10(1);

 if (FUNC_0(VAR_9))
  FUNC_7(VAR_8, 1);

 VAR_11->bt_state = VAR_6;

 FUNC_1(VAR_8, VAR_3,
      1 << VAR_4);

 if (VAR_10) {
  VAR_10->done_txiqcal_once = 0;
  VAR_10->done_txclcal_once = 0;
  VAR_10->rtt_done = 0;
 }

 if (!FUNC_9(VAR_8, VAR_9))
  return -VAR_5;

 FUNC_2(VAR_8, VAR_3,
      1 << VAR_4);

exit:
 FUNC_5(VAR_8);
 return 0;
}
