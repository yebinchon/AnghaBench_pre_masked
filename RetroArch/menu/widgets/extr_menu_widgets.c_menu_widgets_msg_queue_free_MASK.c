
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ msg; int expiration_timer; scalar_t__ expiration_timer_started; int hourglass_timer; TYPE_1__* task_ptr; int task_cancelled; int task_error; int task_finished; } ;
typedef TYPE_2__ menu_widget_msg_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_8__ {int size; int * list; } ;
struct TYPE_6__ {int * frontend_userdata; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_4__*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (uintptr_t*) ;
 int FUNC_3 (int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(menu_widget_msg_t *VAR_4, bool VAR_5)
{
   size_t VAR_6;
   menu_animation_ctx_tag VAR_7 = (uintptr_t) VAR_4;

   if (VAR_4->task_ptr)
   {



      if (!VAR_4->task_finished && !VAR_4->task_error && !VAR_4->task_cancelled)
         VAR_4->task_ptr->frontend_userdata = ((void*)0);


      VAR_2--;
   }


   FUNC_3(&VAR_4->hourglass_timer);
   FUNC_2(&VAR_7);


   if (VAR_4->expiration_timer_started)
      FUNC_3(&VAR_4->expiration_timer);


   if (VAR_4->msg)
      FUNC_1(VAR_4->msg);


   if (VAR_5)
   {
      FUNC_0(VAR_0, VAR_1);

      for (VAR_6 = VAR_1; VAR_6 < VAR_0->size-1; VAR_6++)
         VAR_0->list[VAR_6] = VAR_0->list[VAR_6+1];

      VAR_0->size--;
   }

   VAR_3 = 0;
}
