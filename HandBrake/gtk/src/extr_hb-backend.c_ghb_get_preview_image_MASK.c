
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_30__ {int prefs; int builder; int settings; } ;
typedef TYPE_6__ signal_user_data_t ;
struct TYPE_29__ {int width; int height; } ;
struct TYPE_31__ {TYPE_5__ geometry; int index; } ;
typedef TYPE_7__ hb_title_t ;
struct TYPE_32__ {int width; int height; int* data; TYPE_3__* plane; } ;
typedef TYPE_8__ hb_image_t ;
struct TYPE_28__ {int den; int num; } ;
struct TYPE_33__ {TYPE_4__ par; } ;
typedef TYPE_9__ hb_geometry_t ;
struct TYPE_25__ {int num; int den; } ;
struct TYPE_26__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_24__ {TYPE_2__ geometry; } ;
typedef TYPE_10__ hb_geometry_settings_t ;
typedef int guint8 ;
typedef int guint32 ;
typedef int gint ;
typedef int gdouble ;
typedef int gboolean ;
struct TYPE_27__ {int stride; } ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int,int,int) ;
 int * FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_7__ const*,TYPE_9__*,TYPE_10__*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int*,int*) ;
 int FUNC_11 (TYPE_6__*,int*,int*,int ,int ) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int VAR_4 ;
 int FUNC_13 (int *,int,int,int,int,int,int) ;
 TYPE_8__* FUNC_14 (int ,int ,int,TYPE_10__*,int) ;
 int FUNC_15 (TYPE_8__**) ;
 int FUNC_16 (TYPE_9__*,TYPE_10__*,TYPE_9__*) ;

