
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int txchainmask; struct ath9k_hw_cal_data* caldata; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {int paprd_done; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_hw_cal_data*,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_2->sc_ah;
 struct ath_common *VAR_4 = FUNC_3(VAR_3);
 struct ath9k_hw_cal_data *VAR_5 = VAR_3->caldata;
 int VAR_6;

 if (!VAR_5 || !VAR_5->paprd_done) {
  FUNC_4(VAR_4, VAR_1, "Failed to activate PAPRD\n");
  return;
 }

 FUNC_1(VAR_3, 0);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_3->txchainmask & FUNC_0(VAR_6)))
   continue;

  FUNC_2(VAR_3, VAR_5, VAR_6);
 }

 FUNC_4(VAR_4, VAR_1, "Activating PAPRD\n");
 FUNC_1(VAR_3, 1);
}
