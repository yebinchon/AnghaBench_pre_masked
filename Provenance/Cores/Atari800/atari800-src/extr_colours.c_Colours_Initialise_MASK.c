
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* hue; void* gamma; void* brightness; void* contrast; void* saturation; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int*,char**) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int*,char**) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 void* FUNC_8 (char*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_9 (char*,char*) ;

int FUNC_10(int *VAR_8, char *VAR_9[])
{
 int VAR_10;
 int VAR_11;

 for (VAR_10 = VAR_11 = 1; VAR_10 < *VAR_8; VAR_10++) {
  int VAR_12 = (VAR_10 + 1 < *VAR_8);
  int VAR_13 = VAR_4;

  if (FUNC_9(VAR_9[VAR_10], "-saturation") == 0) {
   if (VAR_12)
    VAR_1.saturation = VAR_2.saturation = FUNC_8(VAR_9[++VAR_10]);
   else VAR_13 = VAR_5;
  }
  else if (FUNC_9(VAR_9[VAR_10], "-contrast") == 0) {
   if (VAR_12)
    VAR_1.contrast = VAR_2.contrast = FUNC_8(VAR_9[++VAR_10]);
   else VAR_13 = VAR_5;
  }
  else if (FUNC_9(VAR_9[VAR_10], "-brightness") == 0) {
   if (VAR_12)
    VAR_1.brightness = VAR_2.brightness = FUNC_8(VAR_9[++VAR_10]);
   else VAR_13 = VAR_5;
  }
  else if (FUNC_9(VAR_9[VAR_10], "-gamma") == 0) {
   if (VAR_12)
    VAR_1.gamma = VAR_2.gamma = FUNC_8(VAR_9[++VAR_10]);
   else VAR_13 = VAR_5;
  }
  else if (FUNC_9(VAR_9[VAR_10], "-tint") == 0) {
   if (VAR_12)
    VAR_1.hue = VAR_2.hue = FUNC_8(VAR_9[++VAR_10]);
   else VAR_13 = VAR_5;
  }
  else if (FUNC_9(VAR_9[VAR_10], "-colors-preset") == 0) {
   if (VAR_12) {
    int VAR_14 = FUNC_0(VAR_9[++VAR_10], VAR_6, VAR_3);
    if (VAR_14 < 0) {
     FUNC_5("Invalid value for -colors-preset");
     return VAR_4;
    }
    VAR_1 = VAR_2 = VAR_7[VAR_14];
    FUNC_2();
    FUNC_4();
   } else VAR_13 = VAR_5;
  }

  else {
   if (FUNC_9(VAR_9[VAR_10], "-help") == 0) {
    FUNC_5("\t-colors-preset standard|deep-black|vibrant");
    FUNC_5("\t                       Use one of predefined color adjustments");
    FUNC_5("\t-saturation <num>      Set color saturation");
    FUNC_5("\t-contrast <num>        Set contrast");
    FUNC_5("\t-brightness <num>      Set brightness");
    FUNC_5("\t-gamma <num>           Set color gamma factor");
    FUNC_5("\t-tint <num>            Set tint");
   }
   VAR_9[VAR_11++] = VAR_9[VAR_10];
  }

  if (VAR_13) {
   FUNC_5("Missing argument for '%s'", VAR_9[VAR_10]);
   return VAR_4;
  }
 }
 *VAR_8 = VAR_11;

 if (!FUNC_1(VAR_8, VAR_9) ||
     !FUNC_3(VAR_8, VAR_9))
  return VAR_4;


 FUNC_6(VAR_0);
 FUNC_7();
 return VAR_5;
}
