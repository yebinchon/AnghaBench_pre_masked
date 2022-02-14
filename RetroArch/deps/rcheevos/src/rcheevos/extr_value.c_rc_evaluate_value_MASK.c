
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* expressions; int memrefs; } ;
typedef TYPE_1__ rc_value_t ;
typedef int rc_peek_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ rc_expression_t ;
typedef int lua_State ;


 unsigned int FUNC_0 (TYPE_2__*,int ,void*,int *) ;
 int FUNC_1 (int ,int ,void*) ;

unsigned FUNC_2(rc_value_t* VAR_0, rc_peek_t VAR_1, void* VAR_2, lua_State* VAR_3) {
  rc_expression_t* VAR_4;
  unsigned VAR_5, VAR_6;

  FUNC_1(VAR_0->memrefs, VAR_1, VAR_2);

  VAR_4 = VAR_0->expressions;
  VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);

  for (VAR_4 = VAR_4->next; VAR_4 != 0; VAR_4 = VAR_4->next) {
    VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);

    if (VAR_5 > VAR_6) {
      VAR_6 = VAR_5;
    }
  }

  return VAR_6;
}
