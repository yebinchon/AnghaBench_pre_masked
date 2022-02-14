
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* requirement; TYPE_4__* alternative; } ;
typedef TYPE_2__ rc_trigger_t ;
struct TYPE_10__ {scalar_t__ offset; } ;
typedef TYPE_3__ rc_parse_state_t ;
struct TYPE_11__ {struct TYPE_11__* next; } ;
typedef TYPE_4__ rc_condset_t ;
struct TYPE_8__ {scalar_t__ next; } ;


 void* FUNC_0 (char const**,TYPE_3__*) ;

void FUNC_1(rc_trigger_t* VAR_0, const char** VAR_1, rc_parse_state_t* VAR_2) {
  rc_condset_t** VAR_3;
  const char* VAR_4;

  VAR_4 = *VAR_1;
  VAR_3 = &VAR_0->alternative;

  if (*VAR_4 == 's' || *VAR_4 == 'S') {
    VAR_0->requirement = 0;
  }
  else {
    VAR_0->requirement = FUNC_0(&VAR_4, VAR_2);

    if (VAR_2->offset < 0) {
      return;
    }

    VAR_0->requirement->next = 0;
  }

  while (*VAR_4 == 's' || *VAR_4 == 'S') {
    VAR_4++;
    *VAR_3 = FUNC_0(&VAR_4, VAR_2);

    if (VAR_2->offset < 0) {
      return;
    }

    VAR_3 = &(*VAR_3)->next;
  }

  *VAR_3 = 0;
  *VAR_1 = VAR_4;
}
