
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_buffer {int buffer; int memory; } ;
typedef int VkDevice ;


 int FUNC_0 (struct vk_buffer*,int ,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(
      VkDevice VAR_0,
      struct vk_buffer *VAR_1)
{
   FUNC_3(VAR_0, VAR_1->memory);
   FUNC_2(VAR_0, VAR_1->memory, ((void*)0));

   FUNC_1(VAR_0, VAR_1->buffer, ((void*)0));

   FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
