
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float offset_y; int unfolded; scalar_t__ task_ptr; scalar_t__ dying; } ;
typedef TYPE_1__ menu_widget_msg_t ;
struct TYPE_7__ {float* subject; uintptr_t tag; float target_value; TYPE_1__* userdata; int easing_enum; int duration; int * cb; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;
struct TYPE_8__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(void)
{
   int VAR_7;
   float VAR_8 = 0;

   menu_widget_msg_t *VAR_9 = ((void*)0);

   if (VAR_2->size == 0)
      return;

   for (VAR_7 = (int)(VAR_2->size-1); VAR_7 >= 0; VAR_7--)
   {
      menu_widget_msg_t *VAR_10 = (menu_widget_msg_t*)
         FUNC_0(VAR_2, VAR_7);

      if (!VAR_10 || VAR_10->dying)
         continue;

      VAR_8 += VAR_4 / (VAR_10->task_ptr ? 2 : 1) + VAR_5;

      if (!VAR_10->unfolded)
         VAR_9 = VAR_10;

      if (VAR_10->offset_y != VAR_8)
      {
         menu_animation_ctx_entry_t VAR_11;

         VAR_11.cb = VAR_7 == 0 ? VAR_3 : ((void*)0);
         VAR_11.duration = VAR_1;
         VAR_11.easing_enum = VAR_0;
         VAR_11.subject = &VAR_10->offset_y;
         VAR_11.tag = (uintptr_t) VAR_10;
         VAR_11.target_value = VAR_8;
         VAR_11.userdata = VAR_9;

         FUNC_1(&VAR_11);

         VAR_6 = 1;
      }
   }
}
