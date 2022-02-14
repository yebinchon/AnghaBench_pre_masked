
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ requirement; TYPE_2__* alternative; int memrefs; } ;
typedef TYPE_1__ rc_trigger_t ;
typedef int rc_peek_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ rc_condset_t ;
typedef int lua_State ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int*,int ,void*,int *) ;
 int FUNC_2 (int ,int ,void*) ;

int FUNC_3(rc_trigger_t* VAR_0, rc_peek_t VAR_1, void* VAR_2, lua_State* VAR_3) {
  int VAR_4, VAR_5;
  rc_condset_t* VAR_6;

  FUNC_2(VAR_0->memrefs, VAR_1, VAR_2);

  VAR_5 = 0;
  VAR_4 = VAR_0->requirement != 0 ? FUNC_1(VAR_0->requirement, &VAR_5, VAR_1, VAR_2, VAR_3) : 1;
  VAR_6 = VAR_0->alternative;

  if (VAR_6) {
    int VAR_7 = 0;

    do {
      VAR_7 |= FUNC_1(VAR_6, &VAR_5, VAR_1, VAR_2, VAR_3);
      VAR_6 = VAR_6->next;
    }
    while (VAR_6 != 0);

    VAR_4 &= VAR_7 && !VAR_5;
  }

  if (VAR_5) {
    FUNC_0(VAR_0);
  }

  return VAR_4;
}
