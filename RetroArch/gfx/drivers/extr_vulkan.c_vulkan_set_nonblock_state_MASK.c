
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ctx_data; TYPE_2__* ctx_driver; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_8__ {int video_swap_interval; } ;
struct TYPE_10__ {scalar_t__ video_adaptive_vsync; } ;
struct TYPE_12__ {TYPE_1__ uints; TYPE_3__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_9__ {int (* swap_interval ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, bool VAR_2)
{
   int VAR_3 = 0;
   vk_t *VAR_4 = (vk_t*)VAR_1;
   settings_t *VAR_5 = FUNC_1();
   bool VAR_6 = FUNC_3(
         VAR_0) && VAR_5->bools.video_adaptive_vsync;

   if (!VAR_4)
      return;

   FUNC_0("[Vulkan]: VSync => %s\n", VAR_2 ? "off" : "on");

   if (!VAR_2)
      VAR_3 = VAR_5->uints.video_swap_interval;

   if (VAR_4->ctx_driver->swap_interval)
   {
      if (VAR_6 && VAR_3 == 1)
         VAR_3 = -1;
      VAR_4->ctx_driver->swap_interval(VAR_4->ctx_data, VAR_3);
   }



   FUNC_4(VAR_4);
}
