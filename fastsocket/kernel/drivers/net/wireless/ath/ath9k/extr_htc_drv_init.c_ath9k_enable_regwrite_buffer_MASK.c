
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; } ;
struct TYPE_2__ {int mwrite_cnt; } ;


 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ath_hw *VAR_1 = (struct ath_hw *) VAR_0;
 struct ath_common *VAR_2 = FUNC_0(VAR_1);
 struct ath9k_htc_priv *VAR_3 = (struct ath9k_htc_priv *) VAR_2->priv;

 FUNC_1(&VAR_3->wmi->mwrite_cnt);
}
