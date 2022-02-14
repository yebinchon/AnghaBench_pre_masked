
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ video_adaptive_vsync; } ;
struct TYPE_8__ {int video_swap_interval; } ;
struct TYPE_11__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_12__ {int ctx_data; TYPE_3__* ctx_driver; } ;
typedef TYPE_5__ gl_t ;
struct TYPE_10__ {int (* swap_interval ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, bool VAR_2)
{
   int VAR_3 = 0;
   gl_t *VAR_4 = (gl_t*)VAR_1;
   settings_t *VAR_5 = FUNC_1();

   if (!VAR_4)
      return;

   FUNC_0("[GL]: VSync => %s\n", VAR_2 ? "off" : "on");

   FUNC_2(VAR_4, 0);

   if (!VAR_2)
      VAR_3 = VAR_5->uints.video_swap_interval;

   if (VAR_4->ctx_driver->swap_interval)
   {
      bool VAR_6 = FUNC_4(
            VAR_0) && VAR_5->bools.video_adaptive_vsync;
      if (VAR_6 && VAR_3 == 1)
         VAR_3 = -1;
      VAR_4->ctx_driver->swap_interval(VAR_4->ctx_data, VAR_3);
   }
   FUNC_2(VAR_4, 1);
}
