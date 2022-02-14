
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vulkan_filter_chain_t ;
struct TYPE_9__ {int scaler_rgb; int scaler_bgr; } ;
struct TYPE_11__ {TYPE_1__ readback; scalar_t__ filter_chain; TYPE_2__* context; } ;
typedef TYPE_3__ vk_t ;
struct TYPE_10__ {int queue_lock; int queue; scalar_t__ device; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12(void *VAR_0)
{
   vk_t *VAR_1 = (vk_t*)VAR_0;
   if (!VAR_1)
      return;

   if (VAR_1->context && VAR_1->context->device)
   {



      FUNC_6(VAR_1->context->queue);



      FUNC_8(VAR_1);


      FUNC_7(VAR_1);

      FUNC_0();

      FUNC_9(VAR_1);




      if (VAR_1->filter_chain)
         FUNC_10((vulkan_filter_chain_t*)VAR_1->filter_chain);

      FUNC_5();
   }

   FUNC_2(&VAR_1->readback.scaler_bgr);
   FUNC_2(&VAR_1->readback.scaler_rgb);
   FUNC_1(VAR_1);
}
