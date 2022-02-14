
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int gboolean ;
typedef int GtkWidget ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(signal_user_data_t *VAR_5)
{
    gboolean VAR_6, VAR_7, VAR_8;
    gboolean VAR_9, VAR_10;
    gboolean VAR_11, VAR_12, VAR_13;
    gint VAR_14;
    GtkWidget *VAR_15;

    VAR_14 = FUNC_2(VAR_5->settings, "PicturePAR");
    VAR_8 = (VAR_14 != VAR_4 &&
                          VAR_14 != VAR_1 &&
                          VAR_14 != VAR_3);
    VAR_7 = FUNC_1(VAR_5->settings, "PictureKeepRatio");
    VAR_6 = FUNC_1(VAR_5->settings, "autoscale");

    VAR_9 = VAR_10 =
                         !VAR_6 && (VAR_14 != VAR_4);
    VAR_11 = (VAR_14 == VAR_2) && !VAR_7;
    VAR_13 = (VAR_14 == VAR_2) && !VAR_7;
    VAR_12 = VAR_0;

    VAR_15 = FUNC_0(VAR_5->builder, "PictureModulus");
    FUNC_3(VAR_15, VAR_14 != VAR_4);
    VAR_15 = FUNC_0(VAR_5->builder, "PictureLooseCrop");
    FUNC_3(VAR_15, VAR_14 != VAR_4);
    VAR_15 = FUNC_0(VAR_5->builder, "scale_width");
    FUNC_3(VAR_15, VAR_9);
    VAR_15 = FUNC_0(VAR_5->builder, "scale_height");
    FUNC_3(VAR_15, VAR_10);
    VAR_15 = FUNC_0(VAR_5->builder, "PictureDisplayWidth");
    FUNC_3(VAR_15, VAR_11);
    VAR_15 = FUNC_0(VAR_5->builder, "PictureDisplayHeight");
    FUNC_3(VAR_15, VAR_12);
    VAR_15 = FUNC_0(VAR_5->builder, "PicturePARWidth");
    FUNC_3(VAR_15, VAR_13);
    VAR_15 = FUNC_0(VAR_5->builder, "PicturePARHeight");
    FUNC_3(VAR_15, VAR_13);
    VAR_15 = FUNC_0(VAR_5->builder, "PictureKeepRatio");
    FUNC_3(VAR_15, VAR_8);
    VAR_15 = FUNC_0(VAR_5->builder, "autoscale");
    FUNC_3(VAR_15, VAR_14 != VAR_4);
}
