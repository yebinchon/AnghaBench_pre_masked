
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned int num_swapchain_images; int render_pass; TYPE_3__* context; TYPE_2__* swapchain; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_8__ {int device; } ;
struct TYPE_6__ {scalar_t__ view; scalar_t__ framebuffer; } ;
struct TYPE_7__ {TYPE_1__ backbuffer; } ;


 int FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(vk_t *VAR_0)
{
   unsigned VAR_1;
   for (VAR_1 = 0; VAR_1 < VAR_0->num_swapchain_images; VAR_1++)
   {
      if (VAR_0->swapchain[VAR_1].backbuffer.framebuffer)
      {
         FUNC_0(VAR_0->context->device,
               VAR_0->swapchain[VAR_1].backbuffer.framebuffer, ((void*)0));
      }

      if (VAR_0->swapchain[VAR_1].backbuffer.view)
      {
         FUNC_1(VAR_0->context->device,
               VAR_0->swapchain[VAR_1].backbuffer.view, ((void*)0));
      }
   }

   FUNC_2(VAR_0->context->device, VAR_0->render_pass, ((void*)0));
}
