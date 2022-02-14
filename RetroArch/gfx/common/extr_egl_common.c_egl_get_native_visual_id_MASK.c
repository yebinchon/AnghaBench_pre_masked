
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; int dpy; } ;
typedef TYPE_1__ egl_ctx_data_t ;
typedef int EGLint ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int *) ;

bool FUNC_2(egl_ctx_data_t *VAR_1, EGLint *VAR_2)
{
   if (!FUNC_1(VAR_1->dpy, VAR_1->config,
         VAR_0, VAR_2))
   {
      FUNC_0("[EGL]: egl_get_native_visual_id failed.\n");
      return 0;
   }

   return 1;
}
