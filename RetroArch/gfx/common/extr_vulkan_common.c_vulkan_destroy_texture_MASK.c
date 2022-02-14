
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_texture {scalar_t__ image; scalar_t__ memory; scalar_t__ buffer; scalar_t__ view; scalar_t__ mapped; } ;
typedef int VkDevice ;


 int FUNC_0 (struct vk_texture*,int ,int) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(
      VkDevice VAR_0,
      struct vk_texture *VAR_1)
{
   if (VAR_1->mapped)
      FUNC_5(VAR_0, VAR_1->memory);
   if (VAR_1->view)
      FUNC_3(VAR_0, VAR_1->view, ((void*)0));
   if (VAR_1->image)
      FUNC_2(VAR_0, VAR_1->image, ((void*)0));
   if (VAR_1->buffer)
      FUNC_1(VAR_0, VAR_1->buffer, ((void*)0));
   if (VAR_1->memory)
      FUNC_4(VAR_0, VAR_1->memory, ((void*)0));





   FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
