
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {scalar_t__ opmode; int ah_beacon_rssi_avg; } ;
struct ath5k_ani_state {scalar_t__ firstep_level; scalar_t__ spur_level; scalar_t__ noise_imm_level; int ofdm_weak_sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_2 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_4, struct ath5k_ani_state *VAR_5)
{
 int VAR_6 = FUNC_5(&VAR_4->ah_beacon_rssi_avg);

 FUNC_0(VAR_4, VAR_2, "lower immunity");

 if (VAR_4->opmode == VAR_3) {

  if (VAR_5->firstep_level > 0) {
   FUNC_1(VAR_4, VAR_5->firstep_level - 1);
   return;
  }
 } else {

  if (VAR_6 > VAR_0) {



  } else if (VAR_6 > VAR_1) {


   if (!VAR_5->ofdm_weak_sig) {
    FUNC_3(VAR_4,
          1);
    return;
   }
   if (VAR_5->firstep_level > 0) {
    FUNC_1(VAR_4,
       VAR_5->firstep_level - 1);
    return;
   }
  } else {

   if (VAR_5->firstep_level > 0) {
    FUNC_1(VAR_4,
       VAR_5->firstep_level - 1);
    return;
   }
  }
 }


 if (VAR_5->spur_level > 0) {
  FUNC_4(VAR_4, VAR_5->spur_level - 1);
  return;
 }


 if (VAR_5->noise_imm_level > 0) {
  FUNC_2(VAR_4, VAR_5->noise_imm_level - 1);
  return;
 }
}
