
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_viewport {int full_height; int full_width; int height; int width; int y; int x; } ;
typedef int screen_event_t ;
struct TYPE_6__ {size_t pointer_count; unsigned int* touch_map; TYPE_1__* pointer; } ;
typedef TYPE_2__ qnx_input_t ;
struct TYPE_7__ {int full_x; int full_y; } ;
typedef TYPE_3__ gl_t ;
struct TYPE_5__ {int contact_id; size_t map; int full_y; int full_x; int y; int x; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int,int,int,...) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct video_viewport*,int,int,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(
      qnx_input_t *VAR_3, screen_event_t VAR_4, int VAR_5)
{
   int VAR_6, VAR_7[2];
   unsigned VAR_8, VAR_9;

   FUNC_1(VAR_4,
         VAR_2, (int*)&VAR_6);
   FUNC_1(VAR_4,
         VAR_1, VAR_7);

   switch(VAR_5)
   {
      case 128:

         for(VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
         {
            if(VAR_3->pointer[VAR_8].contact_id == -1)
            {
               struct video_viewport VAR_10;

               VAR_10.x = 0;
               VAR_10.y = 0;
               VAR_10.width = 0;
               VAR_10.height = 0;
               VAR_10.full_width = 0;
               VAR_10.full_height = 0;

               VAR_3->pointer[VAR_8].contact_id = VAR_6;

               FUNC_3(
                     &VAR_10,
                     VAR_7[0], VAR_7[1],
                     &VAR_3->pointer[VAR_8].x, &VAR_3->pointer[VAR_8].y,
                     &VAR_3->pointer[VAR_8].full_x, &VAR_3->pointer[VAR_8].full_y);


               VAR_3->pointer[VAR_8].map = VAR_3->pointer_count;
               VAR_3->touch_map[VAR_3->pointer_count] = VAR_8;
               VAR_3->pointer_count++;
               break;
            }
         }






         break;

      case 129:
         for(VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
         {
            if(VAR_3->pointer[VAR_8].contact_id == VAR_6)
            {

               VAR_3->pointer[VAR_8].contact_id = -1;



               VAR_3->touch_map[VAR_3->pointer[VAR_8].map] = -1;
               for(VAR_9 = VAR_3->pointer[VAR_8].map; VAR_9 < VAR_3->pointer_count; ++VAR_9)
               {
                  VAR_3->touch_map[VAR_9] = VAR_3->touch_map[VAR_9+1];
                  VAR_3->pointer[VAR_3->touch_map[VAR_9+1]].map = VAR_9;
                  VAR_3->touch_map[VAR_9+1] = -1;
               }
               VAR_3->pointer_count--;
               break;
            }
         }






         break;

      case 130:

         for(VAR_8 = 0; VAR_8 < VAR_3->pointer_count; ++VAR_8)
         {
            if(VAR_3->pointer[VAR_8].contact_id == VAR_6)
            {
               struct video_viewport VAR_11;

               VAR_11.x = 0;
               VAR_11.y = 0;
               VAR_11.width = 0;
               VAR_11.height = 0;
               VAR_11.full_width = 0;
               VAR_11.full_height = 0;
               FUNC_3(&VAR_11,
                     VAR_7[0], VAR_7[1],
                     &VAR_3->pointer[VAR_8].x, &VAR_3->pointer[VAR_8].y,
                     &VAR_3->pointer[VAR_8].full_x, &VAR_3->pointer[VAR_8].full_y);




               break;
            }
         }
         break;
   }
}
