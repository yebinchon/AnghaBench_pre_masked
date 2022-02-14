
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ tmr_obj_t ;
typedef int tmr_h ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_2 (uintptr_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,uintptr_t) ;

bool FUNC_5(tmr_h VAR_2) {
  uintptr_t VAR_3 = (uintptr_t)VAR_2;

  tmr_obj_t* VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 == ((void*)0)) {
    FUNC_4("timer[id=%lld] does not exist", VAR_3);
    return 0;
  }

  uint8_t VAR_5 = FUNC_0(&VAR_4->state, VAR_1, VAR_0);
  FUNC_1(VAR_4, VAR_5);
  FUNC_3(VAR_4);

  return VAR_5 == VAR_1;
}
