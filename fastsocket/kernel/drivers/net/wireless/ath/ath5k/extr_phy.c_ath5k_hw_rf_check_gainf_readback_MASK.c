
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_rf_reg {int dummy; } ;
struct TYPE_2__ {int g_high; int g_low; int g_current; } ;
struct ath5k_hw {int* ah_rf_banks; scalar_t__ ah_radio; TYPE_1__ ah_gain; void* ah_rf_regs_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct ath5k_rf_reg*) ;
 int FUNC_1 (struct ath5k_hw*,struct ath5k_rf_reg const*,int ,int ,int) ;
 struct ath5k_rf_reg* VAR_5 ;
 struct ath5k_rf_reg* VAR_6 ;

__attribute__((used)) static bool
FUNC_2(struct ath5k_hw *VAR_7)
{
 const struct ath5k_rf_reg *VAR_8;
 u32 VAR_9, VAR_10, VAR_11[4];
 u32 *VAR_12;

 if (VAR_7->ah_rf_banks == ((void*)0))
  return 0;

 VAR_12 = VAR_7->ah_rf_banks;

 if (VAR_7->ah_radio == VAR_2) {

  VAR_8 = VAR_5;
  VAR_7->ah_rf_regs_count = FUNC_0(VAR_5);

  VAR_9 = FUNC_1(VAR_7, VAR_8, 0, VAR_4,
   0);

  VAR_11[0] = 0;
  VAR_11[1] = (VAR_9 == 63) ? 50 : VAR_9 + 4;
  VAR_11[2] = (VAR_9 != 63) ? 64 : VAR_11[0];
  VAR_11[3] = VAR_11[2] + 50;

  VAR_7->ah_gain.g_high = VAR_11[3] -
   (VAR_9 == 63 ? VAR_0 : -5);
  VAR_7->ah_gain.g_low = VAR_11[0] +
   (VAR_9 == 63 ? VAR_1 : 0);
 } else {

  VAR_8 = VAR_6;
  VAR_7->ah_rf_regs_count = FUNC_0(VAR_6);

  VAR_10 = FUNC_1(VAR_7, VAR_8, 0, VAR_3,
   0);

  VAR_11[0] = VAR_11[2] = 0;

  if (VAR_10 == 1) {
   VAR_11[1] = VAR_11[3] = 83;
  } else {
   VAR_11[1] = VAR_11[3] = 107;
   VAR_7->ah_gain.g_high = 55;
  }
 }

 return (VAR_7->ah_gain.g_current >= VAR_11[0] &&
   VAR_7->ah_gain.g_current <= VAR_11[1]) ||
  (VAR_7->ah_gain.g_current >= VAR_11[2] &&
   VAR_7->ah_gain.g_current <= VAR_11[3]);
}
