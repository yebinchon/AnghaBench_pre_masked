
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int _GLFWmonitor ;
struct TYPE_6__ {int cb; int StateFlags; int * DeviceName; } ;
typedef scalar_t__ GLFWbool ;
typedef size_t DWORD ;
typedef TYPE_1__ DISPLAY_DEVICEW ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t,TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int ** FUNC_4 (int **,int) ;

_GLFWmonitor** FUNC_5(int* VAR_4)
{
    int VAR_5 = 0;
    DWORD VAR_6, VAR_7, VAR_8 = 0;
    DISPLAY_DEVICEW VAR_9, VAR_10;
    GLFWbool VAR_11 = VAR_2;
    _GLFWmonitor** VAR_12 = ((void*)0);

    *VAR_4 = 0;




    for (VAR_6 = 0; ; VAR_6++)
    {
        FUNC_1(&VAR_9, sizeof(DISPLAY_DEVICEW));
        VAR_9.cb = sizeof(DISPLAY_DEVICEW);

        if (!FUNC_0(((void*)0), VAR_6, &VAR_9, 0))
            break;

        if (!(VAR_9.StateFlags & VAR_0))
            continue;

        FUNC_1(&VAR_10, sizeof(DISPLAY_DEVICEW));
        VAR_10.cb = sizeof(DISPLAY_DEVICEW);

        if (FUNC_0(VAR_9.DeviceName, 0, &VAR_10, 0))
        {
            VAR_11 = VAR_3;
            break;
        }
    }

    for (VAR_6 = 0; ; VAR_6++)
    {
        FUNC_1(&VAR_9, sizeof(DISPLAY_DEVICEW));
        VAR_9.cb = sizeof(DISPLAY_DEVICEW);

        if (!FUNC_0(((void*)0), VAR_6, &VAR_9, 0))
            break;

        if (!(VAR_9.StateFlags & VAR_0))
            continue;

        if (VAR_9.StateFlags & VAR_1)
            VAR_8 = VAR_5;

        if (VAR_11)
        {
            for (VAR_7 = 0; ; VAR_7++)
            {
                FUNC_1(&VAR_10, sizeof(DISPLAY_DEVICEW));
                VAR_10.cb = sizeof(DISPLAY_DEVICEW);

                if (!FUNC_0(VAR_9.DeviceName, VAR_7, &VAR_10, 0))
                    break;

                VAR_5++;
                VAR_12 = FUNC_4(VAR_12, sizeof(_GLFWmonitor*) * VAR_5);
                VAR_12[VAR_5 - 1] = FUNC_3(&VAR_9, &VAR_10);
            }
        }
        else
        {
            VAR_5++;
            VAR_12 = FUNC_4(VAR_12, sizeof(_GLFWmonitor*) * VAR_5);
            VAR_12[VAR_5 - 1] = FUNC_3(&VAR_9, ((void*)0));
        }
    }

    FUNC_2(VAR_12[0], VAR_12[VAR_8]);

    *VAR_4 = VAR_5;
    return VAR_12;
}
