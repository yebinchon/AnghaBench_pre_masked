
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vulkan_context {int device; int memory_properties; } ;
struct vk_buffer {size_t size; int mapped; int memory; int buffer; } ;
struct TYPE_7__ {int memoryTypeBits; int size; } ;
typedef TYPE_1__ VkMemoryRequirements ;
struct TYPE_8__ {int memoryTypeIndex; int allocationSize; int member_0; } ;
typedef TYPE_2__ VkMemoryAllocateInfo ;
typedef int VkBufferUsageFlags ;
struct TYPE_9__ {size_t size; int sharingMode; int usage; int member_0; } ;
typedef TYPE_3__ VkBufferCreateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int *,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,size_t,int ,int *) ;
 int FUNC_5 (int *,int ,int) ;

struct vk_buffer FUNC_6(
      const struct vulkan_context *VAR_5,
      size_t VAR_6, VkBufferUsageFlags VAR_7)
{
   struct vk_buffer VAR_8;
   VkMemoryRequirements VAR_9;
   VkMemoryAllocateInfo VAR_10 = { VAR_4 };
   VkBufferCreateInfo VAR_11 = { VAR_3 };

   VAR_11.size = VAR_6;
   VAR_11.usage = VAR_7;
   VAR_11.sharingMode = VAR_2;
   FUNC_2(VAR_5->device, &VAR_11, ((void*)0), &VAR_8.buffer);

   FUNC_3(VAR_5->device, VAR_8.buffer, &VAR_9);

   VAR_10.allocationSize = VAR_9.size;
   VAR_10.memoryTypeIndex = FUNC_5(
         &VAR_5->memory_properties,
         VAR_9.memoryTypeBits,
         VAR_1 |
         VAR_0);
   FUNC_0(VAR_5->device, &VAR_10, ((void*)0), &VAR_8.memory);
   FUNC_1(VAR_5->device, VAR_8.buffer, VAR_8.memory, 0);

   VAR_8.size = VAR_6;

   FUNC_4(VAR_5->device,
         VAR_8.memory, 0, VAR_8.size, 0, &VAR_8.mapped);
   return VAR_8;
}
