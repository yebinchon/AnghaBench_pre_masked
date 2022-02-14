
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_25__ {int height; int width; } ;
struct TYPE_23__ {struct vk_texture* staging; } ;
struct TYPE_28__ {int cmd; TYPE_8__* chain; TYPE_6__ vp; TYPE_5__* context; TYPE_4__ readback; } ;
typedef TYPE_9__ vk_t ;
struct vk_texture {scalar_t__ memory; int buffer; } ;
struct video_viewport {int height; int width; int y; int x; } ;
typedef int region ;
struct TYPE_18__ {int dstAccessMask; int srcAccessMask; int member_0; } ;
typedef TYPE_10__ VkMemoryBarrier ;
struct TYPE_22__ {int depth; int height; int width; } ;
struct TYPE_21__ {int y; int x; } ;
struct TYPE_20__ {int layerCount; int aspectMask; } ;
struct TYPE_19__ {TYPE_3__ imageExtent; TYPE_2__ imageOffset; TYPE_1__ imageSubresource; } ;
typedef TYPE_11__ VkBufferImageCopy ;
struct TYPE_26__ {int image; } ;
struct TYPE_27__ {TYPE_7__ backbuffer; } ;
struct TYPE_24__ {size_t current_swapchain_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_11__*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int,TYPE_11__*) ;
 int FUNC_2 (int ,int ,int ,int ,int,TYPE_10__*,int ,int *,int ,int *) ;
 struct vk_texture FUNC_3 (TYPE_9__*,struct vk_texture*,int ,int ,int ,int *,int *,int ) ;
 int FUNC_4 (TYPE_9__*,struct video_viewport*) ;

__attribute__((used)) static void FUNC_5(vk_t *VAR_10)
{
   VkBufferImageCopy VAR_11;
   struct vk_texture *VAR_12;
   struct video_viewport VAR_13;
   VkMemoryBarrier VAR_14 = { VAR_8 };

   FUNC_4(VAR_10, &VAR_13);
   FUNC_0(&VAR_11, 0, sizeof(VAR_11));
   VAR_11.imageSubresource.aspectMask = VAR_3;
   VAR_11.imageSubresource.layerCount = 1;
   VAR_11.imageOffset.x = VAR_13.x;
   VAR_11.imageOffset.y = VAR_13.y;
   VAR_11.imageExtent.width = VAR_13.width;
   VAR_11.imageExtent.height = VAR_13.height;
   VAR_11.imageExtent.depth = 1;

   VAR_12 = &VAR_10->readback.staging[VAR_10->context->current_swapchain_index];
   *VAR_12 = FUNC_3(VAR_10,
         VAR_12->memory != VAR_5 ? VAR_12 : ((void*)0),
         VAR_10->vp.width, VAR_10->vp.height,
         VAR_2,
         ((void*)0), ((void*)0), VAR_9);

   FUNC_1(VAR_10->cmd, VAR_10->chain->backbuffer.image,
         VAR_4,
         VAR_12->buffer,
         1, &VAR_11);


   VAR_14.srcAccessMask = VAR_1;
   VAR_14.dstAccessMask = VAR_0;
   FUNC_2(VAR_10->cmd,
         VAR_7,
         VAR_6, 0,
         1, &VAR_14, 0, ((void*)0), 0, ((void*)0));
}
