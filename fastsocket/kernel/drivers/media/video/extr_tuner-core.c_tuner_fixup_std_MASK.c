
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;
 int* VAR_21 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct tuner *VAR_22)
{
 if ((VAR_22->std & VAR_4) == VAR_4) {
  switch (VAR_20[0]) {
  case '6':
   FUNC_0("insmod fixup: PAL => PAL-60\n");
   VAR_22->std = VAR_5;
   break;
  case 'b':
  case 'B':
  case 'g':
  case 'G':
   FUNC_0("insmod fixup: PAL => PAL-BG\n");
   VAR_22->std = VAR_6;
   break;
  case 'i':
  case 'I':
   FUNC_0("insmod fixup: PAL => PAL-I\n");
   VAR_22->std = VAR_8;
   break;
  case 'd':
  case 'D':
  case 'k':
  case 'K':
   FUNC_0("insmod fixup: PAL => PAL-DK\n");
   VAR_22->std = VAR_7;
   break;
  case 'M':
  case 'm':
   FUNC_0("insmod fixup: PAL => PAL-M\n");
   VAR_22->std = VAR_9;
   break;
  case 'N':
  case 'n':
   if (VAR_20[1] == 'c' || VAR_20[1] == 'C') {
    FUNC_0("insmod fixup: PAL => PAL-Nc\n");
    VAR_22->std = VAR_11;
   } else {
    FUNC_0("insmod fixup: PAL => PAL-N\n");
    VAR_22->std = VAR_10;
   }
   break;
  case '-':

   break;
  default:
   FUNC_2("pal= argument not recognised\n");
   break;
  }
 }
 if ((VAR_22->std & VAR_12) == VAR_12) {
  switch (VAR_21[0]) {
  case 'b':
  case 'B':
  case 'g':
  case 'G':
  case 'h':
  case 'H':
   FUNC_0("insmod fixup: SECAM => SECAM-BGH\n");
   VAR_22->std = VAR_13 |
     VAR_15 |
     VAR_16;
   break;
  case 'd':
  case 'D':
  case 'k':
  case 'K':
   FUNC_0("insmod fixup: SECAM => SECAM-DK\n");
   VAR_22->std = VAR_14;
   break;
  case 'l':
  case 'L':
   if ((VAR_21[1] == 'C') || (VAR_21[1] == 'c')) {
    FUNC_0("insmod fixup: SECAM => SECAM-L'\n");
    VAR_22->std = VAR_18;
   } else {
    FUNC_0("insmod fixup: SECAM => SECAM-L\n");
    VAR_22->std = VAR_17;
   }
   break;
  case '-':

   break;
  default:
   FUNC_2("secam= argument not recognised\n");
   break;
  }
 }

 if ((VAR_22->std & VAR_0) == VAR_0) {
  switch (VAR_19[0]) {
  case 'm':
  case 'M':
   FUNC_0("insmod fixup: NTSC => NTSC-M\n");
   VAR_22->std = VAR_1;
   break;
  case 'j':
  case 'J':
   FUNC_0("insmod fixup: NTSC => NTSC_M_JP\n");
   VAR_22->std = VAR_2;
   break;
  case 'k':
  case 'K':
   FUNC_0("insmod fixup: NTSC => NTSC_M_KR\n");
   VAR_22->std = VAR_3;
   break;
  case '-':

   break;
  default:
   FUNC_1("ntsc= argument not recognised\n");
   break;
  }
 }
 return 0;
}
