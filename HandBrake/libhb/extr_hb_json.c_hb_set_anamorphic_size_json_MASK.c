
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


typedef int ui_geo ;
struct TYPE_16__ {int text; } ;
typedef TYPE_4__ json_error_t ;
struct TYPE_15__ {int den; int num; } ;
struct TYPE_17__ {TYPE_3__ par; int height; int width; } ;
typedef TYPE_5__ hb_geometry_t ;
struct TYPE_13__ {int den; int num; } ;
struct TYPE_14__ {TYPE_1__ par; int height; int width; } ;
struct TYPE_18__ {int * crop; int maxHeight; int maxWidth; int modulus; int itu_par; int keep; int mode; TYPE_2__ geometry; } ;
typedef TYPE_6__ hb_geometry_settings_t ;
typedef int hb_dict_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_2 (int **) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char const*) ;
 int * FUNC_6 (TYPE_4__*,int ,char*,char*,int ,char*,int ,char*,char*,int ,char*,int ) ;
 int FUNC_7 (int *,TYPE_4__*,int ,char*,char*,char*,int ,char*,int ,char*,char*,int ,char*,int ,char*,char*,char*,int ,char*,int ,char*,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

char* FUNC_11(const char * VAR_0)
{
    int VAR_1;
    json_error_t VAR_2;
    hb_dict_t * VAR_3;
    hb_geometry_t VAR_4;
    hb_geometry_t VAR_5;
    hb_geometry_settings_t VAR_6;


    FUNC_8(&VAR_6, 0, sizeof(VAR_6));

    VAR_3 = FUNC_5(VAR_0);
    VAR_1 = FUNC_7(VAR_3, &VAR_2, 0,
    "{"


    "s:{s:i, s:i, s:{s:i, s:i}},"

    "s:{"

    "s:{s:i, s:i, s:{s:i, s:i}},"

    "s:i, s?i, s?b, s:i, s:i, s:i,"

    "s?[iiii]"
    "  }"
    "}",
    "SourceGeometry",
        "Width", FUNC_10(&VAR_5.width),
        "Height", FUNC_10(&VAR_5.height),
        "PAR",
            "Num", FUNC_10(&VAR_5.par.num),
            "Den", FUNC_10(&VAR_5.par.den),
    "DestSettings",
        "Geometry",
            "Width", FUNC_10(&VAR_6.geometry.width),
            "Height", FUNC_10(&VAR_6.geometry.height),
            "PAR",
                "Num", FUNC_10(&VAR_6.geometry.par.num),
                "Den", FUNC_10(&VAR_6.geometry.par.den),
        "AnamorphicMode", FUNC_10(&VAR_6.mode),
        "Keep", FUNC_10(&VAR_6.keep),
        "ItuPAR", FUNC_9(&VAR_6.itu_par),
        "Modulus", FUNC_10(&VAR_6.modulus),
        "MaxWidth", FUNC_10(&VAR_6.maxWidth),
        "MaxHeight", FUNC_10(&VAR_6.maxHeight),
        "Crop", FUNC_10(&VAR_6.crop[0]),
                                FUNC_10(&VAR_6.crop[1]),
                                FUNC_10(&VAR_6.crop[2]),
                                FUNC_10(&VAR_6.crop[3])
    );
    FUNC_2(&VAR_3);

    if (VAR_1 < 0)
    {
        FUNC_0("json unpack failure: %s", VAR_2.text);
        return ((void*)0);
    }

    FUNC_1(&VAR_5, &VAR_6, &VAR_4);

    VAR_3 = FUNC_6(&VAR_2, 0,
        "{s:o, s:o, s:{s:o, s:o}}",
            "Width", FUNC_4(VAR_4.width),
            "Height", FUNC_4(VAR_4.height),
            "PAR",
                "Num", FUNC_4(VAR_4.par.num),
                "Den", FUNC_4(VAR_4.par.den));
    if (VAR_3 == ((void*)0))
    {
        FUNC_0("hb_set_anamorphic_size_json: pack failure: %s", VAR_2.text);
        return ((void*)0);
    }
    char *VAR_7 = FUNC_3(VAR_3);
    FUNC_2(&VAR_3);

    return VAR_7;
}
