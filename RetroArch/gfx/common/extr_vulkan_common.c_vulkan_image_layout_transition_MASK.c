
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vk_t ;
typedef int VkPipelineStageFlags ;
struct TYPE_4__ {int layerCount; int levelCount; int aspectMask; } ;
struct TYPE_5__ {TYPE_1__ subresourceRange; int image; void* dstQueueFamilyIndex; void* srcQueueFamilyIndex; void* newLayout; void* oldLayout; void* dstAccessMask; void* srcAccessMask; int member_0; } ;
typedef TYPE_2__ VkImageMemoryBarrier ;
typedef void* VkImageLayout ;
typedef int VkImage ;
typedef int VkCommandBuffer ;
typedef void* VkAccessFlags ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int ,int *,int,TYPE_2__*) ;

void FUNC_1(
      vk_t *VAR_5,
      VkCommandBuffer VAR_6, VkImage VAR_7,
      VkImageLayout VAR_8,
      VkImageLayout VAR_9,
      VkAccessFlags VAR_10,
      VkAccessFlags VAR_11,
      VkPipelineStageFlags VAR_12,
      VkPipelineStageFlags VAR_13)
{
   VkImageMemoryBarrier VAR_14 =
   { VAR_4 };

   VAR_14.srcAccessMask = VAR_10;
   VAR_14.dstAccessMask = VAR_11;
   VAR_14.oldLayout = VAR_8;
   VAR_14.newLayout = VAR_9;
   VAR_14.srcQueueFamilyIndex = VAR_1;
   VAR_14.dstQueueFamilyIndex = VAR_1;
   VAR_14.image = VAR_7;
   VAR_14.subresourceRange.aspectMask = VAR_0;
   VAR_14.subresourceRange.levelCount = VAR_3;
   VAR_14.subresourceRange.layerCount = VAR_2;

   FUNC_0(VAR_6,
         VAR_12,
         VAR_13,
         0,
         0, ((void*)0),
         0, ((void*)0),
         1, &VAR_14);
}
