
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ath_softc {int ant_rx; struct ath_hw* sc_ah; } ;
struct ath_hw_antcomb_conf {void* alt_lna_conf; void* main_lna_conf; } ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ antenna_diversity; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct ath_hw*,int) ;
 int FUNC_1 (struct ath_hw*,struct ath_hw_antcomb_conf*) ;
 int FUNC_2 (struct ath_hw*,struct ath_hw_antcomb_conf*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;

void FUNC_4(struct ath_softc *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_2->sc_ah;
 struct ath_common *VAR_4 = FUNC_3(VAR_3);
 struct ath_hw_antcomb_conf VAR_5;
 u8 VAR_6;

 FUNC_1(VAR_3, &VAR_5);

 if (VAR_2->ant_rx == 1)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 VAR_5.main_lna_conf = VAR_6;
 VAR_5.alt_lna_conf = VAR_6;

 FUNC_2(VAR_3, &VAR_5);

 if (VAR_4->antenna_diversity)
  FUNC_0(VAR_3, 1);
}
