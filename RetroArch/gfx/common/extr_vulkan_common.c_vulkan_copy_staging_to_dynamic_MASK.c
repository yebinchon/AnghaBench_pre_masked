
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vk_t ;
struct vk_texture {scalar_t__ type; int layout; int image; int buffer; int height; int width; } ;
typedef int region ;
typedef int VkCommandBuffer ;
struct TYPE_7__ {int layerCount; int aspectMask; } ;
struct TYPE_6__ {int depth; int height; int width; } ;
struct TYPE_8__ {TYPE_2__ imageSubresource; TYPE_1__ imageExtent; } ;
typedef TYPE_3__ VkBufferImageCopy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ,int,TYPE_3__*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,struct vk_texture*) ;

void FUNC_5(vk_t *VAR_11, VkCommandBuffer VAR_12,
      struct vk_texture *VAR_13,
      struct vk_texture *VAR_14)
{
   VkBufferImageCopy VAR_15;

   FUNC_1(VAR_13->type == VAR_9);
   FUNC_1(VAR_14->type == VAR_10);

   FUNC_4(VAR_11, VAR_14);
   FUNC_3(VAR_11, VAR_12, VAR_13->image,
         VAR_5, VAR_4,
         0, VAR_1,
         VAR_7,
         VAR_8);

   FUNC_0(&VAR_15, 0, sizeof(VAR_15));
   VAR_15.imageExtent.width = VAR_13->width;
   VAR_15.imageExtent.height = VAR_13->height;
   VAR_15.imageExtent.depth = 1;
   VAR_15.imageSubresource.aspectMask = VAR_2;
   VAR_15.imageSubresource.layerCount = 1;

   FUNC_2(VAR_12,
         VAR_14->buffer,
         VAR_13->image, VAR_4,
         1, &VAR_15);

   FUNC_3(VAR_11, VAR_12,
         VAR_13->image,
         VAR_4,
         VAR_3,
         VAR_1,
         VAR_0,
         VAR_8,
         VAR_6);

   VAR_13->layout = VAR_3;
}
