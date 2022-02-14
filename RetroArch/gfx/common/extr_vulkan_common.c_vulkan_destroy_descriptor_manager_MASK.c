
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_descriptor_pool {int pool; int sets; struct vk_descriptor_pool* next; } ;
struct vk_descriptor_manager {struct vk_descriptor_pool* head; } ;
typedef int VkDevice ;


 int VAR_0 ;
 int FUNC_0 (struct vk_descriptor_pool*) ;
 int FUNC_1 (struct vk_descriptor_manager*,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

void FUNC_4(
      VkDevice VAR_1,
      struct vk_descriptor_manager *VAR_2)
{
   struct vk_descriptor_pool *VAR_3 = VAR_2->head;

   while (VAR_3)
   {
      struct vk_descriptor_pool *VAR_4 = VAR_3->next;

      FUNC_3(VAR_1, VAR_3->pool,
            VAR_0, VAR_3->sets);
      FUNC_2(VAR_1, VAR_3->pool, ((void*)0));

      FUNC_0(VAR_3);
      VAR_3 = VAR_4;
   }

   FUNC_1(VAR_2, 0, sizeof(*VAR_2));
}
