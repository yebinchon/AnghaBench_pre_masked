
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int core_hw_context_enable; } ;
typedef TYPE_1__ gfx_ctx_wayland_data_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1, uint32_t VAR_2)
{
   gfx_ctx_wayland_data_t *VAR_3 = (gfx_ctx_wayland_data_t*)VAR_1;
   if (FUNC_0(VAR_2, VAR_0))
      VAR_3->core_hw_context_enable = 1;
}
