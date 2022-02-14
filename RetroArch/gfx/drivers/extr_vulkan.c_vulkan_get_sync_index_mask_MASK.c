
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* context; } ;
typedef TYPE_2__ vk_t ;
typedef int uint32_t ;
struct TYPE_3__ {int num_swapchain_images; } ;



__attribute__((used)) static uint32_t FUNC_0(void *VAR_0)
{
   vk_t *VAR_1 = (vk_t*)VAR_0;
   return (1 << VAR_1->context->num_swapchain_images) - 1;
}
