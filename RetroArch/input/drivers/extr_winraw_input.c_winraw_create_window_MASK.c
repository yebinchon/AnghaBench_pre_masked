
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WNDPROC ;
struct TYPE_3__ {char* lpszClassName; int lpfnWndProc; int hInstance; int member_0; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int * HWND ;


 int * FUNC_0 (int ,char*,int *,int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static HWND FUNC_6(WNDPROC VAR_2)
{
   HWND VAR_3;
   WNDCLASSA VAR_4 = {0};

   VAR_4.hInstance = FUNC_2(((void*)0));

   if (!VAR_4.hInstance)
   {
      FUNC_3("[WINRAW]: GetModuleHandleA failed with error %lu.\n", FUNC_1());
      return ((void*)0);
   }

   VAR_4.lpfnWndProc = VAR_2;
   VAR_4.lpszClassName = "winraw-input";
   if (!FUNC_4(&VAR_4) && FUNC_1() != VAR_0)
   {
      FUNC_3("[WINRAW]: RegisterClassA failed with error %lu.\n", FUNC_1());
      return ((void*)0);
   }

   VAR_3 = FUNC_0(0, VAR_4.lpszClassName, ((void*)0), 0, 0, 0, 0, 0,
         VAR_1, ((void*)0), ((void*)0), ((void*)0));
   if (!VAR_3)
   {
      FUNC_3("[WINRAW]: CreateWindowExA failed with error %lu.\n", FUNC_1());
      goto error;
   }

   return VAR_3;

error:
   FUNC_5(VAR_4.lpszClassName, ((void*)0));
   return ((void*)0);
}
