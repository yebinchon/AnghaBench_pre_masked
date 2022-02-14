
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int num_swapchain_images; TYPE_1__* swapchain; TYPE_2__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {int cmd_pool; scalar_t__ cmd; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(vk_t *VAR_0)
{
   unsigned VAR_1;
   for (VAR_1 = 0; VAR_1 < VAR_0->num_swapchain_images; VAR_1++)
   {
      if (VAR_0->swapchain[VAR_1].cmd)
         FUNC_1(VAR_0->context->device,
               VAR_0->swapchain[VAR_1].cmd_pool, 1, &VAR_0->swapchain[VAR_1].cmd);

      FUNC_0(VAR_0->context->device,
            VAR_0->swapchain[VAR_1].cmd_pool, ((void*)0));
   }
}
