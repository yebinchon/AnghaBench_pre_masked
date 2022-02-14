
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usUsagePage; int usUsage; scalar_t__ hwndTarget; int dwFlags; } ;
typedef TYPE_1__ RAWINPUTDEVICE ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static bool FUNC_3(HWND VAR_1)
{
   RAWINPUTDEVICE VAR_2;
   BOOL VAR_3;

   VAR_2.dwFlags = VAR_1 ? 0 : VAR_0;
   VAR_2.hwndTarget = VAR_1;
   VAR_2.usUsagePage = 0x01;
   VAR_2.usUsage = 0x06;

   VAR_3 = FUNC_2(&VAR_2, 1, sizeof(RAWINPUTDEVICE));

   if (!VAR_3)
   {
      FUNC_1("[WINRAW]: RegisterRawInputDevices failed with error %lu.\n", FUNC_0());
      return 0;
   }

   return 1;
}
