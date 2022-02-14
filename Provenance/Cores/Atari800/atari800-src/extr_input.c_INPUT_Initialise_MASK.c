
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (char*,...) ;
 int VAR_19 ;
 int FUNC_2 (char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 void* FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int * VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_7 (int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

int FUNC_9(int *VAR_27, char *VAR_28[])
{
 int VAR_29;
 int VAR_30;

 for (VAR_29 = VAR_30 = 1; VAR_29 < *VAR_27; VAR_29++) {
  int VAR_31 = (VAR_29 + 1 < *VAR_27);
  int VAR_32 = VAR_1;

  if (FUNC_8(VAR_28[VAR_29], "-mouse") == 0) {
   if (VAR_31) {
    char *VAR_33 = VAR_28[++VAR_29];
    if (FUNC_8(VAR_33, "off") == 0)
     VAR_16 = VAR_7;
    else if (FUNC_8(VAR_33, "pad") == 0)
     VAR_16 = VAR_8;
    else if (FUNC_8(VAR_33, "touch") == 0)
     VAR_16 = VAR_11;
    else if (FUNC_8(VAR_33, "koala") == 0)
     VAR_16 = VAR_6;
    else if (FUNC_8(VAR_33, "pen") == 0)
     VAR_16 = VAR_9;
    else if (FUNC_8(VAR_33, "gun") == 0)
     VAR_16 = VAR_4;
    else if (FUNC_8(VAR_33, "amiga") == 0)
     VAR_16 = VAR_3;
    else if (FUNC_8(VAR_33, "st") == 0)
     VAR_16 = VAR_10;
    else if (FUNC_8(VAR_33, "trak") == 0)
     VAR_16 = VAR_12;
    else if (FUNC_8(VAR_33, "joy") == 0)
     VAR_16 = VAR_5;
   }
   else VAR_32 = VAR_19;
  }
  else if (FUNC_8(VAR_28[VAR_29], "-mouseport") == 0) {
   if (VAR_31) {
    VAR_17 = FUNC_2(VAR_28[++VAR_29]) - 1;
    if (VAR_17 < 0 || VAR_17 > 3) {
     FUNC_1("Invalid mouse port number - should be between 0 and 3");
     return VAR_1;
    }
   }
   else VAR_32 = VAR_19;
  }
  else if (FUNC_8(VAR_28[VAR_29], "-mousespeed") == 0) {
   if (VAR_31) {
    VAR_18 = FUNC_2(VAR_28[++VAR_29]);
    if (VAR_18 < 1 || VAR_18 > 9) {
     FUNC_1("Invalid mouse speed - should be between 1 and 9");
     return VAR_1;
    }
   }
   else VAR_32 = VAR_19;
  }
  else if (FUNC_8(VAR_28[VAR_29], "-multijoy") == 0) {
   VAR_15 = 1;
  }
   else if (FUNC_8(VAR_28[VAR_29], "-directmouse") == 0) {
   VAR_14 = 1;
  }
  else if (FUNC_8(VAR_28[VAR_29], "-cx85") == 0) {
   if (VAR_31) {
    VAR_13 = 1;
    VAR_20 = FUNC_2(VAR_28[++VAR_29]) - 1;
    if (VAR_20 < 0 || VAR_20 > 3) {
     FUNC_1("Invalid cx85 port - should be between 0 and 3");
     return VAR_1;
    }
   }
   else VAR_32 = VAR_19;
  }
  else {
   if (FUNC_8(VAR_28[VAR_29], "-help") == 0) {
    FUNC_1("\t-mouse off       Do not use mouse");
    FUNC_1("\t-mouse pad       Emulate paddles");
    FUNC_1("\t-mouse touch     Emulate Atari Touch Tablet");
    FUNC_1("\t-mouse koala     Emulate Koala Pad");
    FUNC_1("\t-mouse pen       Emulate Light Pen");
    FUNC_1("\t-mouse gun       Emulate Light Gun");
    FUNC_1("\t-mouse amiga     Emulate Amiga mouse");
    FUNC_1("\t-mouse st        Emulate Atari ST mouse");
    FUNC_1("\t-mouse trak      Emulate Atari Trak-Ball");
    FUNC_1("\t-mouse joy       Emulate joystick using mouse");
    FUNC_1("\t-mouseport <n>   Set mouse port 1-4 (default 1)");
    FUNC_1("\t-mousespeed <n>  Set mouse speed 1-9 (default 3)");
    FUNC_1("\t-directmouse     Use absolute X/Y mouse coords");
    FUNC_1("\t-cx85 <n>        Emulate CX85 numeric keypad on port <n>");
    FUNC_1("\t-multijoy        Emulate MultiJoy4 interface");
    FUNC_1("\t-record <file>   Record input to <file>");
    FUNC_1("\t-playback <file> Playback input from <file>");
   }
   VAR_28[VAR_30++] = VAR_28[VAR_29];
  }


  if (VAR_32) {
   FUNC_1("Missing argument for '%s'", VAR_28[VAR_29]);
   return VAR_1;
  }
 }

 if(VAR_14 && !(
    VAR_16 == VAR_8 ||
    VAR_16 == VAR_11 ||
    VAR_16 == VAR_6)) {
  FUNC_1("-directmouse only valid with -mouse pad|touch|koala");
  return VAR_1;
 }

 FUNC_0();
 *VAR_27 = VAR_30;

 return VAR_19;
}
