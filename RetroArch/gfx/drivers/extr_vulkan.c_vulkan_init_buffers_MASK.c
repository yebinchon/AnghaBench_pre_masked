
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned int num_swapchain_images; TYPE_4__* context; TYPE_1__* swapchain; } ;
typedef TYPE_5__ vk_t ;
struct TYPE_9__ {int minUniformBufferOffsetAlignment; } ;
struct TYPE_8__ {TYPE_3__ limits; } ;
struct TYPE_10__ {TYPE_2__ gpu_properties; } ;
struct TYPE_7__ {void* ubo; void* vbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(vk_t *VAR_3)
{
   unsigned VAR_4;
   for (VAR_4 = 0; VAR_4 < VAR_3->num_swapchain_images; VAR_4++)
   {
      VAR_3->swapchain[VAR_4].vbo = FUNC_0(
            VAR_2, 16, VAR_1);
      VAR_3->swapchain[VAR_4].ubo = FUNC_0(
            VAR_2,
            VAR_3->context->gpu_properties.limits.minUniformBufferOffsetAlignment,
            VAR_0);
   }
}
