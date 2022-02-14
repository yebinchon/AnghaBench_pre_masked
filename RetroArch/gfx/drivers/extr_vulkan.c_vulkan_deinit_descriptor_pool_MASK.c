
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int num_swapchain_images; TYPE_2__* swapchain; TYPE_1__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_6__ {int descriptor_manager; } ;
struct TYPE_5__ {int device; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(vk_t *VAR_0)
{
   unsigned VAR_1;
   for (VAR_1 = 0; VAR_1 < VAR_0->num_swapchain_images; VAR_1++)
      FUNC_0(
            VAR_0->context->device,
            &VAR_0->swapchain[VAR_1].descriptor_manager);
}
