
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int text; } ;
typedef TYPE_3__ json_error_t ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_8__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_10__ {int mode; int keep; int itu_par; int modulus; int maxWidth; int maxHeight; int* crop; TYPE_2__ geometry; } ;
typedef TYPE_4__ hb_geometry_settings_t ;
typedef int hb_dict_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (TYPE_3__*,int ,char*,char*,int ,char*,int ,char*,int ,char*,char*,char*,int ,char*,int ,char*,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,int ,int ,int ) ;

char* FUNC_6(int VAR_0, int VAR_1,
                            int VAR_2, hb_geometry_settings_t *VAR_3)
{
    json_error_t VAR_4;
    hb_dict_t * VAR_5;

    VAR_5 = FUNC_5(&VAR_4, 0,
        "{"
        "s:o, s:o, s:o,"
        "s:{"
        "   s:{s:o, s:o, s:{s:o, s:o}},"
        "   s:o, s:o, s:o, s:o, s:o, s:o"
        "   s:[oooo]"
        "  }"
        "}",
        "Title", FUNC_4(VAR_0),
        "Preview", FUNC_4(VAR_1),
        "Deinterlace", FUNC_1(VAR_2),
        "DestSettings",
            "Geometry",
                "Width", FUNC_4(VAR_3->geometry.width),
                "Height", FUNC_4(VAR_3->geometry.height),
                "PAR",
                    "Num", FUNC_4(VAR_3->geometry.par.num),
                    "Den", FUNC_4(VAR_3->geometry.par.den),
            "AnamorphicMode", FUNC_4(VAR_3->mode),
            "Keep", FUNC_4(VAR_3->keep),
            "ItuPAR", FUNC_1(VAR_3->itu_par),
            "Modulus", FUNC_4(VAR_3->modulus),
            "MaxWidth", FUNC_4(VAR_3->maxWidth),
            "MaxHeight", FUNC_4(VAR_3->maxHeight),
            "Crop", FUNC_4(VAR_3->crop[0]),
                                FUNC_4(VAR_3->crop[1]),
                                FUNC_4(VAR_3->crop[2]),
                                FUNC_4(VAR_3->crop[3])
    );
    if (VAR_5 == ((void*)0))
    {
        FUNC_0("hb_get_preview_params_json: pack failure: %s", VAR_4.text);
        return ((void*)0);
    }

    char *VAR_6 = FUNC_3(VAR_5);
    FUNC_2(&VAR_5);

    return VAR_6;
}
