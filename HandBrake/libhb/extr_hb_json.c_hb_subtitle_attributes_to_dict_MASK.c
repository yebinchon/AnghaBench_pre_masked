
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*,int ,char*,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ) ;

hb_dict_t * FUNC_3(uint32_t VAR_11)
{
    json_error_t VAR_12;
    hb_dict_t * VAR_13;

    VAR_13 = FUNC_2(&VAR_12, 0,
        "{s:o, s:o, s:o, s:o, s:o, s:o, s:o, s:o, s:o, s:o, s:o}",
        "Normal", FUNC_1(VAR_11 & VAR_8),
        "Large", FUNC_1(VAR_11 & VAR_6),
        "Children", FUNC_1(VAR_11 & VAR_2),
        "ClosedCaption", FUNC_1(VAR_11 & VAR_1),
        "Forced", FUNC_1(VAR_11 & VAR_5),
        "Commentary", FUNC_1(VAR_11 &
                                       VAR_3),
        "4By3", FUNC_1(VAR_11 & VAR_0),
        "Wide", FUNC_1(VAR_11 & VAR_10),
        "Letterbox", FUNC_1(VAR_11 & VAR_7),
        "PanScan", FUNC_1(VAR_11 & VAR_9),
        "Default", FUNC_1(VAR_11 & VAR_4));
    if (VAR_13 == ((void*)0))
    {
        FUNC_0("json pack failure: %s", VAR_12.text);
    }
    return VAR_13;
}
