
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_buffer_node {int buffer; struct vk_buffer_node* next; } ;
struct vk_buffer_chain {struct vk_buffer_node* head; } ;
typedef int VkDevice ;


 int FUNC_0 (struct vk_buffer_node*) ;
 int FUNC_1 (struct vk_buffer_chain*,int ,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(
      VkDevice VAR_0,
      struct vk_buffer_chain *VAR_1)
{
   struct vk_buffer_node *VAR_2 = VAR_1->head;
   while (VAR_2)
   {
      struct vk_buffer_node *VAR_3 = VAR_2->next;
      FUNC_2(VAR_0, &VAR_2->buffer);

      FUNC_0(VAR_2);
      VAR_2 = VAR_3;
   }
   FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
