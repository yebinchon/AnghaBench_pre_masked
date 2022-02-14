
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ winraw_mouse_t ;
struct TYPE_9__ {TYPE_2__* mice; } ;
typedef TYPE_3__ winraw_input_t ;
struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {unsigned int* input_mouse_index; } ;
struct TYPE_10__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
typedef int const int16_t ;


 unsigned int VAR_0 ;



 TYPE_4__* FUNC_0 () ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct video_viewport*,int ,int ,int const*,int const*,int const*,int const*) ;

__attribute__((used)) static int16_t FUNC_2(winraw_input_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   const int VAR_5 = 32700;
   struct video_viewport VAR_6;
   bool VAR_7 = 0;
   unsigned VAR_8;
   settings_t *VAR_9 = FUNC_0();
   winraw_mouse_t *VAR_10 = ((void*)0);
   int16_t VAR_11 = 0;
   int16_t VAR_12 = 0;
   int16_t VAR_13 = 0;
   int16_t VAR_14 = 0;

   if (VAR_3 >= VAR_0)
      return 0;

   for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
   {
      if (VAR_8 == VAR_9->uints.input_mouse_index[VAR_3])
      {
         VAR_10 = &VAR_2->mice[VAR_8];
         break;
      }
   }

   if (!VAR_10)
      return 0;

   VAR_6.x = 0;
   VAR_6.y = 0;
   VAR_6.width = 0;
   VAR_6.height = 0;
   VAR_6.full_width = 0;
   VAR_6.full_height = 0;

   if ( !( FUNC_1(
               &VAR_6, VAR_10->x, VAR_10->y, &VAR_11, &VAR_12, &VAR_13, &VAR_14 ) ) )
      return 0;

   VAR_7 = (VAR_11 >= -VAR_5) && (VAR_12 >= -VAR_5) && (VAR_11 <= VAR_5) && (VAR_12 <= VAR_5);

   switch ( VAR_4 )
   {
      case 129:
         return VAR_7 ? VAR_11 : 0;
      case 128:
         return VAR_7 ? VAR_12 : 0;
      case 130:
         return !VAR_7;
      default:
         break;
   }

   return 0;
}
