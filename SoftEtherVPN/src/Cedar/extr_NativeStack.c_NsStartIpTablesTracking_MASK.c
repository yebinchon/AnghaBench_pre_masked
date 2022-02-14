
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IpTablesInitOk; int IpTablesHalt; int * IpTablesThread; int IpTablesHaltEvent; } ;
typedef TYPE_1__ NATIVE_STACK ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

bool FUNC_3(NATIVE_STACK *VAR_1)
{
 if (VAR_1->IpTablesThread != ((void*)0))
 {
  return 1;
 }

 VAR_1->IpTablesInitOk = 0;

 VAR_1->IpTablesHalt = 0;

 VAR_1->IpTablesHaltEvent = FUNC_0();

 VAR_1->IpTablesThread = FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_1->IpTablesThread);

 return VAR_1->IpTablesInitOk;
}
