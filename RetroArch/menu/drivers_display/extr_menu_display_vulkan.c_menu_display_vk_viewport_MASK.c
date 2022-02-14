
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float minDepth; float maxDepth; scalar_t__ height; int width; scalar_t__ y; int x; } ;
struct TYPE_10__ {TYPE_2__ vk_vp; TYPE_1__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_11__ {scalar_t__ userdata; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_12__ {scalar_t__ height; int width; scalar_t__ y; int x; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
struct TYPE_8__ {scalar_t__ swapchain_height; } ;



__attribute__((used)) static void FUNC_0(menu_display_ctx_draw_t *VAR_0,
      video_frame_info_t *VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_1->userdata;

   if (!VAR_2 || !VAR_0)
      return;

   VAR_2->vk_vp.x = VAR_0->x;
   VAR_2->vk_vp.y = VAR_2->context->swapchain_height - VAR_0->y - VAR_0->height;
   VAR_2->vk_vp.width = VAR_0->width;
   VAR_2->vk_vp.height = VAR_0->height;
   VAR_2->vk_vp.minDepth = 0.0f;
   VAR_2->vk_vp.maxDepth = 1.0f;
}
