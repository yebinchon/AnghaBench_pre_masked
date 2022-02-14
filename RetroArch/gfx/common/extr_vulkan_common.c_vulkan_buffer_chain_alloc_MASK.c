
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vulkan_context {int dummy; } ;
struct vk_buffer_range {int dummy; } ;
struct vk_buffer_chain {size_t block_size; TYPE_1__* current; int usage; scalar_t__ offset; TYPE_1__* head; } ;
struct TYPE_2__ {void* next; } ;


 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (struct vulkan_context const*,size_t,int ) ;
 int FUNC_2 (struct vk_buffer_chain*) ;
 scalar_t__ FUNC_3 (struct vk_buffer_chain*,size_t,struct vk_buffer_range*) ;

bool FUNC_4(const struct vulkan_context *VAR_0,
      struct vk_buffer_chain *VAR_1,
      size_t VAR_2, struct vk_buffer_range *VAR_3)
{
   if (!VAR_1->head)
   {
      VAR_1->head = FUNC_1(VAR_0,
            VAR_1->block_size, VAR_1->usage);
      if (!VAR_1->head)
         return 0;

      VAR_1->current = VAR_1->head;
      VAR_1->offset = 0;
   }

   if (FUNC_3(VAR_1, VAR_2, VAR_3))
      return 1;



   while (VAR_1->current->next)
   {
      FUNC_2(VAR_1);
      if (FUNC_3(VAR_1, VAR_2, VAR_3))
         return 1;
   }




   if (VAR_2 < VAR_1->block_size)
      VAR_2 = VAR_1->block_size;

   VAR_1->current->next = FUNC_1(
         VAR_0, VAR_2, VAR_1->usage);
   if (!VAR_1->current->next)
      return 0;

   FUNC_2(VAR_1);

   FUNC_0(FUNC_3(VAR_1, VAR_2, VAR_3));
   return 1;
}
