
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int keep_aspect; int o_size; int should_resize; } ;
typedef TYPE_2__ switch_video_t ;
struct TYPE_5__ {int video_scale_integer; } ;
struct TYPE_7__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;




 TYPE_3__* FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned VAR_1)
{
    settings_t *VAR_2 = FUNC_0();
    switch_video_t *VAR_3 = (switch_video_t *)VAR_0;

    if (!VAR_3)
        return;

    VAR_3->keep_aspect = 1;
    VAR_3->o_size = 0;

    switch (VAR_1)
    {
       case 129:
          VAR_3->o_size = 1;
          VAR_3->keep_aspect = 0;
          break;

       case 128:
          if (VAR_2->bools.video_scale_integer)
          {
             FUNC_1();
             VAR_3->o_size = 1;
             VAR_3->keep_aspect = 0;
          }
          break;

       default:
          break;
    }


    VAR_3->should_resize = 1;
}
