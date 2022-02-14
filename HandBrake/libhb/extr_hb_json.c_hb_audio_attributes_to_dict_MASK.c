
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*,int ,char*,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ) ;

hb_dict_t * FUNC_3(uint32_t VAR_6)
{
    json_error_t VAR_7;
    hb_dict_t * VAR_8;

    VAR_8 = FUNC_2(&VAR_7, 0,
        "{s:o, s:o, s:o, s:o, s:o, s:o}",
        "Normal", FUNC_1(VAR_6 & VAR_3),
        "VisuallyImpaired", FUNC_1(VAR_6 &
                                          VAR_5),
        "Commentary", FUNC_1(VAR_6 &
                                          VAR_1),
        "AltCommentary", FUNC_1(VAR_6 &
                                          VAR_0),
        "Secondary", FUNC_1(VAR_6 & VAR_4),
        "Default", FUNC_1(VAR_6 & VAR_2));
    if (VAR_8 == ((void*)0))
    {
        FUNC_0("json pack failure: %s", VAR_7.text);
    }
    return VAR_8;
}
