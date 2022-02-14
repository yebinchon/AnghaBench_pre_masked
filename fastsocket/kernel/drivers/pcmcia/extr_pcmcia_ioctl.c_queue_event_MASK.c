
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_head; int event_tail; int * event; } ;
typedef TYPE_1__ user_info_t ;
typedef int event_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(user_info_t *VAR_1, event_t VAR_2)
{
    VAR_1->event_head = (VAR_1->event_head+1) % VAR_0;
    if (VAR_1->event_head == VAR_1->event_tail)
 VAR_1->event_tail = (VAR_1->event_tail+1) % VAR_0;
    VAR_1->event[VAR_1->event_head] = VAR_2;
}
