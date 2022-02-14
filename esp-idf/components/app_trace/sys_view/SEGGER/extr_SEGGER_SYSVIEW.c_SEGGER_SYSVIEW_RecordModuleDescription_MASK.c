
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_4__ {scalar_t__ EventOffset; struct TYPE_4__ const* pNext; } ;
typedef TYPE_1__ const SEGGER_SYSVIEW_MODULE ;


 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_3 (scalar_t__*,char const*,scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int ) ;
 TYPE_1__ const* VAR_4 ;

void FUNC_5(const SEGGER_SYSVIEW_MODULE* VAR_5, const char* VAR_6) {
  U8 VAR_7;
  SEGGER_SYSVIEW_MODULE* VAR_8;

  VAR_8 = VAR_4;
  VAR_7 = 0;
  do {
    if (VAR_8 == VAR_5) {
      break;
    }
    VAR_7++;
    VAR_8 = VAR_8->pNext;
  } while (VAR_8);
  {
    U8* VAR_9;
    U8* VAR_10;
    FUNC_2(VAR_0 + 2 * VAR_2 + 1 + VAR_1);

    VAR_9 = VAR_10;




    FUNC_0(VAR_9, VAR_7);
    FUNC_0(VAR_9, (VAR_5->EventOffset));
    VAR_9 = FUNC_3(VAR_9, VAR_6, VAR_1);
    FUNC_4(VAR_10, VAR_9, VAR_3);
    FUNC_1();
  }
}
