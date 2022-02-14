
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* filename; int loaded; int adjust; } ;
struct TYPE_4__ {void* color_delay; void* hue; void* gamma; void* brightness; void* contrast; void* saturation; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;
 void* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(int *VAR_4, char *VAR_5[])
{
 int VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_7 = 1; VAR_6 < *VAR_4; VAR_6++) {
  int VAR_8 = (VAR_6 + 1 < *VAR_4);
  int VAR_9 = VAR_2;

  if (FUNC_4(VAR_5[VAR_6], "-pal-saturation") == 0) {
   if (VAR_8)
    VAR_1.saturation = FUNC_3(VAR_5[++VAR_6]);
   else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-pal-contrast") == 0) {
   if (VAR_8)
    VAR_1.contrast = FUNC_3(VAR_5[++VAR_6]);
   else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-pal-brightness") == 0) {
   if (VAR_8)
    VAR_1.brightness = FUNC_3(VAR_5[++VAR_6]);
   else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-pal-gamma") == 0) {
   if (VAR_8)
    VAR_1.gamma = FUNC_3(VAR_5[++VAR_6]);
   else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-pal-tint") == 0) {
   if (VAR_8)
    VAR_1.hue = FUNC_3(VAR_5[++VAR_6]);
   else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-pal-colordelay") == 0) {
   if (VAR_8)
    VAR_1.color_delay = FUNC_3(VAR_5[++VAR_6]);
   else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-palettep") == 0) {
   if (VAR_8) {
    FUNC_2(VAR_0.filename, VAR_5[++VAR_6], sizeof(VAR_0.filename));

    VAR_0.loaded = VAR_3;
   } else VAR_9 = VAR_3;
  }
  else if (FUNC_4(VAR_5[VAR_6], "-palettep-adjust") == 0)
   VAR_0.adjust = VAR_3;
  else {
   if (FUNC_4(VAR_5[VAR_6], "-help") == 0) {
    FUNC_1("\t-pal-saturation <num>  Set PAL color saturation");
    FUNC_1("\t-pal-contrast <num>    Set PAL contrast");
    FUNC_1("\t-pal-brightness <num>  Set PAL brightness");
    FUNC_1("\t-pal-gamma <num>       Set PAL color gamma factor");
    FUNC_1("\t-pal-tint <num>        Set PAL tint");
    FUNC_1("\t-pal-colordelay <num>  Set PAL GTIA color delay");
    FUNC_1("\t-palettep <filename>   Load PAL external palette");
    FUNC_1("\t-palettep-adjust       Apply adjustments to PAL external palette");
   }
   VAR_5[VAR_7++] = VAR_5[VAR_6];
  }

  if (VAR_9) {
   FUNC_1("Missing argument for '%s'", VAR_5[VAR_6]);
   return VAR_2;
  }
 }
 *VAR_4 = VAR_7;


 if (VAR_0.loaded && !FUNC_0(&VAR_0))
  FUNC_1("Cannot read PAL palette from %s", VAR_0.filename);

 return VAR_3;
}
