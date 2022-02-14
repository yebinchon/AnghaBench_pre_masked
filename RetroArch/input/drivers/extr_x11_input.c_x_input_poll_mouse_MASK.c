
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_last_x; int mouse_x; int mouse_last_y; int mouse_y; unsigned int mouse_l; unsigned int mouse_m; unsigned int mouse_r; int display; int win; scalar_t__ grab_mouse; } ;
typedef TYPE_1__ x11_input_t ;
struct video_viewport {int full_width; int full_height; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
typedef int Window ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int *,int*,int*,int*,int*,unsigned int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct video_viewport*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(x11_input_t *VAR_6)
{
   unsigned VAR_7;
   int VAR_8, VAR_9, VAR_10, VAR_11;
   Window VAR_12, VAR_13;

   VAR_6->mouse_last_x = VAR_6->mouse_x;
   VAR_6->mouse_last_y = VAR_6->mouse_y;

   FUNC_0(VAR_6->display,
            VAR_6->win,
            &VAR_12, &VAR_13,
            &VAR_8, &VAR_9,
            &VAR_10, &VAR_11,
            &VAR_7);

   if (VAR_5)
   {
      VAR_6->mouse_x = VAR_10;
      VAR_6->mouse_y = VAR_11;
      VAR_6->mouse_l = VAR_7 & VAR_0;
      VAR_6->mouse_m = VAR_7 & VAR_1;
      VAR_6->mouse_r = VAR_7 & VAR_2;


      if (VAR_6->grab_mouse && FUNC_4())
      {
         int VAR_14, VAR_15;
         struct video_viewport VAR_16;

         VAR_16.x = 0;
         VAR_16.y = 0;
         VAR_16.width = 0;
         VAR_16.height = 0;
         VAR_16.full_width = 0;
         VAR_16.full_height = 0;

         FUNC_3(&VAR_16);

         VAR_14 = VAR_16.full_width >> 1;
         VAR_15 = VAR_16.full_height >> 1;

         if (VAR_6->mouse_x != VAR_14 || VAR_6->mouse_y != VAR_15)
         {
            FUNC_2(VAR_6->display, VAR_4,
                  VAR_6->win, 0, 0, 0, 0,
                  VAR_14, VAR_15);
            FUNC_1(VAR_6->display, VAR_3);
         }
         VAR_6->mouse_last_x = VAR_14;
         VAR_6->mouse_last_y = VAR_15;
      }
   }
}
