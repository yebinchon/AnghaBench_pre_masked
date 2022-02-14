
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;
struct TYPE_6__ {int enable; int opacity; } ;
struct TYPE_8__ {scalar_t__ resolve_pos; scalar_t__ size; TYPE_1__ deferred; int * overlays; int * active; int state; } ;
typedef TYPE_3__ overlay_loader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(retro_task_t *VAR_2)
{
   overlay_loader_t *VAR_3 = (overlay_loader_t*)VAR_2->state;
   bool VAR_4 = VAR_3->resolve_pos < VAR_3->size;

   if (!VAR_4)
   {
      VAR_3->state = VAR_0;
      return;
   }

   if (!FUNC_3(VAR_3->overlays,
            VAR_3->resolve_pos, VAR_3->size))
   {
      FUNC_0("[Overlay]: Failed to resolve next targets.\n");
      FUNC_4(VAR_2, 1);
      VAR_3->state = VAR_1;
      return;
   }

   if (VAR_3->resolve_pos == 0)
   {
      VAR_3->active = &VAR_3->overlays[0];






   }

   VAR_3->resolve_pos += 1;
}
