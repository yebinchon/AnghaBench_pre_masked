
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ requirement; TYPE_2__* alternative; } ;
typedef TYPE_1__ rc_trigger_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ rc_condset_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(rc_trigger_t* VAR_0) {
  rc_condset_t* VAR_1;

  if (VAR_0->requirement != 0) {
    FUNC_0(VAR_0->requirement);
  }

  VAR_1 = VAR_0->alternative;

  while (VAR_1 != 0) {
    FUNC_0(VAR_1);
    VAR_1 = VAR_1->next;
  }
}
