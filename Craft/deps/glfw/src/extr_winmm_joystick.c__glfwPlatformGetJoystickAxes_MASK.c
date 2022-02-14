
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* winmm_js; } ;
struct TYPE_9__ {int wCaps; int wVmax; int wVmin; int wUmax; int wUmin; int wRmax; int wRmin; int wZmax; int wZmin; int wYmax; int wYmin; int wXmax; int wXmin; } ;
struct TYPE_8__ {int dwSize; int dwFlags; int dwVpos; int dwUpos; int dwRpos; int dwZpos; int dwYpos; int dwXpos; } ;
struct TYPE_7__ {float* axes; } ;
typedef TYPE_2__ JOYINFOEX ;
typedef TYPE_3__ JOYCAPS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__ VAR_11 ;
 scalar_t__ FUNC_0 (int,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 float FUNC_2 (int ,int ,int ) ;

const float* FUNC_3(int VAR_12, int* VAR_13)
{
    JOYCAPS VAR_14;
    JOYINFOEX VAR_15;
    float* VAR_16 = VAR_11.winmm_js[VAR_12].axes;

    if (FUNC_0(VAR_12, &VAR_14, sizeof(JOYCAPS)) != VAR_4)
        return ((void*)0);

    VAR_15.dwSize = sizeof(JOYINFOEX);
    VAR_15.dwFlags = VAR_8 | VAR_9 | VAR_10 |
                 VAR_5 | VAR_6 | VAR_7;
    if (FUNC_1(VAR_12, &VAR_15) != VAR_4)
        return ((void*)0);

    VAR_16[(*VAR_13)++] = FUNC_2(VAR_15.dwXpos, VAR_14.wXmin, VAR_14.wXmax);
    VAR_16[(*VAR_13)++] = FUNC_2(VAR_15.dwYpos, VAR_14.wYmin, VAR_14.wYmax);

    if (VAR_14.wCaps & VAR_3)
        VAR_16[(*VAR_13)++] = FUNC_2(VAR_15.dwZpos, VAR_14.wZmin, VAR_14.wZmax);

    if (VAR_14.wCaps & VAR_0)
        VAR_16[(*VAR_13)++] = FUNC_2(VAR_15.dwRpos, VAR_14.wRmin, VAR_14.wRmax);

    if (VAR_14.wCaps & VAR_1)
        VAR_16[(*VAR_13)++] = FUNC_2(VAR_15.dwUpos, VAR_14.wUmin, VAR_14.wUmax);

    if (VAR_14.wCaps & VAR_2)
        VAR_16[(*VAR_13)++] = FUNC_2(VAR_15.dwVpos, VAR_14.wVmin, VAR_14.wVmax);

    return VAR_16;
}
