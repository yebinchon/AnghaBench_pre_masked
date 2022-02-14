
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ egl_ctx_data_t ;


 int FUNC_0 (char*) ;

bool FUNC_1(egl_ctx_data_t *VAR_0)
{
   if (!VAR_0->config)
   {
      FUNC_0("[EGL]: No EGL configurations available.\n");
      return 0;
   }
   return 1;
}
