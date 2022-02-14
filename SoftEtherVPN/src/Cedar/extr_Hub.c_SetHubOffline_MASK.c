
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_14__ {scalar_t__ Type; int BeingOffline; int Offline; TYPE_2__* Cedar; int lock_online; int Name; int * SecureNAT; scalar_t__ Halt; } ;
struct TYPE_13__ {int * Bridge; int HubName; } ;
struct TYPE_12__ {TYPE_1__* Server; int LocalBridgeList; } ;
struct TYPE_11__ {scalar_t__ ServerType; } ;
typedef TYPE_3__ LOCALBRIDGE ;
typedef TYPE_4__ HUB ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(HUB *VAR_2)
{
 UINT VAR_3;
 bool VAR_4 = 0;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Cedar->Server != ((void*)0) && VAR_2->Cedar->Server->ServerType == VAR_1)
 {
  if (VAR_2->Type == VAR_0)
  {
   VAR_4 = 1;
  }
 }

 VAR_2->BeingOffline = 1;

 FUNC_4(VAR_2->lock_online);
 {
  if (VAR_2->Offline || VAR_2->Halt)
  {
   FUNC_11(VAR_2->lock_online);
   VAR_2->BeingOffline = 0;
   return;
  }

  FUNC_1(VAR_2, "LH_OFFLINE");


  FUNC_8(VAR_2);


  FUNC_7(VAR_2->SecureNAT);
  VAR_2->SecureNAT = ((void*)0);


  FUNC_5(VAR_2->Cedar->LocalBridgeList);
  {
   for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_2->Cedar->LocalBridgeList);VAR_3++)
   {
    LOCALBRIDGE *VAR_5 = FUNC_2(VAR_2->Cedar->LocalBridgeList, VAR_3);

    if (FUNC_10(VAR_5->HubName, VAR_2->Name) == 0)
    {
     FUNC_0(VAR_5->Bridge);
     VAR_5->Bridge = ((void*)0);
    }
   }
  }
  FUNC_12(VAR_2->Cedar->LocalBridgeList);


  VAR_2->Offline = 1;


  FUNC_9(VAR_2);
 }
 FUNC_11(VAR_2->lock_online);

 VAR_2->BeingOffline = 0;

 if (VAR_2->Cedar->Server != ((void*)0))
 {
  FUNC_6(VAR_2);
 }
}
