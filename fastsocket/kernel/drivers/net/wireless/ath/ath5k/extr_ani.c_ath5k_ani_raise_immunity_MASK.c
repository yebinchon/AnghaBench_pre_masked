
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_spur_level; } ;
struct ath5k_hw {scalar_t__ opmode; TYPE_2__* ah_current_channel; TYPE_1__ ani_state; int ah_beacon_rssi_avg; } ;
struct ath5k_ani_state {scalar_t__ noise_imm_level; scalar_t__ spur_level; scalar_t__ firstep_level; scalar_t__ ofdm_weak_sig; } ;
struct TYPE_4__ {scalar_t__ band; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_2 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_7, struct ath5k_ani_state *VAR_8,
    bool VAR_9)
{
 int VAR_10 = FUNC_5(&VAR_7->ah_beacon_rssi_avg);

 FUNC_0(VAR_7, VAR_4, "raise immunity (%s)",
  VAR_9 ? "ODFM" : "CCK");


 if (VAR_8->noise_imm_level < VAR_1) {
  FUNC_2(VAR_7, VAR_8->noise_imm_level + 1);
  return;
 }


 if (VAR_9 &&
     VAR_8->spur_level < VAR_7->ani_state.max_spur_level) {
  FUNC_4(VAR_7, VAR_8->spur_level + 1);
  return;
 }


 if (VAR_7->opmode == VAR_6) {
  if (VAR_8->firstep_level < VAR_0)
   FUNC_1(VAR_7, VAR_8->firstep_level + 1);
  return;
 }







 if (VAR_10 > VAR_2) {
  FUNC_0(VAR_7, VAR_4,
      "beacon RSSI high");


  if (VAR_9 && VAR_8->ofdm_weak_sig) {
   FUNC_3(VAR_7, 0);
   FUNC_4(VAR_7, 0);
   return;
  }

  if (VAR_8->firstep_level < VAR_0) {
   FUNC_1(VAR_7, VAR_8->firstep_level + 1);
   return;
  }
 } else if (VAR_10 > VAR_3) {


  FUNC_0(VAR_7, VAR_4,
      "beacon RSSI mid");
  if (VAR_9 && !VAR_8->ofdm_weak_sig)
   FUNC_3(VAR_7, 1);
  if (VAR_8->firstep_level < VAR_0)
   FUNC_1(VAR_7, VAR_8->firstep_level + 1);
  return;
 } else if (VAR_7->ah_current_channel->band == VAR_5) {


  FUNC_0(VAR_7, VAR_4,
      "beacon RSSI low, 2GHz");
  if (VAR_9 && VAR_8->ofdm_weak_sig)
   FUNC_3(VAR_7, 0);
  if (VAR_8->firstep_level > 0)
   FUNC_1(VAR_7, 0);
  return;
 }






}
