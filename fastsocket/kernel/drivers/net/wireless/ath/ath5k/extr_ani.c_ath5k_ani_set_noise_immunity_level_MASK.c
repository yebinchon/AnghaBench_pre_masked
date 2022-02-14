
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int noise_imm_level; } ;
struct ath5k_hw {TYPE_1__ ani_state; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,int const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct ath5k_hw*,int ,char*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct ath5k_hw*,char*,int) ;

void
FUNC_4(struct ath5k_hw *VAR_8, int VAR_9)
{
 static const s8 VAR_10[] = { -64, -70 };
 static const s8 VAR_11[] = { -14, -12 };
 static const s8 VAR_12[] = { -55, -62 };
 static const s8 VAR_13[] = { -78, -80 };

 if (VAR_9 < 0 || VAR_9 >= FUNC_1(VAR_12)) {
  FUNC_3(VAR_8, "noise immunity level %d out of range",
     VAR_9);
  return;
 }

 FUNC_0(VAR_8, VAR_3,
    VAR_4, VAR_12[VAR_9]);
 FUNC_0(VAR_8, VAR_0,
    VAR_2, VAR_10[VAR_9]);
 FUNC_0(VAR_8, VAR_0,
    VAR_1, VAR_11[VAR_9]);
 FUNC_0(VAR_8, VAR_5,
    VAR_6, VAR_13[VAR_9]);

 VAR_8->ani_state.noise_imm_level = VAR_9;
 FUNC_2(VAR_8, VAR_7, "new level %d", VAR_9);
}
