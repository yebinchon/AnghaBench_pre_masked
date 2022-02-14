
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tx_corr_coeff ;
struct coeff {int** mag_coeff; int** phs_coeff; int* iqc_coeff; } ;
struct ath_hw {int txchainmask; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int** tx_corr_coeff; int* num_measures; int done_txiqcal_once; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct ath_hw*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int) ;
 int FUNC_6 (int*,int,int ) ;
 int FUNC_7 (int **,int ,int) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_12,
       struct coeff *VAR_13,
       bool VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 u32 VAR_18[VAR_10][VAR_0];
 struct ath9k_hw_cal_data *VAR_19 = VAR_12->caldata;

 FUNC_7(VAR_18, 0, sizeof(VAR_18));
 for (VAR_15 = 0; VAR_15 < VAR_10 / 2; VAR_15++) {
  VAR_18[VAR_15 * 2][0] = VAR_18[(VAR_15 * 2) + 1][0] =
     FUNC_0(VAR_15);
  if (!FUNC_3(VAR_12)) {
   VAR_18[VAR_15 * 2][1] =
   VAR_18[(VAR_15 * 2) + 1][1] =
     FUNC_1(VAR_15);

   VAR_18[VAR_15 * 2][2] =
   VAR_18[(VAR_15 * 2) + 1][2] =
     FUNC_2(VAR_15);
  }
 }


 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (!(VAR_12->txchainmask & (1 << VAR_15)))
   continue;
  VAR_17 = FUNC_4(VAR_12,
    VAR_8,
    VAR_1);

  if (VAR_17 > VAR_10)
   VAR_17 = VAR_10;


  if (VAR_17 > 1) {

   FUNC_6(VAR_13->mag_coeff[VAR_15],
     VAR_17, VAR_9);


   FUNC_6(VAR_13->phs_coeff[VAR_15],
     VAR_17, VAR_11);
  }

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {

   VAR_13->iqc_coeff[0] = (VAR_13->mag_coeff[VAR_15][VAR_16] & 0x7f) |
    ((VAR_13->phs_coeff[VAR_15][VAR_16] & 0x7f) << 7);

   if ((VAR_16 % 2) == 0)
    FUNC_5(VAR_12, VAR_18[VAR_16][VAR_15],
     VAR_6,
     VAR_13->iqc_coeff[0]);
   else
    FUNC_5(VAR_12, VAR_18[VAR_16][VAR_15],
     VAR_7,
     VAR_13->iqc_coeff[0]);

   if (VAR_19)
    VAR_19->tx_corr_coeff[VAR_16][VAR_15] =
     VAR_13->iqc_coeff[0];
  }
  if (VAR_19)
   VAR_19->num_measures[VAR_15] = VAR_17;
 }

 FUNC_5(VAR_12, VAR_4,
        VAR_5, 0x1);
 FUNC_5(VAR_12, VAR_2,
        VAR_3, 0x1);

 if (VAR_19)
  VAR_19->done_txiqcal_once = VAR_14;

 return;
}
