
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ rc_term_t ;
typedef int rc_peek_t ;
struct TYPE_6__ {TYPE_1__* terms; } ;
typedef TYPE_2__ rc_expression_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,void*,int *) ;

unsigned FUNC_1(rc_expression_t* VAR_0, rc_peek_t VAR_1, void* VAR_2, lua_State* VAR_3) {
  rc_term_t* VAR_4;
  unsigned VAR_5;

  VAR_5 = 0;

  for (VAR_4 = VAR_0->terms; VAR_4 != 0; VAR_4 = VAR_4->next) {
    VAR_5 += FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
  }

  return VAR_5;
}
