
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int string ;
struct TYPE_2__ {int channels; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 void* VAR_15 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_16 ;
 int FUNC_5 (char*) ;
 char** VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char*) ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* VAR_35 ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 TYPE_1__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 char** VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 char** VAR_42 ;
 int FUNC_16 (char*,char*,int ) ;
 int FUNC_17 (char*) ;
 void* FUNC_18 (char*) ;
 void* FUNC_19 (char*) ;
 int FUNC_20 (char*,char const*,int ) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (char*,int,int *) ;
 int * FUNC_26 (char const*,char*) ;
 char* FUNC_27 (char*) ;
 char* VAR_43 ;
 char* FUNC_28 (char*,char) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 int FUNC_30 (char*,int ) ;

int FUNC_31(const char *VAR_44)
{
 FILE *VAR_45;
 const char *VAR_46 = VAR_43;
 char VAR_47[256];

 int VAR_48 = VAR_23;







 if (VAR_44 != ((void*)0) && *VAR_44 > 0) {
  FUNC_20(VAR_43, VAR_44, VAR_24);
 }

 else {
  char *VAR_49 = FUNC_27("HOME");
  if (VAR_49 != ((void*)0))
   FUNC_16(VAR_43, VAR_49, VAR_16);
  else
   FUNC_30(VAR_43, VAR_16);
 }

 VAR_45 = FUNC_26(VAR_46, "r");
 if (VAR_45 == ((void*)0)) {
  FUNC_7("User config file '%s' not found.", VAR_43);







  if (VAR_45 == ((void*)0)) {
   FUNC_7("No configuration file found, will create fresh one from scratch:");
   return VAR_23;
  }
 }

 if (FUNC_25(VAR_47, sizeof(VAR_47), VAR_45) != ((void*)0)) {
  FUNC_7("Using Atari800 config file: %s\nCreated by %s", VAR_46, VAR_47);
 }

 while (FUNC_25(VAR_47, sizeof(VAR_47), VAR_45)) {
  char *VAR_50;
  FUNC_17(VAR_47);
  VAR_50 = FUNC_28(VAR_47, '=');
  if (VAR_50 != ((void*)0)) {
   *VAR_50++ = '\0';
   FUNC_21(VAR_47);
   FUNC_21(VAR_50);

   if (FUNC_13(VAR_47, VAR_50)) {
   }







   else if (FUNC_29(VAR_47, "ATARI_FILES_DIR") == 0) {
    if (VAR_40 >= VAR_38)
     FUNC_7("All ATARI_FILES_DIR slots used!");
    else
     FUNC_20(VAR_39[VAR_40++], VAR_50, VAR_24);
   }
   else if (FUNC_29(VAR_47, "SAVED_FILES_DIR") == 0) {
    if (VAR_41 >= VAR_38)
     FUNC_7("All SAVED_FILES_DIR slots used!");
    else
     FUNC_20(VAR_42[VAR_41++], VAR_50, VAR_24);
   }
   else if (FUNC_29(VAR_47, "DISK_DIR") == 0 || FUNC_29(VAR_47, "ROM_DIR") == 0
      || FUNC_29(VAR_47, "EXE_DIR") == 0 || FUNC_29(VAR_47, "STATE_DIR") == 0) {

    if (VAR_50[0] != '\0' && (VAR_50[0] != '.' || VAR_50[1] != '\0'))
     VAR_48 = VAR_37;
   }

   else if (FUNC_29(VAR_47, "H1_DIR") == 0)
    FUNC_20(VAR_17[0], VAR_50, VAR_24);
   else if (FUNC_29(VAR_47, "H2_DIR") == 0)
    FUNC_20(VAR_17[1], VAR_50, VAR_24);
   else if (FUNC_29(VAR_47, "H3_DIR") == 0)
    FUNC_20(VAR_17[2], VAR_50, VAR_24);
   else if (FUNC_29(VAR_47, "H4_DIR") == 0)
    FUNC_20(VAR_17[3], VAR_50, VAR_24);
   else if (FUNC_29(VAR_47, "HD_READ_ONLY") == 0)
    VAR_21 = FUNC_19(VAR_50);

   else if (FUNC_29(VAR_47, "PRINT_COMMAND") == 0) {
    if (!FUNC_5(VAR_50))
     FUNC_7("Unsafe PRINT_COMMAND ignored");
   }

   else if (FUNC_29(VAR_47, "SCREEN_REFRESH_RATIO") == 0)
    VAR_13 = FUNC_19(VAR_50);
   else if (FUNC_29(VAR_47, "DISABLE_BASIC") == 0)
    VAR_7 = FUNC_18(VAR_50);

   else if (FUNC_29(VAR_47, "ENABLE_SIO_PATCH") == 0) {
    VAR_22 = FUNC_18(VAR_50);
   }
   else if (FUNC_29(VAR_47, "ENABLE_H_PATCH") == 0) {
    VAR_18 = FUNC_18(VAR_50);
   }
   else if (FUNC_29(VAR_47, "ENABLE_P_PATCH") == 0) {
    VAR_19 = FUNC_18(VAR_50);
   }
   else if (FUNC_29(VAR_47, "ENABLE_R_PATCH") == 0) {
    VAR_20 = FUNC_18(VAR_50);
   }

   else if (FUNC_29(VAR_47, "ENABLE_NEW_POKEY") == 0) {



   }
   else if (FUNC_29(VAR_47, "STEREO_POKEY") == 0) {






   }
   else if (FUNC_29(VAR_47, "SPEAKER_SOUND") == 0) {



   }
   else if (FUNC_29(VAR_47, "SERIO_SOUND") == 0) {



   }
   else if (FUNC_29(VAR_47, "MACHINE_TYPE") == 0) {
    if (FUNC_29(VAR_50, "Atari 400/800") == 0 ||

        FUNC_29(VAR_50, "Atari OS/A") == 0 ||
        FUNC_29(VAR_50, "Atari OS/B") == 0)
     VAR_12 = VAR_1;
    else if (FUNC_29(VAR_50, "Atari XL/XE") == 0)
     VAR_12 = VAR_2;
    else if (FUNC_29(VAR_50, "Atari 5200") == 0)
     VAR_12 = VAR_0;
    else
     FUNC_7("Invalid machine type: %s", VAR_50);
   }
   else if (FUNC_29(VAR_47, "RAM_SIZE") == 0) {
    if (FUNC_29(VAR_50, "320 (RAMBO)") == 0)
     VAR_30 = VAR_26;
    else if (FUNC_29(VAR_50, "320 (COMPY SHOP)") == 0)
     VAR_30 = VAR_25;
    else {
     int VAR_51 = FUNC_19(VAR_50);
     if (FUNC_8(VAR_51))
      VAR_30 = VAR_51;
     else
      FUNC_7("Invalid RAM size: %s", VAR_50);
    }
   }
   else if (FUNC_29(VAR_47, "DEFAULT_TV_MODE") == 0) {
    if (FUNC_29(VAR_50, "PAL") == 0)
     VAR_14 = VAR_4;
    else if (FUNC_29(VAR_50, "NTSC") == 0)
     VAR_14 = VAR_3;
    else
     FUNC_7("Invalid TV Mode: %s", VAR_50);
   }
   else if (FUNC_29(VAR_47, "MOSAIC_RAM_NUM_BANKS") == 0) {
    int VAR_52 = FUNC_19(VAR_50);
    if (VAR_52 >= 0 && VAR_52 <= 64)
     VAR_29 = VAR_52;
    else
     FUNC_7("Invalid Mosaic RAM number of banks: %s", VAR_50);
   }
   else if (FUNC_29(VAR_47, "AXLON_RAM_NUM_BANKS") == 0) {
    int VAR_53 = FUNC_19(VAR_50);
    if (VAR_53 == 0 || VAR_53 == 8 || VAR_53 == 16 || VAR_53 == 32 || VAR_53 == 64 || VAR_53 == 128 || VAR_53 == 256)
     VAR_27 = VAR_53;
    else
     FUNC_7("Invalid Mosaic RAM number of banks: %s", VAR_50);
   }
   else if (FUNC_29(VAR_47, "ENABLE_MAPRAM") == 0)
    VAR_28 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "BUILTIN_BASIC") == 0)
    VAR_5 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "KEYBOARD_LEDS") == 0)
    VAR_11 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "F_KEYS") == 0)
    VAR_8 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "BUILTIN_GAME") == 0)
    VAR_6 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "KEYBOARD_DETACHED") == 0)
    VAR_10 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "1200XL_JUMPER") == 0)
    VAR_9 = FUNC_18(VAR_50);
   else if (FUNC_29(VAR_47, "CFG_SAVE_ON_EXIT") == 0) {
    VAR_15 = FUNC_18(VAR_50);
   }

   else if (FUNC_9(VAR_47,VAR_50)) {
   }
   else if (FUNC_2(VAR_47, VAR_50)) {
   }
   else if (FUNC_3(VAR_47, VAR_50)) {
   }
   else if (FUNC_12(VAR_47, VAR_50)) {
   }
   else if (FUNC_4(VAR_47, VAR_50)) {
   }
   else if (FUNC_1(VAR_47, VAR_50)) {
   }
   else if (FUNC_14(VAR_47, VAR_50)) {
   }
   else {





    FUNC_7("Unrecognized variable: %s", VAR_47);

   }
  }
  else {
   FUNC_7("Ignored config line: %s", VAR_47);
  }
 }

 FUNC_24(VAR_45);

 if (VAR_48) {
  FUNC_7(
   "DISK_DIR, ROM_DIR, EXE_DIR and STATE_DIR configuration options\n"
   "are no longer supported. Please use ATARI_FILES_DIR\n"
   "and SAVED_FILES_DIR in your Atari800 configuration file.");
 }

 return VAR_37;
}
