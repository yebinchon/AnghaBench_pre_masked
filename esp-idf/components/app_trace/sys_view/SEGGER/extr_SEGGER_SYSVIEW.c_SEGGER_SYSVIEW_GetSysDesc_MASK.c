
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_2__ {int (* pfSendSysDesc ) () ;int RAMBaseAddress; int CPUFreq; int SysFreq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;

void FUNC_5(void) {
  U8* VAR_5;
  U8* VAR_6;
  FUNC_2(VAR_1 + 4 * VAR_2);

  VAR_5 = VAR_6;
  FUNC_0(VAR_5, VAR_4.SysFreq);
  FUNC_0(VAR_5, VAR_4.CPUFreq);
  FUNC_0(VAR_5, VAR_4.RAMBaseAddress);
  FUNC_0(VAR_5, VAR_0);
  FUNC_3(VAR_6, VAR_5, VAR_3);
  FUNC_1();
  if (VAR_4.pfSendSysDesc) {
    VAR_4.pfSendSysDesc();
  }
}
