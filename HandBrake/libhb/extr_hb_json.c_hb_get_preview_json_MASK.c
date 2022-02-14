
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int settings ;
struct TYPE_16__ {int text; } ;
typedef TYPE_4__ json_error_t ;
typedef int hb_value_array_t ;
struct TYPE_17__ {int format; int width; int height; TYPE_3__* plane; } ;
typedef TYPE_5__ hb_image_t ;
typedef int hb_handle_t ;
struct TYPE_13__ {int num; int den; } ;
struct TYPE_14__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_18__ {int mode; int keep; int itu_par; int modulus; int maxWidth; int maxHeight; int* crop; TYPE_2__ geometry; } ;
typedef TYPE_6__ hb_geometry_settings_t ;
typedef int hb_dict_t ;
struct TYPE_15__ {int width; int height; int stride; int height_stride; int size; int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int ) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (char*,int ) ;
 TYPE_5__* FUNC_5 (int *,int,int,TYPE_6__*,int) ;
 int FUNC_6 (TYPE_5__**) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int **) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int * FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (TYPE_4__*,int ,char*,char*,int ,char*,int ,char*,int ,...) ;
 int FUNC_15 (int *,TYPE_4__*,int ,char*,char*,int ,char*,int ,char*,int ,char*,char*,char*,int ,char*,int ,char*,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_16 (TYPE_6__*,int ,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (int*) ;

char* FUNC_20(hb_handle_t * VAR_0, const char *VAR_1)
{
    hb_image_t *VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6 = 0;

    int VAR_7;
    json_error_t VAR_8;
    hb_dict_t * VAR_9;
    hb_geometry_settings_t VAR_10;


    FUNC_16(&VAR_10, 0, sizeof(VAR_10));

    VAR_9 = FUNC_12(VAR_1);
    VAR_7 = FUNC_15(VAR_9, &VAR_8, 0,
    "{"

    "s:i, s:i, s?b,"

    "s:{"

    "s:{s:i, s:i, s:{s:i, s:i}},"

    "s:i, s?i, s?b, s:i, s:i, s:i,"

    "s?[iiii]"
    "  }"
    "}",
    "Title", FUNC_19(&VAR_4),
    "Preview", FUNC_19(&VAR_5),
    "Deinterlace", FUNC_18(&VAR_6),
    "DestSettings",
        "Geometry",
            "Width", FUNC_19(&VAR_10.geometry.width),
            "Height", FUNC_19(&VAR_10.geometry.height),
            "PAR",
                "Num", FUNC_19(&VAR_10.geometry.par.num),
                "Den", FUNC_19(&VAR_10.geometry.par.den),
        "AnamorphicMode", FUNC_19(&VAR_10.mode),
        "Keep", FUNC_19(&VAR_10.keep),
        "ItuPAR", FUNC_18(&VAR_10.itu_par),
        "Modulus", FUNC_19(&VAR_10.modulus),
        "MaxWidth", FUNC_19(&VAR_10.maxWidth),
        "MaxHeight", FUNC_19(&VAR_10.maxHeight),
        "Crop", FUNC_19(&VAR_10.crop[0]),
                                FUNC_19(&VAR_10.crop[1]),
                                FUNC_19(&VAR_10.crop[2]),
                                FUNC_19(&VAR_10.crop[3])
    );
    FUNC_9(&VAR_9);

    if (VAR_7 < 0)
    {
        FUNC_4("preview params: json unpack failure: %s", VAR_8.text);
        return ((void*)0);
    }

    VAR_2 = FUNC_5(VAR_0, VAR_4, VAR_5, &VAR_10, VAR_6);
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_9 = FUNC_14(&VAR_8, 0,
        "{s:o, s:o, s:o}",
            "Format", FUNC_11(VAR_2->format),
            "Width", FUNC_11(VAR_2->width),
            "Height", FUNC_11(VAR_2->height));
    if (VAR_9 == ((void*)0))
    {
        FUNC_4("hb_get_preview_json: pack failure: %s", VAR_8.text);
        return ((void*)0);
    }

    hb_value_array_t * VAR_11 = FUNC_8();
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
    {
        int VAR_12 = FUNC_0(VAR_2->plane[VAR_3].size);
        if (VAR_2->plane[VAR_3].size <= 0 || VAR_12 <= 0)
            continue;

        char *VAR_13 = FUNC_2(VAR_12, 1);
        FUNC_1(VAR_13, VAR_12,
                         VAR_2->plane[VAR_3].data, VAR_2->plane[VAR_3].size);

        VAR_12 = FUNC_17(VAR_13);
        hb_dict_t *VAR_14;
        VAR_14 = FUNC_14(&VAR_8, 0,
            "{s:o, s:o, s:o, s:o, s:o, s:o}",
            "Width", FUNC_11(VAR_2->plane[VAR_3].width),
            "Height", FUNC_11(VAR_2->plane[VAR_3].height),
            "Stride", FUNC_11(VAR_2->plane[VAR_3].stride),
            "HeightStride", FUNC_11(VAR_2->plane[VAR_3].height_stride),
            "Size", FUNC_11(VAR_12),
            "Data", FUNC_13(VAR_13)
        );
        if (VAR_14 == ((void*)0))
        {
            FUNC_4("plane_dict: json pack failure: %s", VAR_8.text);
            return ((void*)0);
        }
        FUNC_7(VAR_11, VAR_14);
    }
    FUNC_3(VAR_9, "Planes", VAR_11);
    FUNC_6(&VAR_2);

    char *VAR_15 = FUNC_10(VAR_9);
    FUNC_9(&VAR_9);

    return VAR_15;
}
