
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_3__ {int StackSize; int StackBase; int TaskID; int sName; int Prio; } ;
typedef TYPE_1__ SEGGER_SYSVIEW_TASKINFO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int ) ;

void FUNC_6(const SEGGER_SYSVIEW_TASKINFO *VAR_4) {
  U8* VAR_5;
  U8* VAR_6;
  FUNC_2(VAR_0 + VAR_1 + 1 + 32);

  VAR_5 = VAR_6;
  FUNC_0(VAR_5, FUNC_3(VAR_4->TaskID));
  FUNC_0(VAR_5, VAR_4->Prio);
  VAR_5 = FUNC_4(VAR_5, VAR_4->sName, 32);
  FUNC_5(VAR_6, VAR_5, VAR_3);

  VAR_5 = VAR_6;
  FUNC_0(VAR_5, FUNC_3(VAR_4->TaskID));
  FUNC_0(VAR_5, VAR_4->StackBase);
  FUNC_0(VAR_5, VAR_4->StackSize);
  FUNC_0(VAR_5, 0);
  FUNC_5(VAR_6, VAR_5, VAR_2);
  FUNC_1();
}
