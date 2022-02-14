
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_mci_profile {int aggr_limit; } ;
struct ath_btcoex {int btcoex_period; int duty_cycle; struct ath_mci_profile mci; } ;



__attribute__((used)) static void FUNC_0(struct ath_btcoex *VAR_0)
{
 struct ath_mci_profile *VAR_1 = &VAR_0->mci;
 u32 VAR_2 = VAR_0->btcoex_period *
    (100 - VAR_0->duty_cycle) / 100;







 if ((VAR_2 <= 4) &&
     (!VAR_1->aggr_limit || (VAR_1->aggr_limit > (2 * VAR_2))))
  VAR_1->aggr_limit = 2 * VAR_2;
}
