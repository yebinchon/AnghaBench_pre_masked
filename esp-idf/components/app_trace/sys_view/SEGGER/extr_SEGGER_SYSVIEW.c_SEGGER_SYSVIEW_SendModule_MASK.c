
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef scalar_t__ U32 ;
struct TYPE_3__ {scalar_t__ EventOffset; int sModule; struct TYPE_3__* pNext; } ;
typedef TYPE_1__ SEGGER_SYSVIEW_MODULE ;


 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_3 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int ) ;
 TYPE_1__* VAR_4 ;

void FUNC_5(U8 VAR_5) {
  SEGGER_SYSVIEW_MODULE* VAR_6;
  U32 VAR_7;

  if (VAR_4 != 0) {
    VAR_6 = VAR_4;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
      VAR_6 = VAR_6->pNext;
      if (VAR_6 == 0) {
        break;
      }
    }
    if (VAR_6 != 0) {
      U8* VAR_8;
      U8* VAR_9;
      FUNC_2(VAR_0 + 2 * VAR_2 + 1 + VAR_1);

      VAR_8 = VAR_9;




      FUNC_0(VAR_8, VAR_5);
      FUNC_0(VAR_8, (VAR_6->EventOffset));
      VAR_8 = FUNC_3(VAR_8, VAR_6->sModule, VAR_1);
      FUNC_4(VAR_9, VAR_8, VAR_3);
      FUNC_1();
    }
  }
}
