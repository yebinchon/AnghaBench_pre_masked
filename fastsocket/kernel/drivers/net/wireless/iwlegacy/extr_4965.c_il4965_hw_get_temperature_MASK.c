
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int temperature; } ;
struct TYPE_8__ {TYPE_2__ common; } ;
struct TYPE_9__ {int flag; TYPE_3__ general; } ;
struct TYPE_10__ {TYPE_4__ stats; } ;
struct TYPE_6__ {int * therm_r4; int * therm_r3; int * therm_r2; int * therm_r1; } ;
struct il_priv {TYPE_5__ _4965; int status; TYPE_1__ card_alive_init; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_4)
{
 s32 VAR_5;
 s32 VAR_6;
 s32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 if (FUNC_5(VAR_1, &VAR_4->status) &&
     (VAR_4->_4965.stats.flag & VAR_0)) {
  FUNC_0("Running HT40 temperature calibration\n");
  VAR_7 = (s32) FUNC_3(VAR_4->card_alive_init.therm_r1[1]);
  VAR_8 = (s32) FUNC_3(VAR_4->card_alive_init.therm_r2[1]);
  VAR_9 = (s32) FUNC_3(VAR_4->card_alive_init.therm_r3[1]);
  VAR_10 = FUNC_3(VAR_4->card_alive_init.therm_r4[1]);
 } else {
  FUNC_0("Running temperature calibration\n");
  VAR_7 = (s32) FUNC_3(VAR_4->card_alive_init.therm_r1[0]);
  VAR_8 = (s32) FUNC_3(VAR_4->card_alive_init.therm_r2[0]);
  VAR_9 = (s32) FUNC_3(VAR_4->card_alive_init.therm_r3[0]);
  VAR_10 = FUNC_3(VAR_4->card_alive_init.therm_r4[0]);
 }
 if (!FUNC_5(VAR_1, &VAR_4->status))
  VAR_6 = FUNC_4(VAR_10, 23);
 else
  VAR_6 = FUNC_4(FUNC_3
       (VAR_4->_4965.stats.general.common.temperature),
       23);

 FUNC_0("Calib values R[1-3]: %d %d %d R4: %d\n", VAR_7, VAR_8, VAR_9, VAR_6);

 if (VAR_9 == VAR_7) {
  FUNC_1("Calibration conflict R1 == R3\n");
  return -1;
 }



 VAR_5 = VAR_2 * (VAR_6 - VAR_8);
 VAR_5 /= (VAR_9 - VAR_7);
 VAR_5 =
     (VAR_5 * 97) / 100 + VAR_3;

 FUNC_0("Calibrated temperature: %dK, %dC\n", VAR_5,
        FUNC_2(VAR_5));

 return VAR_5;
}
