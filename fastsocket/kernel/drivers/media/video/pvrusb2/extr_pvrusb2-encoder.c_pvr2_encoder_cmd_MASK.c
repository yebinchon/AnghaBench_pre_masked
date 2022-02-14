
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvr2_hdw {int ctl_lock; scalar_t__ state_encoder_runok; scalar_t__ state_encoder_ok; int encoder_run_timer; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pvr2_hdw*,int ,int*,int) ;
 int FUNC_5 (struct pvr2_hdw*,int ,int*,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(void *VAR_9,
       u32 VAR_10,
       int VAR_11,
       int VAR_12,
       u32 *VAR_13)
{
 unsigned int VAR_14;
 unsigned int VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 0;
 unsigned int VAR_18;

 u32 VAR_19[16];
 u32 VAR_20[16];
 struct pvr2_hdw *VAR_21 = (struct pvr2_hdw *)VAR_9;
 if (VAR_11 > (FUNC_0(VAR_19) - 4)) {
  FUNC_6(
   VAR_7,
   "Failed to write cx23416 command"
   " - too many input arguments"
   " (was given %u limit %lu)",
   VAR_11, (long unsigned) FUNC_0(VAR_19) - 4);
  return -VAR_1;
 }

 if (VAR_12 > (FUNC_0(VAR_20) - 4)) {
  FUNC_6(
   VAR_7,
   "Failed to write cx23416 command"
   " - too many return arguments"
   " (was given %u limit %lu)",
   VAR_12, (long unsigned) FUNC_0(VAR_20) - 4);
  return -VAR_1;
 }


 FUNC_2(VAR_21->ctl_lock); do {

  if (!VAR_21->state_encoder_ok) {
   VAR_17 = -VAR_2;
   break;
  }

  VAR_16 = 0;
  VAR_15++;
  VAR_17 = 0;
  VAR_19[0] = 0;
  VAR_19[1] = VAR_10;
  VAR_19[2] = 0;
  VAR_19[3] = 0x00060000;
  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
   VAR_19[VAR_18+4] = VAR_13[VAR_18];
  }
  for (; VAR_18 < FUNC_0(VAR_19) - 4; VAR_18++) {
   VAR_19[VAR_18+4] = 0;
  }

  VAR_17 = FUNC_5(VAR_21,VAR_6,VAR_19,VAR_18);
  if (VAR_17) break;
  VAR_19[0] = VAR_4|VAR_3;
  VAR_17 = FUNC_5(VAR_21,VAR_6,VAR_19,1);
  if (VAR_17) break;
  VAR_14 = 0;
  while (1) {
   VAR_14++;
   VAR_17 = FUNC_4(VAR_21,VAR_6,VAR_20,
            VAR_12+4);
   if (VAR_17) {
    break;
   }
   if (VAR_20[0] & VAR_5) {
    break;
   }
   if (VAR_20[0] && (VAR_14 < 1000)) continue;
   if (!VAR_20[0]) {
    VAR_16 = !0;
    FUNC_6(
     VAR_7,
     "Encoder timed out waiting for us"
     "; arranging to retry");
   } else {
    FUNC_6(
     VAR_7,
     "***WARNING*** device's encoder"
     " appears to be stuck"
     " (status=0x%08x)",VAR_20[0]);
   }
   FUNC_6(
    VAR_7,
    "Encoder command: 0x%02x",VAR_10);
   for (VAR_18 = 4; VAR_18 < VAR_11; VAR_18++) {
    FUNC_6(
     VAR_7,
     "Encoder arg%d: 0x%08x",
     VAR_18-3,VAR_19[VAR_18]);
   }
   VAR_17 = -VAR_0;
   break;
  }
  if (VAR_16) {
   if (VAR_15 < 20) continue;
   FUNC_6(
    VAR_7,
    "Too many retries...");
   VAR_17 = -VAR_0;
  }
  if (VAR_17) {
   FUNC_3(&VAR_21->encoder_run_timer);
   VAR_21->state_encoder_ok = 0;
   FUNC_6(VAR_8,
       "State bit %s <-- %s",
       "state_encoder_ok",
       (VAR_21->state_encoder_ok ? "true" : "false"));
   if (VAR_21->state_encoder_runok) {
    VAR_21->state_encoder_runok = 0;
    FUNC_6(VAR_8,
       "State bit %s <-- %s",
        "state_encoder_runok",
        (VAR_21->state_encoder_runok ?
         "true" : "false"));
   }
   FUNC_6(
    VAR_7,
    "Giving up on command."
    "  This is normally recovered via a firmware"
    " reload and re-initialization; concern"
    " is only warranted if this happens repeatedly"
    " and rapidly.");
   break;
  }
  VAR_19[0] = 0x7;
  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
   VAR_13[VAR_18] = VAR_20[VAR_18+4];
  }

  VAR_19[0] = 0x0;
  VAR_17 = FUNC_5(VAR_21,VAR_6,VAR_19,1);
  if (VAR_17) break;

 } while(0); FUNC_1(VAR_21->ctl_lock);

 return VAR_17;
}
