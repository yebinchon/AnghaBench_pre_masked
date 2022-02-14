
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
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static bool FUNC_3(HWND VAR_2, bool VAR_3)
{
   RAWINPUTDEVICE VAR_4;
   BOOL VAR_5;

   if (VAR_2)
      VAR_4.dwFlags = VAR_3 ? VAR_0 : 0;
   else
      VAR_4.dwFlags = VAR_1;

   VAR_4.hwndTarget = VAR_2;
   VAR_4.usUsagePage = 0x01;
   VAR_4.usUsage = 0x02;

   VAR_5 = FUNC_2(&VAR_4, 1, sizeof(RAWINPUTDEVICE));

   if (!VAR_5)
   {
      FUNC_1("[WINRAW]: RegisterRawInputDevice failed with error %lu.\n", FUNC_0());
      return 0;
   }

   return 1;
}
