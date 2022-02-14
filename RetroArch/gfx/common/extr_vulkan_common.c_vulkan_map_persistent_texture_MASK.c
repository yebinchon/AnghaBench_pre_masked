
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_texture {int mapped; int size; int offset; int memory; } ;
typedef int VkDevice ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *) ;

void FUNC_1(
      VkDevice VAR_0,
      struct vk_texture *VAR_1)
{
   FUNC_0(VAR_0, VAR_1->memory, VAR_1->offset,
         VAR_1->size, 0, &VAR_1->mapped);
}
