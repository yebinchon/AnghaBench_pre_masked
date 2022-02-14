
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buttons; double scroll_y; double scroll_x; int delta_y; int y; int delta_x; int x; } ;
typedef TYPE_1__ rwebinput_mouse_state_t ;
typedef int int16_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int16_t FUNC_0(rwebinput_mouse_state_t *VAR_5,
   unsigned VAR_6, bool VAR_7)
{
   switch (VAR_6)
   {
      case 129:
         return (int16_t)(VAR_7 ? VAR_5->x : VAR_5->delta_x);
      case 128:
         return (int16_t)(VAR_7 ? VAR_5->y : VAR_5->delta_y);
      case 134:
         return !!(VAR_5->buttons & (1 << VAR_2));
      case 132:
         return !!(VAR_5->buttons & (1 << VAR_4));
      case 133:
         return !!(VAR_5->buttons & (1 << VAR_3));
      case 138:
         return !!(VAR_5->buttons & (1 << VAR_0));
      case 137:
         return !!(VAR_5->buttons & (1 << VAR_1));
      case 130:
         return VAR_5->scroll_y < 0.0;
      case 131:
         return VAR_5->scroll_y > 0.0;
      case 135:
         return VAR_5->scroll_x < 0.0;
      case 136:
         return VAR_5->scroll_x > 0.0;
   }

   return 0;
}
