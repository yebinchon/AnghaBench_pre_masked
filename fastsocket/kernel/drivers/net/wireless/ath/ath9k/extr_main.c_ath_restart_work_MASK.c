
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int hw_pll_work; int hw; int sc_ah; int tx_complete_work; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ath_softc *VAR_1)
{
 FUNC_4(VAR_1->hw, &VAR_1->tx_complete_work, 0);

 if (FUNC_1(VAR_1->sc_ah) || FUNC_0(VAR_1->sc_ah))
  FUNC_4(VAR_1->hw, &VAR_1->hw_pll_work,
         FUNC_5(VAR_0));

 FUNC_3(VAR_1, 3);
 FUNC_2(VAR_1);
}
