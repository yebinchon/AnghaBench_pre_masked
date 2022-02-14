
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interval; } ;
typedef TYPE_1__ gfx_ctx_drm_data_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
   gfx_ctx_drm_data_t *VAR_2 = (gfx_ctx_drm_data_t*)VAR_0;
   VAR_2->interval = VAR_1;

   if (VAR_1 > 1)
      FUNC_0("[KMS]: Swap intervals > 1 currently not supported. Will use swap interval of 1.\n");
}
