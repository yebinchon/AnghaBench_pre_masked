
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* instance; scalar_t__ DwmFlush; scalar_t__ DwmIsCompositionEnabled; } ;
struct TYPE_7__ {void* instance; scalar_t__ ChangeWindowMessageFilterEx; scalar_t__ SetProcessDPIAware; } ;
struct TYPE_6__ {scalar_t__ timeGetTime; scalar_t__ joyGetPosEx; scalar_t__ joyGetPos; scalar_t__ joyGetDevCaps; void* instance; } ;
struct TYPE_9__ {TYPE_3__ dwmapi; TYPE_2__ user32; TYPE_1__ winmm; } ;
struct TYPE_10__ {TYPE_4__ win32; } ;
typedef scalar_t__ TIMEGETTIME_T ;
typedef scalar_t__ SETPROCESSDPIAWARE_T ;
typedef scalar_t__ JOYGETPOS_T ;
typedef scalar_t__ JOYGETPOSEX_T ;
typedef scalar_t__ JOYGETDEVCAPS_T ;
typedef int GLboolean ;
typedef scalar_t__ DWMISCOMPOSITIONENABLED_T ;
typedef scalar_t__ DWMFLUSH_T ;
typedef scalar_t__ CHANGEWINDOWMESSAGEFILTEREX_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,char*) ;
 void* FUNC_1 (char*) ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static GLboolean FUNC_3(void)
{
    VAR_3.win32.winmm.instance = FUNC_1(L"winmm.dll");
    if (!VAR_3.win32.winmm.instance)
    {
        FUNC_2(VAR_0,
                        "Win32: Failed to load winmm.dll");
        return VAR_1;
    }

    VAR_3.win32.winmm.joyGetDevCaps = (JOYGETDEVCAPS_T)
        FUNC_0(VAR_3.win32.winmm.instance, "joyGetDevCapsW");
    VAR_3.win32.winmm.joyGetPos = (JOYGETPOS_T)
        FUNC_0(VAR_3.win32.winmm.instance, "joyGetPos");
    VAR_3.win32.winmm.joyGetPosEx = (JOYGETPOSEX_T)
        FUNC_0(VAR_3.win32.winmm.instance, "joyGetPosEx");
    VAR_3.win32.winmm.timeGetTime = (TIMEGETTIME_T)
        FUNC_0(VAR_3.win32.winmm.instance, "timeGetTime");

    if (!VAR_3.win32.winmm.joyGetDevCaps ||
        !VAR_3.win32.winmm.joyGetPos ||
        !VAR_3.win32.winmm.joyGetPosEx ||
        !VAR_3.win32.winmm.timeGetTime)
    {
        FUNC_2(VAR_0,
                        "Win32: Failed to load winmm functions");
        return VAR_1;
    }

    VAR_3.win32.user32.instance = FUNC_1(L"user32.dll");
    if (VAR_3.win32.user32.instance)
    {
        VAR_3.win32.user32.SetProcessDPIAware = (SETPROCESSDPIAWARE_T)
            FUNC_0(VAR_3.win32.user32.instance, "SetProcessDPIAware");
        VAR_3.win32.user32.ChangeWindowMessageFilterEx = (CHANGEWINDOWMESSAGEFILTEREX_T)
            FUNC_0(VAR_3.win32.user32.instance, "ChangeWindowMessageFilterEx");
    }

    VAR_3.win32.dwmapi.instance = FUNC_1(L"dwmapi.dll");
    if (VAR_3.win32.dwmapi.instance)
    {
        VAR_3.win32.dwmapi.DwmIsCompositionEnabled = (DWMISCOMPOSITIONENABLED_T)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmIsCompositionEnabled");
        VAR_3.win32.dwmapi.DwmFlush = (DWMFLUSH_T)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmFlush");
    }

    return VAR_2;
}
