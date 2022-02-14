
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int VkPipelineStageFlags ;
struct TYPE_4__ {int layerCount; int levelCount; int aspectMask; } ;
struct TYPE_5__ {TYPE_1__ subresourceRange; int image; void* dstQueueFamilyIndex; void* srcQueueFamilyIndex; void* newLayout; void* oldLayout; scalar_t__ dstAccessMask; scalar_t__ srcAccessMask; int member_0; } ;
typedef TYPE_2__ VkImageMemoryBarrier ;
typedef void* VkImageLayout ;
typedef int VkImage ;
typedef int VkCommandBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int *,int ,int *,int,TYPE_2__*) ;

void FUNC_1(VkCommandBuffer VAR_4,
      VkImage VAR_5, VkImageLayout VAR_6,
      VkPipelineStageFlags VAR_7,
      VkPipelineStageFlags VAR_8,
      uint32_t VAR_9,
      uint32_t VAR_10)
{
   VkImageMemoryBarrier VAR_11 =
   { VAR_3 };

   VAR_11.srcAccessMask = 0;
   VAR_11.dstAccessMask = 0;
   VAR_11.oldLayout = VAR_6;
   VAR_11.newLayout = VAR_6;
   VAR_11.srcQueueFamilyIndex = VAR_9;
   VAR_11.dstQueueFamilyIndex = VAR_10;
   VAR_11.image = VAR_5;
   VAR_11.subresourceRange.aspectMask = VAR_0;
   VAR_11.subresourceRange.levelCount = VAR_2;
   VAR_11.subresourceRange.layerCount = VAR_1;

   FUNC_0(VAR_4, VAR_7, VAR_8,
         0, 0, ((void*)0), 0, ((void*)0), 1, &VAR_11);
}
