
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int CurrentActiveLinks; } ;
struct TYPE_10__ {int Started; int Auth; int Option; TYPE_5__* Cedar; int ClientSession; scalar_t__ Halting; } ;
struct TYPE_9__ {void* Param; } ;
typedef TYPE_1__ PACKET_ADAPTER ;
typedef TYPE_2__ LINK ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,int ,int ,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(LINK *VAR_0)
{
 PACKET_ADAPTER *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0);
 {
  if (VAR_0->Started || VAR_0->Halting)
  {
   FUNC_4(VAR_0);
   return;
  }
  VAR_0->Started = 1;

  FUNC_0(VAR_0->Cedar->CurrentActiveLinks);
 }
 FUNC_4(VAR_0);


 VAR_1 = FUNC_1();
 VAR_1->Param = (void *)VAR_0;
 FUNC_2(VAR_0);
 {
  VAR_0->ClientSession = FUNC_3(VAR_0->Cedar, VAR_0->Option, VAR_0->Auth, VAR_1, ((void*)0));
 }
 FUNC_4(VAR_0);
}
