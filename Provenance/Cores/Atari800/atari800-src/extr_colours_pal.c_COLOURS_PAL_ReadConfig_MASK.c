
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int loaded; int adjust; int filename; } ;
struct TYPE_3__ {int color_delay; int hue; int gamma; int brightness; int contrast; int saturation; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

int FUNC_4(char *VAR_4, char *VAR_5)
{
 if (FUNC_3(VAR_4, "COLOURS_PAL_SATURATION") == 0)
  return FUNC_1(VAR_5, &VAR_1.saturation);
 else if (FUNC_3(VAR_4, "COLOURS_PAL_CONTRAST") == 0)
  return FUNC_1(VAR_5, &VAR_1.contrast);
 else if (FUNC_3(VAR_4, "COLOURS_PAL_BRIGHTNESS") == 0)
  return FUNC_1(VAR_5, &VAR_1.brightness);
 else if (FUNC_3(VAR_4, "COLOURS_PAL_GAMMA") == 0)
  return FUNC_1(VAR_5, &VAR_1.gamma);
 else if (FUNC_3(VAR_4, "COLOURS_PAL_HUE") == 0)
  return FUNC_1(VAR_5, &VAR_1.hue);
 else if (FUNC_3(VAR_4, "COLOURS_PAL_GTIA_DELAY") == 0)
  return FUNC_1(VAR_5, &VAR_1.color_delay);
 else if (FUNC_3(VAR_4, "COLOURS_PAL_EXTERNAL_PALETTE") == 0)
  FUNC_2(VAR_0.filename, VAR_5, sizeof(VAR_0.filename));
 else if (FUNC_3(VAR_4, "COLOURS_PAL_EXTERNAL_PALETTE_LOADED") == 0)

  return (VAR_0.loaded = FUNC_0(VAR_5)) != -1;
 else if (FUNC_3(VAR_4, "COLOURS_PAL_ADJUST_EXTERNAL_PALETTE") == 0)
  return (VAR_0.adjust = FUNC_0(VAR_5)) != -1;
 else
  return VAR_2;
 return VAR_3;
}
