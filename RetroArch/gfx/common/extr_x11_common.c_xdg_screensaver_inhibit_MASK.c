
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmd ;
typedef scalar_t__ Window ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(Window VAR_1)
{
   int VAR_2;
   char VAR_3[64];

   VAR_3[0] = '\0';

   FUNC_0("[X11]: Suspending screensaver (X11, xdg-screensaver).\n");

   FUNC_3(VAR_3, sizeof(VAR_3), "xdg-screensaver suspend 0x%x", (int)VAR_1);

   VAR_2 = FUNC_4(VAR_3);
   if (VAR_2 == -1)
   {
      VAR_0 = 0;
      FUNC_1("Failed to launch xdg-screensaver.\n");
   }
   else if (FUNC_2(VAR_2))
   {
      VAR_0 = 0;
      FUNC_1("Could not suspend screen saver.\n");
   }
}
