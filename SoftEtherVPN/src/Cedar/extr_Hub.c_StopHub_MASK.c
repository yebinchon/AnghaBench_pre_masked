
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Offline; int HubIsOnlineButHalting; int Halt; int Name; int Cedar; } ;
typedef TYPE_1__ HUB ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(HUB *VAR_0)
{
 bool VAR_1 = 0;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = VAR_0->Offline;
 VAR_0->HubIsOnlineButHalting = 1;

 FUNC_1(VAR_0);

 if (VAR_0->Halt == 0)
 {
  FUNC_0(VAR_0->Cedar, "LS_HUB_STOP", VAR_0->Name);
  VAR_0->Halt = 1;
 }

 VAR_0->Offline = VAR_1;
 VAR_0->HubIsOnlineButHalting = 0;
}
