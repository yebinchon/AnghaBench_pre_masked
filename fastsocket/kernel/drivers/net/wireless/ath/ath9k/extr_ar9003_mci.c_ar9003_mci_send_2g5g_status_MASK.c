
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; scalar_t__ is_2g; int update_2g5g; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath_hw*,int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_9, bool VAR_10)
{
 struct ath9k_hw_mci *VAR_11 = &VAR_9->btcoex_hw.mci;
 u32 VAR_12, VAR_13, VAR_14;

 if (!VAR_11->update_2g5g || (VAR_11->bt_state == VAR_6))
  return;

 if (VAR_11->is_2g) {
  VAR_12 = VAR_0;
  VAR_14 = VAR_1;
  VAR_13 = VAR_2;
 } else {
  VAR_12 = VAR_3;
  VAR_14 = VAR_4;
  VAR_13 = VAR_5;
 }

 if (VAR_14)
  FUNC_0(VAR_9, VAR_10,
           VAR_7,
           VAR_14);
 if (VAR_13)
  FUNC_0(VAR_9, VAR_10,
           VAR_8,
           VAR_13);
}
