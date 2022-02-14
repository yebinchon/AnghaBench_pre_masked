
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* winmm_js; } ;
struct TYPE_9__ {int wCaps; scalar_t__ wNumButtons; } ;
struct TYPE_8__ {int dwSize; int dwFlags; unsigned long dwButtons; int dwPOV; } ;
struct TYPE_7__ {unsigned char* buttons; } ;
typedef TYPE_2__ JOYINFOEX ;
typedef TYPE_3__ JOYCAPS ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 scalar_t__ FUNC_0 (int,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;

const unsigned char* FUNC_2(int VAR_8, int* VAR_9)
{
    JOYCAPS VAR_10;
    JOYINFOEX VAR_11;
    unsigned char* VAR_12 = VAR_7.winmm_js[VAR_8].buttons;

    if (FUNC_0(VAR_8, &VAR_10, sizeof(JOYCAPS)) != VAR_4)
        return ((void*)0);

    VAR_11.dwSize = sizeof(JOYINFOEX);
    VAR_11.dwFlags = VAR_5 | VAR_6;
    if (FUNC_1(VAR_8, &VAR_11) != VAR_4)
        return ((void*)0);

    while (*VAR_9 < (int) VAR_10.wNumButtons)
    {
        VAR_12[*VAR_9] = (unsigned char)
            (VAR_11.dwButtons & (1UL << *VAR_9) ? VAR_0 : VAR_1);
        (*VAR_9)++;
    }






    if ((VAR_10.wCaps & VAR_2) && (VAR_10.wCaps & VAR_3))
    {
        int VAR_13, VAR_14 = VAR_11.dwPOV / 100 / 45;


        const int VAR_15[9] = { 1, 3, 2, 6, 4, 12, 8, 9, 0 };

        if (VAR_14 < 0 || VAR_14 > 8)
            VAR_14 = 8;

        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
        {
            if (VAR_15[VAR_14] & (1 << VAR_13))
                VAR_12[(*VAR_9)++] = VAR_0;
            else
                VAR_12[(*VAR_9)++] = VAR_1;
        }
    }

    return VAR_12;
}
