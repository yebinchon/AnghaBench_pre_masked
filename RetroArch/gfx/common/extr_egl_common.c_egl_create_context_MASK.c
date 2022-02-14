
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hw_ctx; int * ctx; int config; int dpy; scalar_t__ use_hw_ctx; } ;
typedef TYPE_1__ egl_ctx_data_t ;
typedef int EGLint ;
typedef int * EGLContext ;


 int * VAR_0 ;
 int FUNC_0 (char*,void*) ;
 void* FUNC_1 (int ,int ,int *,int const*) ;

bool FUNC_2(egl_ctx_data_t *VAR_1, const EGLint *VAR_2)
{
   EGLContext VAR_3 = FUNC_1(VAR_1->dpy, VAR_1->config, VAR_0,
         VAR_2);

   if (VAR_3 == VAR_0)
      return 0;

   VAR_1->ctx = VAR_3;
   VAR_1->hw_ctx = ((void*)0);

   if (VAR_1->use_hw_ctx)
   {
      VAR_1->hw_ctx = FUNC_1(VAR_1->dpy, VAR_1->config, VAR_1->ctx,
            VAR_2);
      FUNC_0("[EGL]: Created shared context: %p.\n", (void*)VAR_1->hw_ctx);

      if (VAR_1->hw_ctx == VAR_0)
         return 0;
   }

   return 1;
}
