
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; int y; int x; } ;
struct pointer_status {int pointer_x; int pointer_y; struct pointer_status* next; } ;
struct TYPE_2__ {struct pointer_status* next; } ;
struct dinput_input {int mouse_x; int mouse_y; TYPE_1__ pointer_head; } ;
typedef int const int16_t ;





 int FUNC_0 (struct video_viewport*,int,int,int const*,int const*,int const*,int const*) ;

__attribute__((used)) static int16_t FUNC_1( struct dinput_input *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
   const int VAR_3 = 32700;
   struct video_viewport VAR_4;
   bool VAR_5 = 0;
   int VAR_6 = 0;
   int VAR_7 = 0;
   int16_t VAR_8 = 0;
   int16_t VAR_9 = 0;
   int16_t VAR_10 = 0;
   int16_t VAR_11 = 0;
   unsigned VAR_12 = 0;

   struct pointer_status* VAR_13 = VAR_0->pointer_head.next;

   VAR_4.x = 0;
   VAR_4.y = 0;
   VAR_4.width = 0;
   VAR_4.height = 0;
   VAR_4.full_width = 0;
   VAR_4.full_height = 0;

   while ( VAR_13 && VAR_12 < VAR_1)
   {
      VAR_12++;
      VAR_13 = VAR_13->next;
   }

   if (!VAR_13 && VAR_1 > 0)
      return 0;

   VAR_6 = VAR_0->mouse_x;
   VAR_7 = VAR_0->mouse_y;

   if (VAR_13)
   {
      VAR_6 = VAR_13->pointer_x;
      VAR_7 = VAR_13->pointer_y;
   }

   if ( !( FUNC_0(
               &VAR_4, VAR_6, VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11)))
      return 0;

   VAR_5 = (VAR_8 >= -VAR_3) && (VAR_9 >= -VAR_3) && (VAR_8 <= VAR_3) && (VAR_9 <= VAR_3);

   switch (VAR_2)
   {
      case 129:
         return VAR_5 ? VAR_8 : 0;
      case 128:
         return VAR_5 ? VAR_9 : 0;
      case 130:
         return !VAR_5;
      default:
         break;
   }

   return 0;
}
