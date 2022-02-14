
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_video {int keep_vsync; int sunxi_disp; struct sunxi_video* pages; int vsync_condition; int pending_mutex; int vsync_thread; int menu_active; } ;


 int FUNC_0 (struct sunxi_video*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sunxi_video*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
   struct sunxi_video *VAR_1 = (struct sunxi_video*)VAR_0;



   if (!VAR_1->menu_active)
   {
      VAR_1->keep_vsync = 0;
      FUNC_3(VAR_1->vsync_thread);
   }

   FUNC_2(VAR_1->pending_mutex);
   FUNC_1(VAR_1->vsync_condition);

   FUNC_0(VAR_1->pages);


   FUNC_5(VAR_1);

   FUNC_4(VAR_1->sunxi_disp);
   FUNC_0(VAR_1);
}
