
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vk_descriptor_manager {scalar_t__ count; TYPE_1__* current; } ;
typedef int VkDevice ;
typedef int VkDescriptorSet ;
struct TYPE_3__ {int * sets; struct TYPE_3__* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,struct vk_descriptor_manager*) ;

VkDescriptorSet FUNC_2(
      VkDevice VAR_1, struct vk_descriptor_manager *VAR_2)
{
   if (VAR_2->count < VAR_0)
      return VAR_2->current->sets[VAR_2->count++];

   while (VAR_2->current->next)
   {
      VAR_2->current = VAR_2->current->next;
      VAR_2->count = 0;
      return VAR_2->current->sets[VAR_2->count++];
   }

   VAR_2->current->next = FUNC_1(VAR_1, VAR_2);
   FUNC_0(VAR_2->current->next);

   VAR_2->current = VAR_2->current->next;
   VAR_2->count = 0;
   return VAR_2->current->sets[VAR_2->count++];
}
