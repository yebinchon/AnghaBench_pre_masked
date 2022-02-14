
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_ani_state {scalar_t__ ofdm_errors; scalar_t__ cck_errors; } ;
struct ath5k_hw {int ani_tasklet; struct ath5k_ani_state ani_state; } ;
typedef enum ath5k_phy_error_code { ____Placeholder_ath5k_phy_error_code } ath5k_phy_error_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct ath5k_hw *VAR_4,
      enum ath5k_phy_error_code VAR_5)
{
 struct ath5k_ani_state *VAR_6 = &VAR_4->ani_state;

 if (VAR_5 == VAR_1) {
  VAR_6->ofdm_errors++;
  if (VAR_6->ofdm_errors > VAR_3)
   FUNC_0(&VAR_4->ani_tasklet);
 } else if (VAR_5 == VAR_0) {
  VAR_6->cck_errors++;
  if (VAR_6->cck_errors > VAR_2)
   FUNC_0(&VAR_4->ani_tasklet);
 }
}
