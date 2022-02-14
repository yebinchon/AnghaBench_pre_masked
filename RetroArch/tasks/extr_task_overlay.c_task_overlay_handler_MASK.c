
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_15__ {int overlay_scale; int overlay_opacity; int overlay_enable; int hide_in_menu; int active; int size; int overlays; } ;
typedef TYPE_2__ overlay_task_data_t ;
struct TYPE_16__ {int state; int overlay_scale; int overlay_opacity; int overlay_enable; int overlay_hide_in_menu; int active; int size; int overlays; } ;
typedef TYPE_3__ overlay_loader_t ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_9(retro_task_t *VAR_0)
{
   overlay_loader_t *VAR_1 = (overlay_loader_t*)VAR_0->state;

   switch (VAR_1->state)
   {
      case 130:
         FUNC_4(VAR_0);
         break;
      case 131:
         FUNC_3(VAR_0);
         break;
      case 129:
         FUNC_5(VAR_0);
         break;
      case 132:
         FUNC_6(VAR_0, 1);
         break;
      case 133:
      default:
      case 128:
         FUNC_8(VAR_0, 1);
         break;
   }

   if (FUNC_2(VAR_0) && !FUNC_1(VAR_0))
   {
      overlay_task_data_t *VAR_2 = (overlay_task_data_t*)
         FUNC_0(1, sizeof(*VAR_2));

      VAR_2->overlays = VAR_1->overlays;
      VAR_2->size = VAR_1->size;
      VAR_2->active = VAR_1->active;
      VAR_2->hide_in_menu = VAR_1->overlay_hide_in_menu;
      VAR_2->overlay_enable = VAR_1->overlay_enable;
      VAR_2->overlay_opacity = VAR_1->overlay_opacity;
      VAR_2->overlay_scale = VAR_1->overlay_scale;

      FUNC_7(VAR_0, VAR_2);
   }
}
