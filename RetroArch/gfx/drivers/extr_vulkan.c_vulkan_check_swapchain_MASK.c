
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* context; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_7__ {int invalid_swapchain; int queue_lock; int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(vk_t *VAR_0)
{
   if (VAR_0->context->invalid_swapchain)
   {



      FUNC_2(VAR_0->context->queue);




      FUNC_3(VAR_0);
      FUNC_4(VAR_0);
      VAR_0->context->invalid_swapchain = 0;

      FUNC_5(VAR_0);
   }
}
