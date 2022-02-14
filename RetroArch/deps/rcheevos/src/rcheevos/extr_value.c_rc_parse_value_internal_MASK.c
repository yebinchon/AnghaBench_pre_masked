
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* expressions; } ;
typedef TYPE_1__ rc_value_t ;
struct TYPE_9__ {scalar_t__ offset; } ;
typedef TYPE_2__ rc_parse_state_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_3__ rc_expression_t ;


 TYPE_3__* FUNC_0 (char const**,TYPE_2__*) ;

void FUNC_1(rc_value_t* VAR_0, const char** VAR_1, rc_parse_state_t* VAR_2) {
  rc_expression_t** VAR_3;

  VAR_3 = &VAR_0->expressions;

  for (;;) {
    *VAR_3 = FUNC_0(VAR_1, VAR_2);

    if (VAR_2->offset < 0) {
      return;
    }

    VAR_3 = &(*VAR_3)->next;

    if (**VAR_1 != '$') {
      break;
    }

    (*VAR_1)++;
  }

  *VAR_3 = 0;
}
