
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ fw1_state; scalar_t__ flag_modulefail; scalar_t__ flag_init_ok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct pvr2_hdw*) ;

__attribute__((used)) static void FUNC_4(struct pvr2_hdw *VAR_7)
{
 FUNC_2(VAR_5,"pvr2_hdw_setup(hdw=%p) begin",VAR_7);
 do {
  FUNC_1(VAR_7);
  FUNC_2(VAR_5,
      "pvr2_hdw_setup(hdw=%p) done, ok=%d init_ok=%d",
      VAR_7,FUNC_0(VAR_7),VAR_7->flag_init_ok);
  if (FUNC_0(VAR_7)) {
   if (VAR_7->flag_init_ok) {
    FUNC_2(
     VAR_4,
     "Device initialization"
     " completed successfully.");
    break;
   }
   if (VAR_7->fw1_state == VAR_1) {
    FUNC_2(
     VAR_4,
     "Device microcontroller firmware"
     " (re)loaded; it should now reset"
     " and reconnect.");
    break;
   }
   FUNC_2(
    VAR_3,
    "Device initialization was not successful.");
   if (VAR_7->fw1_state == VAR_0) {
    FUNC_2(
     VAR_3,
     "Giving up since device"
     " microcontroller firmware"
     " appears to be missing.");
    break;
   }
  }
  if (VAR_7->flag_modulefail) {
   FUNC_2(
    VAR_3,
    "***WARNING*** pvrusb2 driver initialization"
    " failed due to the failure of one or more"
    " sub-device kernel modules.");
   FUNC_2(
    VAR_3,
    "You need to resolve the failing condition"
    " before this driver can function.  There"
    " should be some earlier messages giving more"
    " information about the problem.");
   break;
  }
  if (VAR_6) {
   FUNC_2(
    VAR_3,
    "Attempting pvrusb2 recovery by reloading"
    " primary firmware.");
   FUNC_2(
    VAR_3,
    "If this works, device should disconnect"
    " and reconnect in a sane state.");
   VAR_7->fw1_state = VAR_2;
   FUNC_3(VAR_7);
  } else {
   FUNC_2(
    VAR_3,
    "***WARNING*** pvrusb2 device hardware"
    " appears to be jammed"
    " and I can't clear it.");
   FUNC_2(
    VAR_3,
    "You might need to power cycle"
    " the pvrusb2 device"
    " in order to recover.");
  }
 } while (0);
 FUNC_2(VAR_5,"pvr2_hdw_setup(hdw=%p) end",VAR_7);
}
