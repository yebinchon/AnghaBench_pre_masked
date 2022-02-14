
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_3__ {int buttons; int x; } ;
typedef TYPE_1__ rwebinput_mouse_state_t ;
typedef int int16_t ;





 int VAR_0 ;
 int FUNC_0 (struct video_viewport*,int ,int ,int*,int*,int*,int*) ;

__attribute__((used)) static int16_t FUNC_1(rwebinput_mouse_state_t *VAR_1,
   unsigned VAR_2, bool VAR_3)
{
   struct video_viewport VAR_4;
   bool VAR_5 = 0;
   int16_t VAR_6 = 0;
   int16_t VAR_7 = 0;
   int16_t VAR_8 = 0;
   int16_t VAR_9 = 0;

   VAR_4.x = 0;
   VAR_4.y = 0;
   VAR_4.width = 0;
   VAR_4.height = 0;
   VAR_4.full_width = 0;
   VAR_4.full_height = 0;

   if (!(FUNC_0(&VAR_4, VAR_1->x, VAR_1->x,
         &VAR_6, &VAR_7, &VAR_8, &VAR_9)))
      return 0;

   if (VAR_3)
   {
      VAR_6 = VAR_8;
      VAR_7 = VAR_9;
   }

   VAR_5 = (VAR_6 >= -0x7fff) && (VAR_7 >= -0x7fff);

   if (!VAR_5)
      return 0;

   switch (VAR_2)
   {
      case 129:
         return VAR_6;
      case 128:
         return VAR_7;
      case 130:
         return !!(VAR_1->buttons & (1 << VAR_0));
   }

   return 0;
}
