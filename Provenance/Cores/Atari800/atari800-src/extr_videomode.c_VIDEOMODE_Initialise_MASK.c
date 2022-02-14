
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int asp_ratio; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {int width; int height; } ;


 void* FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,double*,double*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,double*) ;
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
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 double VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 double VAR_22 ;
 double VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_3__* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 TYPE_2__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_35 ;
 int VAR_36 ;
 TYPE_1__ VAR_37 ;
 int VAR_38 ;

int FUNC_7(int *VAR_39, char *VAR_40[])
{
 int VAR_41, VAR_42;
 for (VAR_41 = VAR_42 = 1; VAR_41 < *VAR_39; VAR_41++) {
  int VAR_43 = (VAR_41 + 1 < *VAR_39);
  int VAR_44 = VAR_0;
  int VAR_45 = VAR_0;

  if (FUNC_6(VAR_40[VAR_41], "-win-width") == 0) {
   if (VAR_43)
    VAR_45 = (VAR_37.width = FUNC_3(VAR_40[++VAR_41])) == -1;
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-win-height") == 0) {
   if (VAR_43)
    VAR_45 = (VAR_37.height = FUNC_3(VAR_40[++VAR_41])) == -1;
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-fs-width") == 0) {
   if (VAR_43)
    VAR_45 = (VAR_33.width = FUNC_3(VAR_40[++VAR_41])) == -1;
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-fs-height") == 0) {
   if (VAR_43)
    VAR_45 = (VAR_33.height = FUNC_3(VAR_40[++VAR_41])) == -1;
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-fullscreen") == 0)
   VAR_29 = VAR_0;
  else if (FUNC_6(VAR_40[VAR_41], "-windowed") == 0)
   VAR_29 = VAR_1;
  else if (FUNC_6(VAR_40[VAR_41], "-horiz-area") == 0) {
   if (VAR_43) {
    int VAR_46 = FUNC_0(VAR_40[++VAR_41], VAR_32, VAR_5);
    if (VAR_46 < 0) {
     VAR_20 = VAR_4;
     VAR_45 = (VAR_16 = FUNC_3(VAR_40[VAR_41])) == -1
           || VAR_16 < VAR_9
           || VAR_16 > VAR_7;
    } else
     VAR_20 = VAR_46;
   }
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-vert-area") == 0) {
   if (VAR_43) {
    int VAR_47 = FUNC_0(VAR_40[++VAR_41], VAR_36, VAR_15);
    if (VAR_47 < 0) {
     VAR_27 = VAR_14;
     VAR_45 = (VAR_18 = FUNC_3(VAR_40[VAR_41])) == -1
           || VAR_18 < VAR_10
           || VAR_18 > VAR_8;
    } else
     VAR_27 = VAR_47;
   }
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-horiz-shift") == 0) {
   if (VAR_43)
    VAR_45 = !FUNC_5(VAR_40[++VAR_41], &VAR_21);
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-vert-shift") == 0) {
   if (VAR_43)
    VAR_45 = !FUNC_5(VAR_40[++VAR_41], &VAR_28);
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-stretch") == 0) {
   if (VAR_43) {
    int VAR_48 = FUNC_0(VAR_40[++VAR_41], VAR_35, VAR_13);
    if (VAR_48 < 0) {
     VAR_26 = VAR_12;
     VAR_45 = !FUNC_4(VAR_40[VAR_41], &VAR_17)
           || VAR_17 < 1.0;
    } else
     VAR_26 = VAR_48;
   }
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-fit-screen") == 0) {
   if (VAR_43) {
    if ((VAR_19 = FUNC_0(VAR_40[++VAR_41], VAR_31, VAR_3)) < 0)
     VAR_45 = VAR_1;
   }
   else VAR_44 = VAR_1;
  }
  else if (FUNC_6(VAR_40[VAR_41], "-image-aspect") == 0) {
   if (VAR_43) {
    if ((VAR_24 = FUNC_0(VAR_40[++VAR_41], VAR_34, VAR_6)) < 0)
     VAR_45 = VAR_1;
   }
   else VAR_44 = VAR_1;
  }






  else if (FUNC_6(VAR_40[VAR_41], "-host-aspect-ratio") == 0) {
   if (VAR_43) {
    if (FUNC_6(VAR_40[++VAR_41], "auto") == 0)
     VAR_23 = VAR_22 = 0.0;
    else
     VAR_45 = !FUNC_2(VAR_40[VAR_41], &VAR_23, &VAR_22);
   }
   else VAR_44 = VAR_1;
  }






  else {
   if (FUNC_6(VAR_40[VAR_41], "-help") == 0) {
    FUNC_1("\t-win-width <num>            Host window width");
    FUNC_1("\t-win-height <num>           Host window height");
    FUNC_1("\t-fs-width <num>             Host fullscreen width");
    FUNC_1("\t-fs-height <num>            Host fullscreen height");
    FUNC_1("\t-fullscreen                 Run fullscreen");
    FUNC_1("\t-windowed                   Run in window");
    FUNC_1("\t-horiz-area narrow|tv|full|<number>");
    FUNC_1("\t                            Set horizontal view area");
    FUNC_1("\t-vert-area short|tv|full|<number>");
    FUNC_1("\t                            Set vertical view area");
    FUNC_1("\t-horiz-shift <num>          Set horizontal shift of the visible area (-%i..%i)", VAR_7, VAR_7);
    FUNC_1("\t-vert-shift <num>           Set vertical shift of the visible area (-%i..%i)", VAR_8, VAR_8);
    FUNC_1("\t-stretch none|integral|full|<number>");
    FUNC_1("\t                            Set method of image stretching");
    FUNC_1("\t-fit-screen width|height|both");
    FUNC_1("\t                            Set method of image fitting the screen");
    FUNC_1("\t-image-aspect none|square-pixels|real");
    FUNC_1("\t                            Set image aspect ratio");




    FUNC_1("\t-host-aspect-ratio auto|<w>:<h>");
    FUNC_1("\t                            Set host display aspect ratio");




   }
   VAR_40[VAR_42++] = VAR_40[VAR_41];
  }

  if (VAR_44) {
   FUNC_1("Missing argument for '%s'", VAR_40[VAR_41]);
   return VAR_0;
  } else if (VAR_45) {
   FUNC_1("Invalid argument for '%s'", VAR_40[--VAR_41]);
   return VAR_0;
  }
 }
 *VAR_39 = VAR_42;




 return VAR_1;
}
