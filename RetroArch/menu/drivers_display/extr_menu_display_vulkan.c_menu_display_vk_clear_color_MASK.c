
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {int cmd; TYPE_5__* context; } ;
typedef TYPE_6__ vk_t ;
struct TYPE_22__ {scalar_t__ userdata; } ;
typedef TYPE_7__ video_frame_info_t ;
typedef int rect ;
struct TYPE_23__ {int a; int b; int g; int r; } ;
typedef TYPE_8__ menu_display_ctx_clearcolor_t ;
typedef int attachment ;
struct TYPE_18__ {int height; int width; } ;
struct TYPE_19__ {TYPE_3__ extent; } ;
struct TYPE_16__ {int * float32; } ;
struct TYPE_17__ {TYPE_1__ color; } ;
struct TYPE_24__ {int layerCount; TYPE_4__ rect; TYPE_2__ clearValue; int aspectMask; } ;
typedef TYPE_9__ VkClearRect ;
typedef TYPE_9__ VkClearAttachment ;
struct TYPE_20__ {int swapchain_height; int swapchain_width; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*,int ,int) ;
 int FUNC_1 (int ,int,TYPE_9__*,int,TYPE_9__*) ;

__attribute__((used)) static void FUNC_2(
      menu_display_ctx_clearcolor_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   VkClearRect VAR_3;
   VkClearAttachment VAR_4;
   vk_t *VAR_5 = (vk_t*)VAR_2->userdata;
   if (!VAR_5 || !VAR_1)
      return;

   FUNC_0(&VAR_4, 0, sizeof(VAR_4));
   FUNC_0(&VAR_3, 0, sizeof(VAR_3));

   VAR_4.aspectMask = VAR_0;
   VAR_4.clearValue.color.float32[0] = VAR_1->r;
   VAR_4.clearValue.color.float32[1] = VAR_1->g;
   VAR_4.clearValue.color.float32[2] = VAR_1->b;
   VAR_4.clearValue.color.float32[3] = VAR_1->a;

   VAR_3.rect.extent.width = VAR_5->context->swapchain_width;
   VAR_3.rect.extent.height = VAR_5->context->swapchain_height;
   VAR_3.layerCount = 1;

   FUNC_1(VAR_5->cmd, 1, &VAR_4, 1, &VAR_3);
}
