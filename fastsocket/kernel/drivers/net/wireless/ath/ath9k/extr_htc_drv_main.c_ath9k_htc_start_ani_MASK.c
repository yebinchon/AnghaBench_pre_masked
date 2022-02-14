
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long longcal_timer; unsigned long shortcal_timer; unsigned long checkani_timer; } ;
struct ath_common {int hw; TYPE_1__ ani; } ;
struct ath9k_htc_priv {int ani_work; int op_flags; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ath9k_htc_priv *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_3->ah);
 unsigned long VAR_5 = FUNC_2(VAR_2);

 VAR_4->ani.longcal_timer = VAR_5;
 VAR_4->ani.shortcal_timer = VAR_5;
 VAR_4->ani.checkani_timer = VAR_5;

 FUNC_4(VAR_1, &VAR_3->op_flags);

 FUNC_1(VAR_4->hw, &VAR_3->ani_work,
         FUNC_3(VAR_0));
}
