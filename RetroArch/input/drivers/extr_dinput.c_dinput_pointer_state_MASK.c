
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; int y; int x; } ;
struct pointer_status {int pointer_x; int pointer_y; struct pointer_status* next; } ;
struct TYPE_2__ {struct pointer_status* next; } ;
struct dinput_input {int mouse_x; int mouse_y; int mouse_l; TYPE_1__ pointer_head; } ;
typedef int int16_t ;





 int FUNC_0 (struct video_viewport*,int,int,int*,int*,int*,int*) ;

__attribute__((used)) static int16_t FUNC_1(struct dinput_input *VAR_0,
      unsigned VAR_1, unsigned VAR_2, bool VAR_3)
{
   struct video_viewport VAR_4;
   bool VAR_5 = 0;
   bool VAR_6 = 0;
   int VAR_7 = 0;
   int VAR_8 = 0;
   int16_t VAR_9 = 0;
   int16_t VAR_10 = 0;
   int16_t VAR_11 = 0;
   int16_t VAR_12 = 0;
   unsigned VAR_13 = 0;
   struct pointer_status *
      VAR_14 = VAR_0->pointer_head.next;

   VAR_4.x = 0;
   VAR_4.y = 0;
   VAR_4.width = 0;
   VAR_4.height = 0;
   VAR_4.full_width = 0;
   VAR_4.full_height = 0;

   while (VAR_14 && VAR_13 < VAR_1)
   {
      VAR_13++;
      VAR_14 = VAR_14->next;
   }
   if (!VAR_14 && VAR_1 > 0)
      return 0;

   VAR_7 = VAR_0->mouse_x;
   VAR_8 = VAR_0->mouse_y;
   VAR_5 = VAR_0->mouse_l;

   if (VAR_14)
   {
      VAR_7 = VAR_14->pointer_x;
      VAR_8 = VAR_14->pointer_y;
      VAR_5 = 1;
   }

   if (!(FUNC_0(&VAR_4, VAR_7, VAR_8,
         &VAR_9, &VAR_10, &VAR_11, &VAR_12)))
      return 0;

   if (VAR_3)
   {
      VAR_9 = VAR_11;
      VAR_10 = VAR_12;
   }

   VAR_6 = (VAR_9 >= -0x7fff) && (VAR_10 >= -0x7fff);

   if (!VAR_6)
      return 0;

   switch (VAR_2)
   {
      case 129:
         return VAR_9;
      case 128:
         return VAR_10;
      case 130:
         return VAR_5;
      default:
         break;
   }

   return 0;
}
