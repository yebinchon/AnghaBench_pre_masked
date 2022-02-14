
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ memory; } ;
struct TYPE_9__ {unsigned int num_swapchain_images; TYPE_4__ default_texture; TYPE_2__* context; TYPE_1__* swapchain; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_8__ {int device; } ;
struct TYPE_7__ {TYPE_4__ texture_optimal; TYPE_4__ texture; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(vk_t *VAR_1)
{
   unsigned VAR_2;

   FUNC_0(VAR_1);

   for (VAR_2 = 0; VAR_2 < VAR_1->num_swapchain_images; VAR_2++)
   {
      if (VAR_1->swapchain[VAR_2].texture.memory != VAR_0)
         FUNC_1(
               VAR_1->context->device, &VAR_1->swapchain[VAR_2].texture);

      if (VAR_1->swapchain[VAR_2].texture_optimal.memory != VAR_0)
         FUNC_1(
               VAR_1->context->device, &VAR_1->swapchain[VAR_2].texture_optimal);
   }

   if (VAR_1->default_texture.memory != VAR_0)
      FUNC_1(VAR_1->context->device, &VAR_1->default_texture);
}
