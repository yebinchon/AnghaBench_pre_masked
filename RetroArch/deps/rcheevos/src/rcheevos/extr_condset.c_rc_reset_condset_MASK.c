
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* conditions; } ;
typedef TYPE_1__ rc_condset_t ;
struct TYPE_5__ {scalar_t__ current_hits; struct TYPE_5__* next; } ;
typedef TYPE_2__ rc_condition_t ;



void FUNC_0(rc_condset_t* VAR_0) {
  rc_condition_t* VAR_1;

  for (VAR_1 = VAR_0->conditions; VAR_1 != 0; VAR_1 = VAR_1->next) {
    VAR_1->current_hits = 0;
  }
}
