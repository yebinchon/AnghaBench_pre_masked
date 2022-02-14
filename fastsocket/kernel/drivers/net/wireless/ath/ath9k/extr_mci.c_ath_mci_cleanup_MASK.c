
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,int ,char*) ;

void FUNC_3(struct ath_softc *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_1(VAR_1->sc_ah);
 struct ath_hw *VAR_3 = VAR_1->sc_ah;

 FUNC_0(VAR_3);

 FUNC_2(VAR_2, VAR_0, "MCI De-Initialized\n");
}
