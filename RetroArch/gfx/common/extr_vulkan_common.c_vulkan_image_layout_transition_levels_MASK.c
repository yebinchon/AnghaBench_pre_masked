
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
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
 int FUNC_0 (int ,int ,int ,int,int ,int *,int ,int *,int,TYPE_2__*) ;

void FUNC_1(
      VkCommandBuffer VAR_4, VkImage VAR_5, uint32_t VAR_6,
      VkImageLayout VAR_7, VkImageLayout VAR_8,
      VkAccessFlags VAR_9, VkAccessFlags VAR_10,
      VkPipelineStageFlags VAR_11, VkPipelineStageFlags VAR_12)
{
   VkImageMemoryBarrier VAR_13 = { VAR_3 };

   VAR_13.srcAccessMask = VAR_9;
   VAR_13.dstAccessMask = VAR_10;
   VAR_13.oldLayout = VAR_7;
   VAR_13.newLayout = VAR_8;
   VAR_13.srcQueueFamilyIndex = VAR_1;
   VAR_13.dstQueueFamilyIndex = VAR_1;
   VAR_13.image = VAR_5;
   VAR_13.subresourceRange.aspectMask = VAR_0;
   VAR_13.subresourceRange.levelCount = VAR_6;
   VAR_13.subresourceRange.layerCount = VAR_2;

   FUNC_0(VAR_4,
         VAR_11,
         VAR_12,
         0,
         0, ((void*)0),
         0, ((void*)0),
         1, &VAR_13);
}
