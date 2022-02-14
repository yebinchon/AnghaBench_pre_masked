
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ctx_data; TYPE_1__* ctx_driver; } ;
typedef TYPE_3__ vg_t ;
struct TYPE_7__ {scalar_t__ video_adaptive_vsync; } ;
struct TYPE_9__ {TYPE_2__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_6__ {int (* swap_interval ) (int ,int) ;} ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, bool VAR_2)
{
   vg_t *VAR_3 = (vg_t*)VAR_1;
   int VAR_4 = VAR_2 ? 0 : 1;

   if (VAR_3->ctx_driver && VAR_3->ctx_driver->swap_interval)
   {
      settings_t *VAR_5 = FUNC_0();
      bool VAR_6 = FUNC_2(
            VAR_0) && VAR_5->bools.video_adaptive_vsync;
      if (VAR_6 && VAR_4 == 1)
         VAR_4 = -1;
      VAR_3->ctx_driver->swap_interval(VAR_3->ctx_data, VAR_4);
   }
}
