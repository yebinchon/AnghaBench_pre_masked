
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hb_value_t ;
typedef int hb_value_array_t ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_11__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_10__ {TYPE_3__ geometry; int crop; int list_chapter; } ;
typedef TYPE_2__ hb_title_t ;
typedef int hb_handle_t ;
typedef TYPE_3__ hb_geometry_t ;
struct TYPE_12__ {int* crop; int modulus; scalar_t__ mode; int keep; int itu_par; TYPE_3__ geometry; void* maxHeight; void* maxWidth; } ;
typedef TYPE_4__ hb_geometry_settings_t ;
typedef int const hb_dict_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int const*) ;
 void* FUNC_3 (int const*,char*) ;
 int const* FUNC_4 () ;
 int FUNC_5 (int const*,char*,int const*) ;
 int FUNC_6 (char*) ;
 TYPE_2__* FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int,int const*,int const*) ;
 scalar_t__ FUNC_10 (int *,int,int const*,int const*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_12 (int,int const*) ;
 int const* FUNC_13 (int) ;
 int FUNC_14 (int const**) ;
 int FUNC_15 (void*) ;
 void* FUNC_16 (void*) ;
 char* FUNC_17 (int *) ;
 int const* FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int*,int ,int) ;
 int FUNC_21 (char const*,char*) ;

