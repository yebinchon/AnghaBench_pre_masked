
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* joypad; int mouse; } ;
typedef TYPE_2__ rwebinput_input_t ;
struct TYPE_10__ {size_t count; int * events; } ;
struct TYPE_9__ {double scroll_x; double scroll_y; scalar_t__ delta_y; scalar_t__ delta_x; } ;
struct TYPE_7__ {int (* poll ) () ;} ;


 TYPE_6__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int *,TYPE_4__*,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
   size_t VAR_3;
   rwebinput_input_t *VAR_4 = (rwebinput_input_t*)VAR_2;

   for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++)
      FUNC_1(VAR_4,
         &VAR_0->events[VAR_3]);
   VAR_0->count = 0;

   FUNC_0(&VAR_4->mouse, VAR_1, sizeof(*VAR_1));
   VAR_1->delta_x = VAR_1->delta_y = 0;
   VAR_1->scroll_x = VAR_1->scroll_y = 0.0;

 if (VAR_4->joypad)
  VAR_4->joypad->poll();
}
