
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pfSendModuleDesc ) () ;struct TYPE_4__* pNext; scalar_t__ NumEvents; scalar_t__ EventOffset; } ;
typedef TYPE_1__ SEGGER_SYSVIEW_MODULE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 () ;

void FUNC_4(SEGGER_SYSVIEW_MODULE* VAR_3) {
  FUNC_0();
  if (VAR_2 == 0) {





    VAR_3->EventOffset = VAR_0;
    VAR_3->pNext = 0;
    VAR_2 = VAR_3;
    VAR_1 = 1;
  } else {





    VAR_3->EventOffset = VAR_2->EventOffset + VAR_2->NumEvents;
    VAR_3->pNext = VAR_2;
    VAR_2 = VAR_3;
    VAR_1++;
  }
  FUNC_1(VAR_1-1);
  if (VAR_3->pfSendModuleDesc) {
    VAR_3->pfSendModuleDesc();
  }
  FUNC_2();
}
