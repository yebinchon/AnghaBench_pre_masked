
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; int surf; int dpy; int config; } ;
typedef TYPE_1__ egl_ctx_data_t ;
typedef int NativeWindowType ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,void*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;

bool FUNC_4(egl_ctx_data_t *VAR_4, void *VAR_5)
{
   EGLint VAR_6[] = {
    VAR_3, VAR_0,
    VAR_1,
   };

   VAR_4->surf = FUNC_1(VAR_4->dpy, VAR_4->config, (NativeWindowType)VAR_5, VAR_6);

   if (VAR_4->surf == VAR_2)
      return 0;


   if (!FUNC_3(VAR_4->dpy, VAR_4->surf, VAR_4->surf, VAR_4->ctx))
      return 0;

   FUNC_0("[EGL]: Current context: %p.\n", (void*)FUNC_2());

   return 1;
}
