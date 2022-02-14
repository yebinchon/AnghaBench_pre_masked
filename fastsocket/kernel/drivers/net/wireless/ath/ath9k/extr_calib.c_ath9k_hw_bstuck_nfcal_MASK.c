
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int curchan; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int nfcal_interference; int nfcal_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct ath_hw *VAR_2)
{
 struct ath9k_hw_cal_data *VAR_3 = VAR_2->caldata;

 if (FUNC_3(!VAR_3))
  return;
 if (!VAR_3->nfcal_pending)
  FUNC_2(VAR_2, 1);
 else if (!(FUNC_0(VAR_2, VAR_0) & VAR_1))
  FUNC_1(VAR_2, VAR_2->curchan);

 VAR_3->nfcal_interference = 1;
}
