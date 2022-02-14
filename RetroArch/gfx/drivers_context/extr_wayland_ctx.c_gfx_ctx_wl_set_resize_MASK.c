
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int invalid_swapchain; } ;
struct TYPE_7__ {int need_new_swapchain; int created_new_swapchain; TYPE_1__ context; } ;
struct TYPE_6__ {int buffer_scale; int surface; TYPE_3__ vk; int swap_interval; int win; } ;
typedef TYPE_2__ gfx_ctx_wayland_data_t ;







 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,unsigned int,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(void *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   gfx_ctx_wayland_data_t *VAR_4 = (gfx_ctx_wayland_data_t*)VAR_1;

   switch (VAR_0)
   {
      case 131:
      case 130:
      case 129:



         break;
      case 128:
         break;
      case 132:
      default:
         break;
   }

   FUNC_4(VAR_4->surface, VAR_4->buffer_scale);
   return 1;
}
