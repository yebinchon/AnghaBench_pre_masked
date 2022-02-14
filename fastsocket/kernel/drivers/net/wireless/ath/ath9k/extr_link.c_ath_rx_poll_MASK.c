
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int hw_check_work; int hw; int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(unsigned long VAR_1)
{
 struct ath_softc *VAR_2 = (struct ath_softc *)VAR_1;

 if (!FUNC_1(VAR_0, &VAR_2->sc_flags))
  FUNC_0(VAR_2->hw, &VAR_2->hw_check_work);
}
