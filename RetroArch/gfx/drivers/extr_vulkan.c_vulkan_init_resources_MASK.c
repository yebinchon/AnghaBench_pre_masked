
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* context; int num_swapchain_images; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_10__ {int num_swapchain_images; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(vk_t *VAR_0)
{
   if (!VAR_0->context)
      return;

   VAR_0->num_swapchain_images = VAR_0->context->num_swapchain_images;

   FUNC_3(VAR_0);
   FUNC_4(VAR_0);
   FUNC_2(VAR_0);
   FUNC_5(VAR_0);
   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
}
