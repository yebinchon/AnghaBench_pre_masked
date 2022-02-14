
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_2__ {scalar_t__ xHandle; char const* pcTaskName; unsigned int uxCurrentPriority; unsigned int uStackHighWaterMark; scalar_t__ pxStack; } ;


 int FUNC_0 (scalar_t__,char const*,unsigned int,scalar_t__,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__,char const*,unsigned int,scalar_t__,unsigned int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

void FUNC_3(U32 VAR_2, const char* VAR_3, unsigned VAR_4, U32 VAR_5, unsigned VAR_6) {
  unsigned VAR_7;

  if (FUNC_2(VAR_3, "IDLE", 5) == 0) {
    return;
  }

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    if (VAR_1[VAR_7].xHandle == VAR_2) {
      break;
    }
  }
  if (VAR_7 < VAR_0) {
    VAR_1[VAR_7].pcTaskName = VAR_3;
    VAR_1[VAR_7].uxCurrentPriority = VAR_4;
    VAR_1[VAR_7].pxStack = VAR_5;
    VAR_1[VAR_7].uStackHighWaterMark = VAR_6;

    FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  } else {
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  }
}
