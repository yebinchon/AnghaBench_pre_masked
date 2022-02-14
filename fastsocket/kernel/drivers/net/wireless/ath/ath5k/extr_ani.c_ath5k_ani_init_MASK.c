
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_spur_level; int ani_mode; } ;
struct TYPE_3__ {scalar_t__ cap_has_phyerr_counters; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_mac_srev; TYPE_2__ ani_state; TYPE_1__ ah_capabilities; } ;
typedef enum ath5k_ani_mode { ____Placeholder_ath5k_ani_mode } ath5k_ani_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*) ;
 int VAR_9 ;
 int FUNC_1 (struct ath5k_hw*,char*,int) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*,int) ;
 int FUNC_6 (struct ath5k_hw*,int) ;
 int FUNC_7 (struct ath5k_hw*) ;
 int FUNC_8 (struct ath5k_hw*) ;
 int FUNC_9 (struct ath5k_hw*) ;
 int FUNC_10 (struct ath5k_hw*,int) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;

void
FUNC_12(struct ath5k_hw *VAR_10, enum ath5k_ani_mode VAR_11)
{

 if (VAR_10->ah_version < VAR_0)
  return;

 if (VAR_11 < VAR_8 || VAR_11 > VAR_5) {
  FUNC_1(VAR_10, "ANI mode %d out of range", VAR_11);
  return;
 }


 FUNC_11(&VAR_10->ani_state, 0, sizeof(VAR_10->ani_state));


 if (VAR_10->ah_mac_srev < VAR_2)
  VAR_10->ani_state.max_spur_level = 7;
 else
  VAR_10->ani_state.max_spur_level = 2;


 if (VAR_11 == VAR_8) {
  FUNC_0(VAR_10, VAR_9, "ANI off\n");
 } else if (VAR_11 == VAR_7) {
  FUNC_0(VAR_10, VAR_9,
   "ANI manual low -> high sensitivity\n");
  FUNC_4(VAR_10, 0);
  FUNC_6(VAR_10, 0);
  FUNC_3(VAR_10, 0);
  FUNC_5(VAR_10, 1);
  FUNC_2(VAR_10, 1);
 } else if (VAR_11 == VAR_6) {
  FUNC_0(VAR_10, VAR_9,
   "ANI manual high -> low sensitivity\n");
  FUNC_4(VAR_10,
     VAR_4);
  FUNC_6(VAR_10,
     VAR_10->ani_state.max_spur_level);
  FUNC_3(VAR_10, VAR_3);
  FUNC_5(VAR_10, 0);
  FUNC_2(VAR_10, 0);
 } else if (VAR_11 == VAR_5) {
  FUNC_0(VAR_10, VAR_9, "ANI auto\n");
  FUNC_4(VAR_10, 0);
  FUNC_6(VAR_10, 0);
  FUNC_3(VAR_10, 0);
  FUNC_5(VAR_10, 1);
  FUNC_2(VAR_10, 0);
 }





 if (VAR_11 == VAR_5) {
  if (VAR_10->ah_capabilities.cap_has_phyerr_counters)
   FUNC_8(VAR_10);
  else
   FUNC_10(VAR_10, FUNC_9(VAR_10) |
         VAR_1);
 } else {
  if (VAR_10->ah_capabilities.cap_has_phyerr_counters)
   FUNC_7(VAR_10);
  else
   FUNC_10(VAR_10, FUNC_9(VAR_10) &
         ~VAR_1);
 }

 VAR_10->ani_state.ani_mode = VAR_11;
}
