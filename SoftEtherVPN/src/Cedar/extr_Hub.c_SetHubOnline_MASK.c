
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_16__ {scalar_t__ Type; int Offline; TYPE_2__* Cedar; int lock_online; int Name; int SecureNATOption; int * SecureNAT; scalar_t__ EnableSecureNAT; } ;
struct TYPE_15__ {int LimitBroadcast; int TapMacAddress; int TapMode; int Monitor; int Local; int DeviceName; int * Bridge; int HubName; } ;
struct TYPE_14__ {TYPE_1__* Server; int LocalBridgeList; } ;
struct TYPE_13__ {scalar_t__ ServerType; } ;
typedef TYPE_3__ LOCALBRIDGE ;
typedef TYPE_4__ HUB ;


 int * FUNC_0 (TYPE_4__*,int ,int *,int ,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(HUB *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Cedar->Server != ((void*)0) && VAR_2->Cedar->Server->ServerType == VAR_1)
 {
  if (VAR_2->Type == VAR_0)
  {
   VAR_3 = 1;
  }
 }

 FUNC_4(VAR_2->lock_online);
 {
  if (VAR_2->Offline == 0)
  {
   FUNC_10(VAR_2->lock_online);
   return;
  }
  FUNC_1(VAR_2, "LH_ONLINE");


  FUNC_8(VAR_2);


  if (VAR_2->EnableSecureNAT)
  {
   if (VAR_2->SecureNAT == ((void*)0))
   {
    if (VAR_3 == 0)
    {
     VAR_2->SecureNAT = FUNC_7(VAR_2, VAR_2->SecureNATOption);
    }
   }
  }


  if (VAR_2->Type != VAR_0)
  {
   FUNC_5(VAR_2->Cedar->LocalBridgeList);
   {
    UINT VAR_4;
    for (VAR_4 = 0;VAR_4 < FUNC_3(VAR_2->Cedar->LocalBridgeList);VAR_4++)
    {
     LOCALBRIDGE *VAR_5 = FUNC_2(VAR_2->Cedar->LocalBridgeList, VAR_4);

     if (FUNC_9(VAR_5->HubName, VAR_2->Name) == 0)
     {
      if (VAR_5->Bridge == ((void*)0))
      {
       VAR_5->Bridge = FUNC_0(VAR_2, VAR_5->DeviceName, ((void*)0), VAR_5->Local, VAR_5->Monitor,
        VAR_5->TapMode, VAR_5->TapMacAddress, VAR_5->LimitBroadcast, VAR_5);
      }
     }
    }
   }
   FUNC_11(VAR_2->Cedar->LocalBridgeList);
  }

  VAR_2->Offline = 0;
 }
 FUNC_10(VAR_2->lock_online);

 if (VAR_2->Cedar->Server != ((void*)0))
 {
  FUNC_6(VAR_2);
 }
}
