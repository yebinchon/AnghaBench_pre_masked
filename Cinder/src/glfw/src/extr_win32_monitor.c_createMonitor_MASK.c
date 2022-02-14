
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int publicDisplayName; int displayName; int publicAdapterName; int adapterName; int modesPruned; } ;
struct TYPE_9__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
struct TYPE_10__ {int StateFlags; int DeviceName; int DeviceString; } ;
typedef int HDC ;
typedef TYPE_3__ DISPLAY_DEVICEW ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int,int ,int,int *,int *) ;
 TYPE_2__* FUNC_4 (char*,int ,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static _GLFWmonitor* FUNC_9(DISPLAY_DEVICEW* VAR_6,
                                   DISPLAY_DEVICEW* VAR_7)
{
    _GLFWmonitor* VAR_8;
    char* VAR_9;
    HDC VAR_10;

    if (VAR_7)
        VAR_9 = FUNC_5(VAR_7->DeviceString);
    else
        VAR_9 = FUNC_5(VAR_6->DeviceString);
    if (!VAR_9)
    {
        FUNC_6(VAR_2,
                        "Win32: Failed to convert string to UTF-8");
        return ((void*)0);
    }

    VAR_10 = FUNC_0(L"DISPLAY", VAR_6->DeviceName, ((void*)0), ((void*)0));

    VAR_8 = FUNC_4(VAR_9,
                                FUNC_2(VAR_10, VAR_4),
                                FUNC_2(VAR_10, VAR_5));

    FUNC_1(VAR_10);
    FUNC_7(VAR_9);

    if (VAR_6->StateFlags & VAR_1)
        VAR_8->win32.modesPruned = VAR_3;

    FUNC_8(VAR_8->win32.adapterName, VAR_6->DeviceName);
    FUNC_3(VAR_0, 0,
                        VAR_6->DeviceName, -1,
                        VAR_8->win32.publicAdapterName,
                        sizeof(VAR_8->win32.publicAdapterName),
                        ((void*)0), ((void*)0));

    if (VAR_7)
    {
        FUNC_8(VAR_8->win32.displayName, VAR_7->DeviceName);
        FUNC_3(VAR_0, 0,
                            VAR_7->DeviceName, -1,
                            VAR_8->win32.publicDisplayName,
                            sizeof(VAR_8->win32.publicDisplayName),
                            ((void*)0), ((void*)0));
    }

    return VAR_8;
}
