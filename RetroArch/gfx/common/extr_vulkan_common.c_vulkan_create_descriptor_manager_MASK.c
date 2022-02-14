
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_descriptor_manager {unsigned int num_sizes; int head; int set_layout; int sizes; } ;
typedef int manager ;
typedef int VkDevice ;
typedef int VkDescriptorSetLayout ;
typedef int VkDescriptorPoolSize ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int const*,unsigned int) ;
 int FUNC_1 (struct vk_descriptor_manager*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct vk_descriptor_manager*) ;

struct vk_descriptor_manager FUNC_4(
      VkDevice VAR_1,
      const VkDescriptorPoolSize *VAR_2,
      unsigned VAR_3,
      VkDescriptorSetLayout VAR_4)
{
   struct vk_descriptor_manager VAR_5;
   FUNC_1(&VAR_5, 0, sizeof(VAR_5));
   FUNC_2(VAR_3 <= VAR_0);
   FUNC_0(VAR_5.sizes, VAR_2, VAR_3 * sizeof(*VAR_2));
   VAR_5.num_sizes = VAR_3;
   VAR_5.set_layout = VAR_4;

   VAR_5.head = FUNC_3(VAR_1, &VAR_5);
   FUNC_2(VAR_5.head);
   return VAR_5;
}
