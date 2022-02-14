
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int set_layout; } ;
struct TYPE_11__ {unsigned int num_swapchain_images; TYPE_3__ pipelines; TYPE_2__* context; TYPE_1__* swapchain; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_12__ {int const member_1; int member_0; } ;
typedef TYPE_5__ VkDescriptorPoolSize ;
struct TYPE_9__ {int device; } ;
struct TYPE_8__ {int descriptor_manager; } ;





 int FUNC_0 (int ,TYPE_5__ const*,int,int ) ;

__attribute__((used)) static void FUNC_1(vk_t *VAR_0)
{
   unsigned VAR_1;
   static const VkDescriptorPoolSize VAR_2[2] = {
      { 129, 128 },
      { 130, 128 },
   };

   for (VAR_1 = 0; VAR_1 < VAR_0->num_swapchain_images; VAR_1++)
   {
      VAR_0->swapchain[VAR_1].descriptor_manager =
         FUNC_0(
               VAR_0->context->device,
               VAR_2, 2, VAR_0->pipelines.set_layout);
   }
}
