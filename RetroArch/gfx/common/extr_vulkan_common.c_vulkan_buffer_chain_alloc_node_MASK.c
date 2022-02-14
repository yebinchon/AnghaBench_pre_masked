
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vulkan_context {int dummy; } ;
struct vk_buffer_node {int buffer; } ;
typedef int VkBufferUsageFlags ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct vulkan_context const*,size_t,int ) ;

__attribute__((used)) static struct vk_buffer_node *FUNC_2(
      const struct vulkan_context *VAR_0,
      size_t VAR_1, VkBufferUsageFlags VAR_2)
{
   struct vk_buffer_node *VAR_3 = (struct vk_buffer_node*)
      FUNC_0(1, sizeof(*VAR_3));
   if (!VAR_3)
      return ((void*)0);

   VAR_3->buffer = FUNC_1(
         VAR_0, VAR_1, VAR_2);
   return VAR_3;
}
