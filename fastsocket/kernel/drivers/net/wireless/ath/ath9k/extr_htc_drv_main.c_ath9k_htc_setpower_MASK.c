
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_htc_priv {int htc_pm_lock; int ah; } ;
typedef enum ath9k_power_mode { ____Placeholder_ath9k_power_mode } ath9k_power_mode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct ath9k_htc_priv *VAR_0,
   enum ath9k_power_mode VAR_1)
{
 bool VAR_2;

 FUNC_1(&VAR_0->htc_pm_lock);
 VAR_2 = FUNC_0(VAR_0->ah, VAR_1);
 FUNC_2(&VAR_0->htc_pm_lock);

 return VAR_2;
}
