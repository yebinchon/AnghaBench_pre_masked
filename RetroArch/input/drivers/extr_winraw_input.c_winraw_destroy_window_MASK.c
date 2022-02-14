
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,int *) ;

__attribute__((used)) static void FUNC_4(HWND VAR_0)
{
   BOOL VAR_1;

   if (!VAR_0)
      return;

   VAR_1 = FUNC_0(VAR_0);

   if (!VAR_1)
   {
      FUNC_2("[WINRAW]: DestroyWindow failed with error %lu.\n", FUNC_1());
   }

   VAR_1 = FUNC_3("winraw-input", ((void*)0));

   if (!VAR_1)
   {
      FUNC_2("[WINRAW]: UnregisterClassA failed with error %lu.\n", FUNC_1());
   }
}
