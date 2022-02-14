
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* RUN_APP_FN_T ) (void const*,int *) ;
typedef int EGL_DISPMANX_WINDOW_T ;
typedef int EGLNativeWindowType ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(const char *VAR_0, RUN_APP_FN_T VAR_1, const void *VAR_2, size_t VAR_3)
{
   EGL_DISPMANX_WINDOW_T VAR_4;
   (void) VAR_3;

   FUNC_2("Initialsing BCM HOST");
   FUNC_0();

   FUNC_2("Starting '%s'", VAR_0);
   if (FUNC_1(&VAR_4) != 0)
      return -1;

   return VAR_1(VAR_2, (EGLNativeWindowType *) &VAR_4);
}
