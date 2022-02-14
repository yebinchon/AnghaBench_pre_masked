
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_y; int mouse_x; } ;
typedef TYPE_1__ x11_input_t ;
struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
typedef int const int16_t ;





 int FUNC_0 (struct video_viewport*,int ,int ,int const*,int const*,int const*,int const*) ;

__attribute__((used)) static int16_t FUNC_1( x11_input_t *VAR_0, unsigned VAR_1, unsigned VAR_2 )
{
   const int VAR_3 = 32700;
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

   if (!(FUNC_0(&VAR_4, VAR_0->mouse_x, VAR_0->mouse_y,
         &VAR_6, &VAR_7, &VAR_8, &VAR_9)))
      return 0;

   VAR_5 = (VAR_6 >= -VAR_3) && (VAR_7 >= -VAR_3) && (VAR_6 <= VAR_3) && (VAR_7 <= VAR_3);

   switch ( VAR_2 )
   {
   case 129:
      return VAR_5 ? VAR_6 : 0;
   case 128:
      return VAR_5 ? VAR_7 : 0;
   case 130:
      return !VAR_5;
   default:
      break;
   }

   return 0;
}
