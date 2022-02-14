
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int hw_reset_work; int hw; int sc_flags; } ;
typedef enum ath_reset_type { ____Placeholder_ath_reset_type } ath_reset_type ;


 int FUNC_0 (struct ath_softc*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ath_softc *VAR_1, enum ath_reset_type VAR_2)
{



 FUNC_2(VAR_0, &VAR_1->sc_flags);
 FUNC_1(VAR_1->hw, &VAR_1->hw_reset_work);
}
