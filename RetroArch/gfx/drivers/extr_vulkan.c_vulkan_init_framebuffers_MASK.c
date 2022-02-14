
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {unsigned int num_swapchain_images; TYPE_5__* swapchain; TYPE_3__* context; int render_pass; } ;
typedef TYPE_6__ vk_t ;
struct TYPE_14__ {int a; int b; int g; int r; } ;
struct TYPE_13__ {int levelCount; int layerCount; int aspectMask; scalar_t__ baseArrayLayer; scalar_t__ baseMipLevel; } ;
struct TYPE_19__ {scalar_t__ image; TYPE_2__ components; TYPE_1__ subresourceRange; int format; int viewType; int member_0; } ;
typedef TYPE_7__ VkImageViewCreateInfo ;
struct TYPE_20__ {int attachmentCount; int layers; int height; int width; scalar_t__* pAttachments; int renderPass; int member_0; } ;
typedef TYPE_8__ VkFramebufferCreateInfo ;
struct TYPE_16__ {scalar_t__ image; scalar_t__ framebuffer; scalar_t__ view; } ;
struct TYPE_17__ {TYPE_4__ backbuffer; } ;
struct TYPE_15__ {scalar_t__* swapchain_images; int device; int swapchain_height; int swapchain_width; int swapchain_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,TYPE_8__*,int *,scalar_t__*) ;
 int FUNC_1 (int ,TYPE_7__*,int *,scalar_t__*) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_3(
      vk_t *VAR_9)
{
   unsigned VAR_10;

   FUNC_2(VAR_9);

   for (VAR_10 = 0; VAR_10 < VAR_9->num_swapchain_images; VAR_10++)
   {
      VkImageViewCreateInfo VAR_11 =
      { VAR_8 };
      VkFramebufferCreateInfo VAR_12 =
      { VAR_7 };

      VAR_9->swapchain[VAR_10].backbuffer.image = VAR_9->context->swapchain_images[VAR_10];

      if (VAR_9->context->swapchain_images[VAR_10] == VAR_6)
      {
         VAR_9->swapchain[VAR_10].backbuffer.view = VAR_6;
         VAR_9->swapchain[VAR_10].backbuffer.framebuffer = VAR_6;
         continue;
      }


      VAR_11.viewType = VAR_5;
      VAR_11.format = VAR_9->context->swapchain_format;
      VAR_11.image = VAR_9->swapchain[VAR_10].backbuffer.image;
      VAR_11.subresourceRange.baseMipLevel = 0;
      VAR_11.subresourceRange.baseArrayLayer = 0;
      VAR_11.subresourceRange.levelCount = 1;
      VAR_11.subresourceRange.layerCount = 1;
      VAR_11.subresourceRange.aspectMask = VAR_4;
      VAR_11.components.r = VAR_3;
      VAR_11.components.g = VAR_2;
      VAR_11.components.b = VAR_1;
      VAR_11.components.a = VAR_0;

      FUNC_1(VAR_9->context->device,
            &VAR_11, ((void*)0), &VAR_9->swapchain[VAR_10].backbuffer.view);


      VAR_12.renderPass = VAR_9->render_pass;
      VAR_12.attachmentCount = 1;
      VAR_12.pAttachments = &VAR_9->swapchain[VAR_10].backbuffer.view;
      VAR_12.width = VAR_9->context->swapchain_width;
      VAR_12.height = VAR_9->context->swapchain_height;
      VAR_12.layers = 1;

      FUNC_0(VAR_9->context->device,
            &VAR_12, ((void*)0), &VAR_9->swapchain[VAR_10].backbuffer.framebuffer);
   }
}
