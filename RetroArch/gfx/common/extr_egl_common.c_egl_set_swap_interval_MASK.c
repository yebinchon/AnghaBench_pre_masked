
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interval; scalar_t__ dpy; } ;
typedef TYPE_1__ egl_ctx_data_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 () ;

void FUNC_5(egl_ctx_data_t *VAR_1, int VAR_2)
{




   VAR_1->interval = VAR_2;

   if (VAR_1->dpy == VAR_0)
      return;
   if (!(FUNC_2()))
      return;

   FUNC_1("[EGL]: eglSwapInterval(%u)\n", VAR_2);
   if (!FUNC_3(VAR_1->dpy, VAR_2))
   {
      FUNC_0("[EGL]: eglSwapInterval() failed.\n");
      FUNC_4();
   }
}
