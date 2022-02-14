
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int tx_chainmask; } ;
struct ath_hw {TYPE_1__ caps; scalar_t__ paprd_training_power; } ;
struct ath9k_hw_cal_data {scalar_t__* small_signal_gain; scalar_t__** pa_table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (struct ath_hw*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,scalar_t__) ;

void FUNC_3(struct ath_hw *VAR_12,
     struct ath9k_hw_cal_data *VAR_13,
     int VAR_14)
{
 u32 *VAR_15 = VAR_13->pa_table[VAR_14];
 u32 VAR_16 = VAR_13->small_signal_gain[VAR_14];
 u32 VAR_17 = VAR_12->paprd_training_power;
 u32 VAR_18 = 0;
 int VAR_19;

 if (VAR_14 == 0)
  VAR_18 = VAR_4;
 else if (VAR_14 == 1)
  VAR_18 = VAR_5;
 else if (VAR_14 == 2)
  VAR_18 = VAR_6;

 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  FUNC_2(VAR_12, VAR_18, VAR_15[VAR_19]);
  VAR_18 = VAR_18 + 4;
 }

 if (VAR_14 == 0)
  VAR_18 = VAR_7;
 else if (VAR_14 == 1)
  VAR_18 = VAR_8;
 else
  VAR_18 = VAR_9;

 FUNC_1(VAR_12, VAR_18, VAR_10, VAR_16);

 FUNC_1(VAR_12, VAR_0,
        VAR_3,
        VAR_17);

 if (VAR_12->caps.tx_chainmask & FUNC_0(1))
  FUNC_1(VAR_12, VAR_1,
         VAR_3,
         VAR_17);

 if (VAR_12->caps.tx_chainmask & FUNC_0(2))

  FUNC_1(VAR_12, VAR_2,
         VAR_3,
         VAR_17);
}
