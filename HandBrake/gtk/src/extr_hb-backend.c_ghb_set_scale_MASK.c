
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scale_busy; int settings; int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gint ;
typedef scalar_t__ gboolean ;
typedef int GtkWidget ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int,int) ;

void
FUNC_10(signal_user_data_t *VAR_2, gint VAR_3)
{
    if (VAR_2->scale_busy) return;
    VAR_2->scale_busy = VAR_1;

    FUNC_4(VAR_2->settings, VAR_3);
    FUNC_8(VAR_2);
    FUNC_3(VAR_2);



    GtkWidget *VAR_4;
    int VAR_5 = FUNC_5(VAR_2->settings, "PictureModulus");
    VAR_4 = FUNC_0 (VAR_2->builder, "scale_width");
    FUNC_9 (FUNC_1(VAR_4), VAR_5, 16);
    VAR_4 = FUNC_0 (VAR_2->builder, "scale_height");
    FUNC_9 (FUNC_1(VAR_4), VAR_5, 16);



    gboolean VAR_6 = FUNC_2(VAR_2->settings, "PictureLooseCrop");
    if (VAR_6)
    {
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureTopCrop");
        FUNC_9 (FUNC_1(VAR_4), VAR_5, 16);
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureBottomCrop");
        FUNC_9 (FUNC_1(VAR_4), VAR_5, 16);
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureLeftCrop");
        FUNC_9 (FUNC_1(VAR_4), VAR_5, 16);
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureRightCrop");
        FUNC_9 (FUNC_1(VAR_4), VAR_5, 16);
    }
    else
    {
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureTopCrop");
        FUNC_9 (FUNC_1(VAR_4), 2, 16);
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureBottomCrop");
        FUNC_9 (FUNC_1(VAR_4), 2, 16);
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureLeftCrop");
        FUNC_9 (FUNC_1(VAR_4), 2, 16);
        VAR_4 = FUNC_0 (VAR_2->builder, "PictureRightCrop");
        FUNC_9 (FUNC_1(VAR_4), 2, 16);
    }

    FUNC_6(VAR_2, "autoscale", VAR_2->settings);
    FUNC_6(VAR_2, "PictureModulus", VAR_2->settings);
    FUNC_6(VAR_2, "PictureLooseCrop", VAR_2->settings);
    FUNC_6(VAR_2, "PictureKeepRatio", VAR_2->settings);

    FUNC_6(VAR_2, "PictureTopCrop", VAR_2->settings);
    FUNC_6(VAR_2, "PictureBottomCrop", VAR_2->settings);
    FUNC_6(VAR_2, "PictureLeftCrop", VAR_2->settings);
    FUNC_6(VAR_2, "PictureRightCrop", VAR_2->settings);

    FUNC_6(VAR_2, "scale_width", VAR_2->settings);
    FUNC_6(VAR_2, "scale_height", VAR_2->settings);

    FUNC_6(VAR_2, "PicturePARWidth", VAR_2->settings);
    FUNC_6(VAR_2, "PicturePARHeight", VAR_2->settings);
    FUNC_6(VAR_2, "PictureDisplayWidth", VAR_2->settings);
    FUNC_6(VAR_2, "PictureDisplayHeight", VAR_2->settings);
    FUNC_7(VAR_2);
    VAR_2->scale_busy = VAR_0;
}
