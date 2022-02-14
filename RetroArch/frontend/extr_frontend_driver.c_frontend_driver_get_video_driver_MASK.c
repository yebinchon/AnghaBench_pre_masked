
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_driver {int dummy; } ;
struct TYPE_3__ {struct video_driver const* (* get_video_driver ) () ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 struct video_driver const* FUNC_1 () ;

const struct video_driver *FUNC_2(void)
{
   frontend_ctx_driver_t *VAR_0 = FUNC_0();
   if (!VAR_0 || !VAR_0->get_video_driver)
      return ((void*)0);
   return VAR_0->get_video_driver();
}