int FUNC_22(hb_handle_t *VAR_10, int VAR_11,
                          const hb_dict_t *VAR_12, hb_dict_t *VAR_13)
{

    hb_title_t *VAR_14 = FUNC_7(VAR_10, VAR_11);
    if (VAR_14 == ((void*)0))
        return -1;

    int VAR_15 = FUNC_15(FUNC_3(VAR_12, "ChapterMarkers"));
    if (FUNC_8(VAR_14->list_chapter) <= 1)
        VAR_15 = 0;


    hb_dict_t *VAR_16 = FUNC_3(VAR_13, "Destination");
    FUNC_5(VAR_16, "ChapterMarkers", FUNC_13(VAR_15));

    hb_dict_t *VAR_17 = FUNC_3(VAR_13, "Filters");
    hb_value_array_t *VAR_18 = FUNC_3(VAR_17, "FilterList");


    hb_geometry_t VAR_19, VAR_20;
    hb_geometry_settings_t VAR_21;
    int VAR_22;

    VAR_19 = VAR_14->geometry;
    if (!FUNC_15(FUNC_3(VAR_12, "PictureAutoCrop")))
    {
        VAR_21.crop[0] = FUNC_16(FUNC_3(VAR_12, "PictureTopCrop"));
        VAR_21.crop[1] = FUNC_16(FUNC_3(VAR_12, "PictureBottomCrop"));
        VAR_21.crop[2] = FUNC_16(FUNC_3(VAR_12, "PictureLeftCrop"));
        VAR_21.crop[3] = FUNC_16(FUNC_3(VAR_12, "PictureRightCrop"));
    }
    else
    {
        FUNC_20(VAR_21.crop, VAR_14->crop, sizeof(VAR_21.crop));
    }
    VAR_21.modulus = FUNC_16(FUNC_3(VAR_12, "PictureModulus"));
    if (VAR_21.modulus < 2)
        VAR_21.modulus = 2;
    if (FUNC_15(FUNC_3(VAR_12, "PictureLooseCrop")))
    {

        int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

        VAR_25 = VAR_19.width - VAR_21.crop[2] - VAR_21.crop[3];
        VAR_26 = VAR_19.height - VAR_21.crop[0] - VAR_21.crop[1];
        VAR_27 = FUNC_1(VAR_25, VAR_21.modulus);
        VAR_28 = FUNC_1(VAR_26, VAR_21.modulus);

        VAR_23 = FUNC_0((VAR_26 - VAR_28) / 2);
        VAR_24 = VAR_26 - VAR_28 - VAR_23;
        VAR_21.crop[0] += VAR_23;
        VAR_21.crop[1] += VAR_24;
        VAR_23 = FUNC_0((VAR_25 - VAR_27) / 2);
        VAR_24 = VAR_25 - VAR_27 - VAR_23;
        VAR_21.crop[2] += VAR_23;
        VAR_21.crop[3] += VAR_24;
    }
    hb_value_t *VAR_29 = FUNC_3(VAR_12, "PicturePAR");
    if (FUNC_19(VAR_29) == VAR_9)
    {
        const char *VAR_30 = FUNC_17(VAR_29);
        if (!FUNC_21(VAR_30, "off"))
            VAR_21.mode = VAR_3;
        else if (!FUNC_21(VAR_30, "strict"))
            VAR_21.mode = VAR_4;
        else if (!FUNC_21(VAR_30, "custom"))
            VAR_21.mode = VAR_1;
        else if (!FUNC_21(VAR_30, "auto"))
            VAR_21.mode = VAR_0;
        else
            VAR_21.mode = VAR_2;
    }
    else
    {
        VAR_21.mode = FUNC_16(FUNC_3(VAR_12, "PicturePAR"));
    }
    VAR_22 = FUNC_15(FUNC_3(VAR_12, "PictureKeepRatio"));
    if (VAR_21.mode == VAR_4 ||
        VAR_21.mode == VAR_2 ||
        VAR_21.mode == VAR_0)
    {
        VAR_22 = 1;
    }
    VAR_21.keep = VAR_22 * VAR_6;
    VAR_21.itu_par = FUNC_15(FUNC_3(VAR_12, "PictureItuPAR"));
    VAR_21.maxWidth = FUNC_16(FUNC_3(VAR_12, "PictureWidth"));
    VAR_21.maxHeight = FUNC_16(FUNC_3(VAR_12, "PictureHeight"));
    VAR_21.geometry = VAR_14->geometry;
    int VAR_31 = FUNC_16(FUNC_3(VAR_12, "PictureForceWidth"));
    int VAR_32 = FUNC_16(FUNC_3(VAR_12, "PictureForceHeight"));
    if (VAR_31 > 0)
    {
        VAR_21.geometry.width = VAR_31;
        VAR_21.keep |= VAR_8;
    }
    else
    {
        VAR_21.geometry.width -= VAR_21.crop[2] + VAR_21.crop[3];
    }
    if (VAR_32 > 0)
    {
        VAR_21.geometry.height = VAR_32;
        VAR_21.keep |= VAR_7;
    }
    else
    {
        VAR_21.geometry.height -= VAR_21.crop[0] + VAR_21.crop[1];
    }
    if (VAR_21.mode == VAR_1 && !VAR_22)
    {
        int VAR_33;
        VAR_33 = FUNC_16(FUNC_3(VAR_12, "PictureDARWidth"));
        if (VAR_33 > 0)
        {
            VAR_21.geometry.par.num = VAR_33;
            VAR_21.geometry.par.den = VAR_21.geometry.width;
        }
        else
        {
            VAR_21.geometry.par.num =
                FUNC_16(FUNC_3(VAR_12, "PicturePARWidth"));
            VAR_21.geometry.par.den =
                FUNC_16(FUNC_3(VAR_12, "PicturePARHeight"));
        }
    }
    FUNC_11(&VAR_19, &VAR_21, &VAR_20);
    hb_dict_t *VAR_34 = FUNC_3(VAR_13, "PAR");
    FUNC_5(VAR_34, "Num", FUNC_18(VAR_20.par.num));
    FUNC_5(VAR_34, "Den", FUNC_18(VAR_20.par.den));
    VAR_34 = ((void*)0);

    hb_dict_t *VAR_35;
    hb_dict_t *VAR_36;

    VAR_36 = FUNC_4();
    FUNC_5(VAR_36, "width", FUNC_18(VAR_20.width));
    FUNC_5(VAR_36, "height", FUNC_18(VAR_20.height));
    FUNC_5(VAR_36, "crop-top", FUNC_18(VAR_21.crop[0]));
    FUNC_5(VAR_36, "crop-bottom", FUNC_18(VAR_21.crop[1]));
    FUNC_5(VAR_36, "crop-left", FUNC_18(VAR_21.crop[2]));
    FUNC_5(VAR_36, "crop-right", FUNC_18(VAR_21.crop[3]));
    if (FUNC_12(VAR_5, VAR_36))
    {
        FUNC_6("hb_preset_apply_title: Internal error, invalid CROP_SCALE");
        FUNC_14(&VAR_36);
        goto fail;
    }

    VAR_35 = FUNC_4();
    FUNC_5(VAR_35, "ID", FUNC_18(VAR_5));
    FUNC_5(VAR_35, "Settings", VAR_36);
    FUNC_2(VAR_18, VAR_35);

    if (FUNC_9(VAR_10, VAR_11, VAR_12, VAR_13) != 0)
    {
        goto fail;
    }


    if (FUNC_10(VAR_10, VAR_11, VAR_12, VAR_13) != 0)
    {
        goto fail;
    }
    return 0;

fail:
    return -1;
}
