
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enable; int iface; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
typedef TYPE_2__ vk_t ;
struct retro_hw_render_interface {int dummy; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0,
      const struct retro_hw_render_interface **VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_0;
   *VAR_1 = (const struct retro_hw_render_interface*)&VAR_2->hw.iface;
   return VAR_2->hw.enable;
}
