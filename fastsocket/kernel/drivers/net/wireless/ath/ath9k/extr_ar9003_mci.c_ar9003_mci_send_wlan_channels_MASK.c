
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int wlan_channels_update; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int FUNC_0 (struct ath_hw*,int) ;

void FUNC_1(struct ath_hw *VAR_0)
{
 struct ath9k_hw_mci *VAR_1 = &VAR_0->btcoex_hw.mci;

 VAR_1->wlan_channels_update = 1;
 FUNC_0(VAR_0, 1);
}
