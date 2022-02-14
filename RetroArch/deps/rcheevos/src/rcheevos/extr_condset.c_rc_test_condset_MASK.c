
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rc_peek_t ;
struct TYPE_4__ {scalar_t__ conditions; scalar_t__ has_pause; } ;
typedef TYPE_1__ rc_condset_t ;
typedef int lua_State ;


 int FUNC_0 (TYPE_1__*,int,int*,int ,void*,int *) ;

int FUNC_1(rc_condset_t* VAR_0, int* VAR_1, rc_peek_t VAR_2, void* VAR_3, lua_State* VAR_4) {
  if (VAR_0->conditions == 0) {

    return 1;
  }

  if (VAR_0->has_pause && FUNC_0(VAR_0, 1, VAR_1, VAR_2, VAR_3, VAR_4)) {

    return 0;
  }

  return FUNC_0(VAR_0, 0, VAR_1, VAR_2, VAR_3, VAR_4);
}
