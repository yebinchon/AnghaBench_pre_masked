
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* label; struct TYPE_3__* next; } ;
typedef TYPE_1__ tmr_ctrl_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,scalar_t__*) ;
 TYPE_1__* VAR_2 ;

void FUNC_4(void* VAR_3) {
  tmr_ctrl_t* VAR_4 = (tmr_ctrl_t*)VAR_3;
  FUNC_0(VAR_4 != ((void*)0) && VAR_4->label[0] != 0);

  FUNC_3("%s timer controller is cleaned up.", VAR_4->label);
  VAR_4->label[0] = 0;

  FUNC_1(&VAR_1);
  VAR_4->next = VAR_2;
  VAR_0--;
  VAR_2 = VAR_4;
  FUNC_2(&VAR_1);
}
