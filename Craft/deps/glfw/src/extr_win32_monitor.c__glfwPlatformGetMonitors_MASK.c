
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int publicDisplayName; int publicAdapterName; int displayName; int adapterName; int modesPruned; } ;
struct TYPE_13__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
struct TYPE_14__ {int cb; int StateFlags; int * DeviceName; int DeviceString; } ;
typedef int HDC ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ DISPLAY_DEVICEW ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int *,int,int ,int,int *,int *) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (char*,int ,int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 TYPE_2__** FUNC_11 (TYPE_2__**,int) ;
 int FUNC_12 (int ,int *) ;

_GLFWmonitor** FUNC_13(int* VAR_8)
{
    int VAR_9 = 0;
    _GLFWmonitor** VAR_10 = ((void*)0);
    DWORD VAR_11, VAR_12;

    *VAR_8 = 0;

    for (VAR_11 = 0; ; VAR_11++)
    {
        DISPLAY_DEVICEW VAR_13;

        FUNC_5(&VAR_13, sizeof(DISPLAY_DEVICEW));
        VAR_13.cb = sizeof(DISPLAY_DEVICEW);

        if (!FUNC_2(((void*)0), VAR_11, &VAR_13, 0))
            break;

        if (!(VAR_13.StateFlags & VAR_1))
            continue;

        for (VAR_12 = 0; ; VAR_12++)
        {
            DISPLAY_DEVICEW VAR_14;
            _GLFWmonitor* VAR_15;
            char* VAR_16;
            HDC VAR_17;

            FUNC_5(&VAR_14, sizeof(DISPLAY_DEVICEW));
            VAR_14.cb = sizeof(DISPLAY_DEVICEW);

            if (!FUNC_2(VAR_13.DeviceName, VAR_12, &VAR_14, 0))
                break;

            VAR_16 = FUNC_8(VAR_14.DeviceString);
            if (!VAR_16)
            {
                FUNC_9(VAR_4,
                                "Win32: Failed to convert string to UTF-8");
                continue;
            }

            VAR_17 = FUNC_0(L"DISPLAY", VAR_13.DeviceName, ((void*)0), ((void*)0));

            VAR_15 = FUNC_7(VAR_16,
                                        FUNC_3(VAR_17, VAR_6),
                                        FUNC_3(VAR_17, VAR_7));

            FUNC_1(VAR_17);
            FUNC_10(VAR_16);

            if (VAR_13.StateFlags & VAR_2)
                VAR_15->win32.modesPruned = VAR_5;

            FUNC_12(VAR_15->win32.adapterName, VAR_13.DeviceName);
            FUNC_12(VAR_15->win32.displayName, VAR_14.DeviceName);

            FUNC_4(VAR_0, 0,
                                VAR_13.DeviceName, -1,
                                VAR_15->win32.publicAdapterName,
                                sizeof(VAR_15->win32.publicAdapterName),
                                ((void*)0), ((void*)0));

            FUNC_4(VAR_0, 0,
                                VAR_14.DeviceName, -1,
                                VAR_15->win32.publicDisplayName,
                                sizeof(VAR_15->win32.publicDisplayName),
                                ((void*)0), ((void*)0));

            VAR_9++;
            VAR_10 = FUNC_11(VAR_10, sizeof(_GLFWmonitor*) * VAR_9);
            VAR_10[VAR_9 - 1] = VAR_15;

            if (VAR_13.StateFlags & VAR_3 &&
                VAR_12 == 0)
            {
                FUNC_6(VAR_10[0], VAR_10[VAR_9 - 1]);
            }
        }
    }

    *VAR_8 = VAR_9;
    return VAR_10;
}
