
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_video {int menu_active; int menu_surface; int main_surface; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_video*,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, bool VAR_1, bool VAR_2)
{
   struct drm_video *VAR_3 = VAR_0;


   if (!VAR_1 && VAR_3->menu_active)
   {

      FUNC_0(VAR_3->main_surface);

      FUNC_1(VAR_3, &VAR_3->menu_surface);
   }

   VAR_3->menu_active = VAR_1;
}
