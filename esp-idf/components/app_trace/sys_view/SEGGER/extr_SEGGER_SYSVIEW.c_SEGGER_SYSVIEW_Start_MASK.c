
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_2__ {int EnableState; int (* pfSendSysDesc ) () ;int RAMBaseAddress; int CPUFreq; int SysFreq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 () ;
 int VAR_7 ;
 int FUNC_12 () ;

void FUNC_13(void) {
  if (VAR_6.EnableState == 0) {
    VAR_6.EnableState = 1;



    FUNC_4();
    FUNC_3(VAR_0, VAR_7, 10);
    FUNC_9();
    FUNC_6(VAR_5);
    {
      U8* VAR_8;
      U8* VAR_9;
      FUNC_2(VAR_2 + 4 * VAR_3);

      VAR_8 = VAR_9;
      FUNC_0(VAR_8, VAR_6.SysFreq);
      FUNC_0(VAR_8, VAR_6.CPUFreq);
      FUNC_0(VAR_8, VAR_6.RAMBaseAddress);
      FUNC_0(VAR_8, VAR_1);
      FUNC_10(VAR_9, VAR_8, VAR_4);
      FUNC_1();
    }
    if (VAR_6.pfSendSysDesc) {
      VAR_6.pfSendSysDesc();
    }
    FUNC_5();
    FUNC_8();
    FUNC_7();

  }
}
