
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_3__ {int width; int height; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,double*,double*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,double*) ;
 int FUNC_5 (char*,int *) ;
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
 double VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 double VAR_21 ;
 double VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_2__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_33 ;
 int VAR_34 ;
 TYPE_1__ VAR_35 ;

int FUNC_7(char *VAR_36, char *VAR_37)
{
 if (FUNC_6(VAR_36, "VIDEOMODE_WINDOW_WIDTH") == 0)
  return (VAR_35.width = FUNC_3(VAR_37)) != -1;
 else if (FUNC_6(VAR_36, "VIDEOMODE_WINDOW_HEIGHT") == 0)
  return (VAR_35.height = FUNC_3(VAR_37)) != -1;
 else if (FUNC_6(VAR_36, "VIDEOMODE_FULLSCREEN_WIDTH") == 0)
  return (VAR_31.width = FUNC_3(VAR_37)) != -1;
 else if (FUNC_6(VAR_36, "VIDEOMODE_FULLSCREEN_HEIGHT") == 0)
  return (VAR_31.height = FUNC_3(VAR_37)) != -1;
 else if (FUNC_6(VAR_36, "VIDEOMODE_WINDOWED") == 0)
  return (VAR_28 = FUNC_2(VAR_37)) != -1;
 else if (FUNC_6(VAR_36, "VIDEOMODE_HORIZONTAL_AREA") == 0) {

  int VAR_38 = FUNC_0(VAR_37, VAR_30, VAR_5);
  if (VAR_38 < 0) {
   VAR_19 = VAR_4;
   return (VAR_15 = FUNC_3(VAR_37)) != -1
          && VAR_15 >= VAR_9
          && VAR_15 <= VAR_7;
  }
  VAR_19 = VAR_38;
 }
 else if (FUNC_6(VAR_36, "VIDEOMODE_VERTICAL_AREA") == 0) {
  int VAR_39 = FUNC_0(VAR_37, VAR_34, VAR_14);
  if (VAR_39 < 0) {
   VAR_26 = VAR_13;
   return (VAR_17 = FUNC_3(VAR_37)) != -1
          && VAR_17 >= VAR_10
          && VAR_17 <= VAR_8;
  }
  VAR_26 = VAR_39;
 }
 else if (FUNC_6(VAR_36, "VIDEOMODE_HORIZONTAL_SHIFT") == 0)
  return FUNC_5(VAR_37, &VAR_20);
 else if (FUNC_6(VAR_36, "VIDEOMODE_VERTICAL_SHIFT") == 0)
  return FUNC_5(VAR_37, &VAR_27);
 else if (FUNC_6(VAR_36, "VIDEOMODE_STRETCH") == 0) {
  int VAR_40 = FUNC_0(VAR_37, VAR_33, VAR_12);
  if (VAR_40 < 0) {
   VAR_25 = VAR_11;
   return FUNC_4(VAR_37, &VAR_16)
           && VAR_16 >= 1.0;
  }
  VAR_25 = VAR_40;
 }
 else if (FUNC_6(VAR_36, "VIDEOMODE_FIT") == 0) {
  int VAR_41 = FUNC_0(VAR_37, VAR_29, VAR_3);
  if (VAR_41 < 0)
   return VAR_0;
  VAR_18 = VAR_41;
 }
 else if (FUNC_6(VAR_36, "VIDEOMODE_IMAGE_ASPECT") == 0) {
  int VAR_42 = FUNC_0(VAR_37, VAR_32, VAR_6);
  if (VAR_42 < 0)
   return VAR_0;
  VAR_23 = VAR_42;
 }




 else if (FUNC_6(VAR_36, "VIDEOMODE_HOST_ASPECT_RATIO") == 0) {
  if (FUNC_6(VAR_37, "AUTO") == 0)
   VAR_22 = VAR_21 = 0.0;
  else
   return FUNC_1(VAR_37, &VAR_22, &VAR_21);
 }




 else
  return VAR_0;
 return VAR_1;
}
