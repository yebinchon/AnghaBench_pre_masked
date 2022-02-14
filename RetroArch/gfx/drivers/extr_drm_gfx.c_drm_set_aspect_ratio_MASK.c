
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_video {float current_aspect; int menu_surface; scalar_t__ menu_active; int main_surface; } ;
struct TYPE_2__ {float value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float) ;

__attribute__((used)) static void FUNC_2 (void *VAR_1, unsigned VAR_2)
{
   struct drm_video *VAR_3 = VAR_1;

   float VAR_4 = VAR_0[VAR_2].value;

   if (VAR_3->current_aspect != VAR_4)
   {
      VAR_3->current_aspect = VAR_4;
      FUNC_1(VAR_3->main_surface, VAR_4);
      if (VAR_3->menu_active)
      {
         FUNC_1(VAR_3->menu_surface, VAR_4);
         FUNC_0(VAR_3->menu_surface);
      }
   }
}
