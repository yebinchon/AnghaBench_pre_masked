
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ core_hw_context_enable; } ;
typedef TYPE_1__ gfx_ctx_drm_data_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static uint32_t FUNC_3(void *VAR_4)
{
   uint32_t VAR_5 = 0;
   gfx_ctx_drm_data_t *VAR_6 = (gfx_ctx_drm_data_t*)VAR_4;

   FUNC_0(VAR_5, VAR_0);

   if (VAR_6->core_hw_context_enable)
      FUNC_0(VAR_5, VAR_1);

   if (FUNC_1(FUNC_2(), "glcore"))
   {



   }
   else
      FUNC_0(VAR_5, VAR_2);

   return VAR_5;
}
