
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_buffer_chain {int * current; int * head; int usage; scalar_t__ offset; void* alignment; void* block_size; } ;
typedef void* VkDeviceSize ;
typedef int VkBufferUsageFlags ;



struct vk_buffer_chain FUNC_0(
      VkDeviceSize VAR_0,
      VkDeviceSize VAR_1,
      VkBufferUsageFlags VAR_2)
{
   struct vk_buffer_chain VAR_3;

   VAR_3.block_size = VAR_0;
   VAR_3.alignment = VAR_1;
   VAR_3.offset = 0;
   VAR_3.usage = VAR_2;
   VAR_3.head = ((void*)0);
   VAR_3.current = ((void*)0);

   return VAR_3;
}
