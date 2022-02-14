
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {scalar_t__ bt_state; int query_bt; int need_flush_btinfo; int ready; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath_hw*,int) ;
 int FUNC_1 (struct ath_hw*) ;

void FUNC_2(struct ath_hw *VAR_1)
{
 struct ath9k_hw_mci *VAR_2 = &VAR_1->btcoex_hw.mci;

 if (!VAR_2->ready)
  return;





 FUNC_1(VAR_1);
 FUNC_0(VAR_1, 1);

 if ((VAR_2->bt_state == VAR_0) &&
     (VAR_2->query_bt == 1)) {
  VAR_2->need_flush_btinfo = 1;
 }
}
