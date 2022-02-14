
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispmanx_video {int vsync_condition; int pending_mutex; int display; scalar_t__ menu_surface; scalar_t__ back_surface; scalar_t__ main_surface; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct dispmanx_video*,scalar_t__*) ;
 int FUNC_2 (struct dispmanx_video*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
   struct dispmanx_video *VAR_1 = VAR_0;

   if (!VAR_1)
      return;

   FUNC_1(VAR_1, &VAR_1->main_surface);
   FUNC_1(VAR_1, &VAR_1->back_surface);

   if (VAR_1->menu_surface)
      FUNC_1(VAR_1, &VAR_1->menu_surface);


   FUNC_5(VAR_1->display);
   FUNC_0();


   FUNC_4(VAR_1->pending_mutex);
   FUNC_3(VAR_1->vsync_condition);

   FUNC_2(VAR_1);
}
