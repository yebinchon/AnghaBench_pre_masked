
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_video {int vsync_condition; int vsync_cond_mutex; int pending_mutex; scalar_t__ menu_surface; scalar_t__ main_surface; } ;


 int FUNC_0 (struct drm_video*,scalar_t__*) ;
 int FUNC_1 (struct drm_video*) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   struct drm_video *VAR_2 = VAR_1;

   if (!VAR_2)
      return;

   FUNC_0(VAR_2, &VAR_2->main_surface);

   if (VAR_2->menu_surface)
      FUNC_0(VAR_2, &VAR_2->menu_surface);


   FUNC_3(VAR_2->pending_mutex);
   FUNC_3(VAR_2->vsync_cond_mutex);
   FUNC_2(VAR_2->vsync_condition);

   VAR_0 = ((void*)0);

   FUNC_1(VAR_2);
}
