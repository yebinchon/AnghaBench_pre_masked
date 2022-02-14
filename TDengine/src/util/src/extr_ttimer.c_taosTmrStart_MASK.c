
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmr_obj_t ;
typedef int * tmr_h ;
struct TYPE_3__ {scalar_t__* label; } ;
typedef TYPE_1__ tmr_ctrl_t ;
typedef int TAOS_TMR_CALLBACK ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int,void*,TYPE_1__*) ;
 int FUNC_2 (char*,scalar_t__*) ;

tmr_h FUNC_3(TAOS_TMR_CALLBACK VAR_0, int VAR_1, void* VAR_2, void* VAR_3) {
  tmr_ctrl_t* VAR_4 = (tmr_ctrl_t*)VAR_3;
  if (VAR_4 == ((void*)0) || VAR_4->label[0] == 0) {
    return ((void*)0);
  }

  tmr_obj_t* VAR_5 = (tmr_obj_t*)FUNC_0(1, sizeof(tmr_obj_t));
  if (VAR_5 == ((void*)0)) {
    FUNC_2("%s failed to allocated memory for new timer object.", VAR_4->label);
    return ((void*)0);
  }

  return (tmr_h)FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2, VAR_4);
}
