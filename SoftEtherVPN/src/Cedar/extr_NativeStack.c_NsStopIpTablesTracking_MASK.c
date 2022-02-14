
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IpTablesHalt; int IpTablesInitOk; int * IpTablesHaltEvent; int * IpTablesThread; } ;
typedef TYPE_1__ NATIVE_STACK ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(NATIVE_STACK *VAR_1)
{
 if (VAR_1->IpTablesThread == ((void*)0))
 {
  return;
 }

 VAR_1->IpTablesHalt = 1;
 FUNC_2(VAR_1->IpTablesHaltEvent);

 FUNC_3(VAR_1->IpTablesThread, VAR_0);

 FUNC_1(VAR_1->IpTablesThread);
 FUNC_0(VAR_1->IpTablesHaltEvent);

 VAR_1->IpTablesThread = ((void*)0);
 VAR_1->IpTablesHaltEvent = ((void*)0);
 VAR_1->IpTablesInitOk = 0;
 VAR_1->IpTablesHalt = 0;
}