GdkPixbuf*
FUNC_17(
    const hb_title_t *VAR_5,
    gint VAR_6,
    signal_user_data_t *VAR_7,
    gint *VAR_8,
    gint *VAR_9)
{
    hb_geometry_t VAR_10, VAR_11;
    hb_geometry_settings_t VAR_12;

    if( VAR_5 == ((void*)0) ) return ((void*)0);

    gboolean VAR_13;
    VAR_13 = FUNC_12(VAR_7->settings,
                            "PictureDeinterlaceFilter") != VAR_3;



    FUNC_7(VAR_7, VAR_5, &VAR_10, &VAR_12);



    FUNC_16(&VAR_10, &VAR_12, &VAR_11);


    FUNC_11(VAR_7, &VAR_12.geometry.width, &VAR_12.geometry.height,
                      VAR_11.par.num, VAR_11.par.den);
    VAR_12.geometry.par.num = 1;
    VAR_12.geometry.par.den = 1;

    GdkPixbuf *VAR_14;
    hb_image_t *VAR_15;
    VAR_15 = FUNC_14(VAR_4, VAR_5->index, VAR_6, &VAR_12, VAR_13);

    if (VAR_15 == ((void*)0))
    {
        VAR_14 = FUNC_5(VAR_1, VAR_0, 8,
                                 VAR_5->geometry.width, VAR_5->geometry.height);
        return VAR_14;
    }





    VAR_14 = FUNC_5(VAR_1, VAR_0, 8,
                             VAR_15->width, VAR_15->height);
    guint8 *VAR_16 = FUNC_3(VAR_14);

    guint8 *VAR_17 = VAR_15->data;
    guint8 *VAR_18 = VAR_16;

    gint VAR_19, VAR_20;
    gint VAR_21 = FUNC_2(VAR_14);
    gint VAR_22 = FUNC_4(VAR_14);
    guint8 *VAR_23;

    for (VAR_19 = 0; VAR_19 < VAR_15->height; VAR_19++)
    {
        guint32 *VAR_24 = (guint32*)VAR_17;
        VAR_23 = VAR_18;
        for (VAR_20 = 0; VAR_20 < VAR_15->width; VAR_20++)
        {
            VAR_23[0] = VAR_24[0] >> 16;
            VAR_23[1] = VAR_24[0] >> 8;
            VAR_23[2] = VAR_24[0] >> 0;
            VAR_23 += VAR_21;
            VAR_24++;
        }
        VAR_17 += VAR_15->plane[0].stride;
        VAR_18 += VAR_22;
    }

    *VAR_8 = FUNC_9(VAR_7->settings, "scale_width");
    *VAR_9 = FUNC_9(VAR_7->settings, "scale_height");
    FUNC_11(VAR_7, VAR_8, VAR_9,
                  VAR_11.par.num, VAR_11.par.den);

    gint VAR_25, VAR_26, VAR_27, VAR_28;
    VAR_25 = FUNC_9(VAR_7->settings, "PictureTopCrop");
    VAR_26 = FUNC_9(VAR_7->settings, "PictureBottomCrop");
    VAR_27 = FUNC_9(VAR_7->settings, "PictureLeftCrop");
    VAR_28 = FUNC_9(VAR_7->settings, "PictureRightCrop");

    gdouble VAR_29, VAR_30;
    if (FUNC_8(VAR_7->prefs, "preview_show_crop"))
    {
        VAR_29 = (gdouble)VAR_15->width / VAR_5->geometry.width;
        VAR_30 = (gdouble)VAR_15->height / VAR_5->geometry.height;
    }
    else
    {
        VAR_29 = (gdouble)VAR_15->width / (VAR_5->geometry.width - VAR_27 - VAR_28);
        VAR_30 = (gdouble)VAR_15->height / (VAR_5->geometry.height - VAR_25 - VAR_26);
    }

    int VAR_31 = VAR_15->width;
    int VAR_32 = VAR_15->height;


    if (FUNC_8(VAR_7->prefs, "reduce_hd_preview"))
    {
        gint VAR_33 = 80;
        gint VAR_34, VAR_35;

        FUNC_10(FUNC_0(VAR_7->builder, "hb_window"), &VAR_34, &VAR_35);
        if (VAR_34 > 0 && VAR_35 > 0 &&
            (VAR_31 > VAR_34 * VAR_33 / 100 ||
             VAR_32 > VAR_35 * VAR_33 / 100))
        {
            GdkPixbuf *VAR_36;
            int VAR_37 = VAR_31;
            int VAR_38 = VAR_32;

            if (VAR_31 > VAR_34 * VAR_33 / 100)
            {
                VAR_31 = VAR_34 * VAR_33 / 100;
                VAR_32 = VAR_32 * VAR_31 / VAR_37;
            }
            if (VAR_32 > VAR_35 * VAR_33 / 100)
            {
                VAR_32 = VAR_35 * VAR_33 / 100;
                VAR_31 = VAR_37 * VAR_32 / VAR_38;
            }
            VAR_29 *= (gdouble)VAR_31 / VAR_37;
            VAR_30 *= (gdouble)VAR_32 / VAR_38;
            VAR_36 = FUNC_6(VAR_14,
                            VAR_31, VAR_32, VAR_2);
            FUNC_1(VAR_14);
            VAR_14 = VAR_36;
        }
    }

    if (FUNC_8(VAR_7->prefs, "preview_show_crop"))
    {
        VAR_25 *= VAR_30;
        VAR_26 *= VAR_30;
        VAR_27 *= VAR_29;
        VAR_28 *= VAR_29;


        FUNC_13(VAR_14, 0, 0, VAR_31, VAR_25, 32, 0);

        FUNC_13(VAR_14, 0, VAR_32-VAR_26, VAR_31, VAR_26, 32, 0);

        FUNC_13(VAR_14, 0, 0, VAR_27, VAR_32, 32, 1);

        FUNC_13(VAR_14, VAR_31-VAR_28, 0, VAR_28, VAR_32, 32, 1);
    }
    FUNC_15(&VAR_15);
    return VAR_14;
}
