
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vk_descriptor_pool {int * sets; int pool; } ;
struct vk_descriptor_manager {int set_layout; int sizes; int num_sizes; } ;
typedef int VkDevice ;
struct TYPE_5__ {int descriptorSetCount; int * pSetLayouts; int descriptorPool; int member_0; } ;
typedef TYPE_1__ VkDescriptorSetAllocateInfo ;
struct TYPE_6__ {unsigned int maxSets; int flags; int pPoolSizes; int poolSizeCount; int member_0; } ;
typedef TYPE_2__ VkDescriptorPoolCreateInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (int ,TYPE_2__*,int *,int *) ;

__attribute__((used)) static struct vk_descriptor_pool *FUNC_3(
      VkDevice VAR_4,
      const struct vk_descriptor_manager *VAR_5)
{
   unsigned VAR_6;
   VkDescriptorPoolCreateInfo VAR_7 = {
      VAR_1 };
   VkDescriptorSetAllocateInfo VAR_8 = {
      VAR_2 };

   struct vk_descriptor_pool *VAR_9 =
      (struct vk_descriptor_pool*)FUNC_0(1, sizeof(*VAR_9));
   if (!VAR_9)
      return ((void*)0);

   VAR_7.maxSets = VAR_3;
   VAR_7.poolSizeCount = VAR_5->num_sizes;
   VAR_7.pPoolSizes = VAR_5->sizes;
   VAR_7.flags = VAR_0;

   FUNC_2(VAR_4, &VAR_7, ((void*)0), &VAR_9->pool);


   VAR_8.descriptorPool = VAR_9->pool;
   VAR_8.descriptorSetCount = 1;
   VAR_8.pSetLayouts = &VAR_5->set_layout;

   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
      FUNC_1(VAR_4, &VAR_8, &VAR_9->sets[VAR_6]);

   return VAR_9;
}
