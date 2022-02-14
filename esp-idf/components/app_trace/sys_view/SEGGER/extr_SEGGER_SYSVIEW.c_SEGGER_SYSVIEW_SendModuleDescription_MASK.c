
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* pNext; int (* pfSendModuleDesc ) () ;} ;
typedef TYPE_1__ SEGGER_SYSVIEW_MODULE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(void) {
  SEGGER_SYSVIEW_MODULE* VAR_1;

  if (VAR_0 != 0) {
    VAR_1 = VAR_0;
    do {
      if (VAR_1->pfSendModuleDesc) {
        VAR_1->pfSendModuleDesc();
      }
      VAR_1 = VAR_1->pNext;
    } while (VAR_1);
  }
}
