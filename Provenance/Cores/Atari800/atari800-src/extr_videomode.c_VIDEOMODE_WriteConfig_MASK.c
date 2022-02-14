
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {int width; int height; } ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 char** VAR_19 ;
 int FUNC_0 (int *,char*,...) ;
 char** VAR_20 ;
 TYPE_3__ VAR_21 ;
 char** VAR_22 ;
 TYPE_2__* VAR_23 ;
 char** VAR_24 ;
 char** VAR_25 ;
 TYPE_1__ VAR_26 ;

void FUNC_1(FILE *VAR_27) {
 FUNC_0(VAR_27, "VIDEOMODE_WINDOW_WIDTH=%u\n", VAR_26.width);
 FUNC_0(VAR_27, "VIDEOMODE_WINDOW_HEIGHT=%u\n", VAR_26.height);
 FUNC_0(VAR_27, "VIDEOMODE_FULLSCREEN_WIDTH=%u\n", (VAR_23 == ((void*)0) ? VAR_21.width : VAR_23[VAR_18].width));
 FUNC_0(VAR_27, "VIDEOMODE_FULLSCREEN_HEIGHT=%u\n", (VAR_23 == ((void*)0) ? VAR_21.height : VAR_23[VAR_18].height));
 FUNC_0(VAR_27, "VIDEOMODE_WINDOWED=%d\n", VAR_17);
 if (VAR_8 == VAR_1)
  FUNC_0(VAR_27, "VIDEOMODE_HORIZONTAL_AREA=%d\n", VAR_4);
 else
  FUNC_0(VAR_27, "VIDEOMODE_HORIZONTAL_AREA=%s\n", VAR_20[VAR_8]);
 if (VAR_15 == VAR_3)
  FUNC_0(VAR_27, "VIDEOMODE_VERTICAL_AREA=%d\n", VAR_6);
 else
  FUNC_0(VAR_27, "VIDEOMODE_VERTICAL_AREA=%s\n", VAR_25[VAR_15]);
 FUNC_0(VAR_27, "VIDEOMODE_HORIZONTAL_SHIFT=%d\n", VAR_9);
 FUNC_0(VAR_27, "VIDEOMODE_VERTICAL_SHIFT=%d\n", VAR_16);
 if (VAR_14 == VAR_2)
  FUNC_0(VAR_27, "VIDEOMODE_STRETCH=%g\n", VAR_5);
 else
  FUNC_0(VAR_27, "VIDEOMODE_STRETCH=%s\n", VAR_24[VAR_14]);
 FUNC_0(VAR_27, "VIDEOMODE_FIT=%s\n", VAR_19[VAR_7]);
 FUNC_0(VAR_27, "VIDEOMODE_IMAGE_ASPECT=%s\n", VAR_22[VAR_12]);



 FUNC_0(VAR_27, "VIDEOMODE_HOST_ASPECT_RATIO=%g:%g\n", VAR_11, VAR_10);



}
