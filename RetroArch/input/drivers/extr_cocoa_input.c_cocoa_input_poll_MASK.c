
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {size_t touch_count; int mouse_rel_y; int mouse_y_last; int mouse_rel_x; int mouse_x_last; TYPE_3__* sec_joypad; TYPE_2__* joypad; TYPE_1__* touches; } ;
typedef TYPE_4__ cocoa_input_data_t ;
struct TYPE_7__ {int (* poll ) () ;} ;
struct TYPE_6__ {int (* poll ) () ;} ;
struct TYPE_5__ {float screen_x; float screen_y; int full_y; int full_x; int fixed_y; int fixed_x; } ;


 float FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct video_viewport*,float,float,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   uint32_t VAR_1;
   cocoa_input_data_t *VAR_2 = (cocoa_input_data_t*)VAR_0;

   float VAR_3 = FUNC_0();


   if (!VAR_2)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_2->touch_count; VAR_1++)
   {
      struct video_viewport VAR_4;

      VAR_4.x = 0;
      VAR_4.y = 0;
      VAR_4.width = 0;
      VAR_4.height = 0;
      VAR_4.full_width = 0;
      VAR_4.full_height = 0;


      VAR_2->touches[VAR_1].screen_x *= VAR_3;
      VAR_2->touches[VAR_1].screen_y *= VAR_3;

      FUNC_3(
            &VAR_4,
            VAR_2->touches[VAR_1].screen_x,
            VAR_2->touches[VAR_1].screen_y,
            &VAR_2->touches[VAR_1].fixed_x,
            &VAR_2->touches[VAR_1].fixed_y,
            &VAR_2->touches[VAR_1].full_x,
            &VAR_2->touches[VAR_1].full_y);
   }

   if (VAR_2->joypad)
      VAR_2->joypad->poll();
   if (VAR_2->sec_joypad)
       VAR_2->sec_joypad->poll();

    VAR_2->mouse_x_last = VAR_2->mouse_rel_x;
    VAR_2->mouse_y_last = VAR_2->mouse_rel_y;
}
