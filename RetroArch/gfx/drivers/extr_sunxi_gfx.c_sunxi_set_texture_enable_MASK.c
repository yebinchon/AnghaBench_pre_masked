
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_video {int menu_active; int keep_vsync; int vsync_thread; } ;


 int FUNC_0 (int ,struct sunxi_video*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, bool VAR_2, bool VAR_3)
{
   struct sunxi_video *VAR_4 = (struct sunxi_video*)VAR_1;


   if (!VAR_4->menu_active && VAR_2)
   {

      VAR_4->keep_vsync = 0;
      FUNC_1(VAR_4->vsync_thread);
   }


   if (VAR_4->menu_active && !VAR_2)
   {
      VAR_4->keep_vsync = 1;
      VAR_4->vsync_thread = FUNC_0(VAR_0, VAR_4);
   }
   VAR_4->menu_active = VAR_2;
}
