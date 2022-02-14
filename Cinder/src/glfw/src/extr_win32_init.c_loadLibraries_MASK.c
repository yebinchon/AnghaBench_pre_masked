
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ XINPUTGETSTATE_T ;
typedef scalar_t__ XINPUTGETCAPABILITIES_T ;
struct TYPE_14__ {void* instance; scalar_t__ SetProcessDpiAwareness; } ;
struct TYPE_13__ {void* instance; scalar_t__ DwmFlush; scalar_t__ DwmIsCompositionEnabled; } ;
struct TYPE_12__ {void* instance; scalar_t__ XInputGetState; scalar_t__ XInputGetCapabilities; } ;
struct TYPE_11__ {void* instance; scalar_t__ DirectInput8Create; } ;
struct TYPE_10__ {void* instance; scalar_t__ ChangeWindowMessageFilterEx; scalar_t__ SetProcessDPIAware; } ;
struct TYPE_9__ {void* instance; scalar_t__ timeGetTime; } ;
struct TYPE_15__ {TYPE_6__ shcore; TYPE_5__ dwmapi; TYPE_4__ xinput; TYPE_3__ dinput8; TYPE_2__ user32; TYPE_1__ winmm; } ;
struct TYPE_16__ {TYPE_7__ win32; } ;
typedef scalar_t__ TIMEGETTIME_T ;
typedef scalar_t__ SETPROCESSDPIAWARE_T ;
typedef scalar_t__ SETPROCESSDPIAWARENESS_T ;
typedef int GLFWbool ;
typedef scalar_t__ DWMISCOMPOSITIONENABLED_T ;
typedef scalar_t__ DWMFLUSH_T ;
typedef scalar_t__ DIRECTINPUT8CREATE_T ;
typedef scalar_t__ CHANGEWINDOWMESSAGEFILTEREX_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,char*) ;
 void* FUNC_1 (char const*) ;
 TYPE_8__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static GLFWbool FUNC_3(void)
{
    VAR_3.win32.winmm.instance = FUNC_1("winmm.dll");
    if (!VAR_3.win32.winmm.instance)
    {
        FUNC_2(VAR_1, "Win32: Failed to load winmm.dll");
        return VAR_0;
    }

    VAR_3.win32.winmm.timeGetTime = (TIMEGETTIME_T)
        FUNC_0(VAR_3.win32.winmm.instance, "timeGetTime");

    VAR_3.win32.user32.instance = FUNC_1("user32.dll");
    if (!VAR_3.win32.user32.instance)
    {
        FUNC_2(VAR_1, "Win32: Failed to load user32.dll");
        return VAR_0;
    }

    VAR_3.win32.user32.SetProcessDPIAware = (SETPROCESSDPIAWARE_T)
        FUNC_0(VAR_3.win32.user32.instance, "SetProcessDPIAware");
    VAR_3.win32.user32.ChangeWindowMessageFilterEx = (CHANGEWINDOWMESSAGEFILTEREX_T)
        FUNC_0(VAR_3.win32.user32.instance, "ChangeWindowMessageFilterEx");

    VAR_3.win32.dinput8.instance = FUNC_1("dinput8.dll");
    if (VAR_3.win32.dinput8.instance)
    {
        VAR_3.win32.dinput8.DirectInput8Create = (DIRECTINPUT8CREATE_T)
            FUNC_0(VAR_3.win32.dinput8.instance, "DirectInput8Create");
    }

    {
        int VAR_4;
        const char* VAR_5[] =
        {
            "xinput1_4.dll",
            "xinput1_3.dll",
            "xinput9_1_0.dll",
            "xinput1_2.dll",
            "xinput1_1.dll",
            ((void*)0)
        };

        for (VAR_4 = 0; VAR_5[VAR_4]; VAR_4++)
        {
            VAR_3.win32.xinput.instance = FUNC_1(VAR_5[VAR_4]);
            if (VAR_3.win32.xinput.instance)
            {
                VAR_3.win32.xinput.XInputGetCapabilities = (XINPUTGETCAPABILITIES_T)
                    FUNC_0(VAR_3.win32.xinput.instance, "XInputGetCapabilities");
                VAR_3.win32.xinput.XInputGetState = (XINPUTGETSTATE_T)
                    FUNC_0(VAR_3.win32.xinput.instance, "XInputGetState");

                break;
            }
        }
    }

    VAR_3.win32.dwmapi.instance = FUNC_1("dwmapi.dll");
    if (VAR_3.win32.dwmapi.instance)
    {
        VAR_3.win32.dwmapi.DwmIsCompositionEnabled = (DWMISCOMPOSITIONENABLED_T)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmIsCompositionEnabled");
        VAR_3.win32.dwmapi.DwmFlush = (DWMFLUSH_T)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmFlush");
    }

    VAR_3.win32.shcore.instance = FUNC_1("shcore.dll");
    if (VAR_3.win32.shcore.instance)
    {
        VAR_3.win32.shcore.SetProcessDpiAwareness = (SETPROCESSDPIAWARENESS_T)
            FUNC_0(VAR_3.win32.shcore.instance, "SetProcessDpiAwareness");
    }

    return VAR_2;
}
