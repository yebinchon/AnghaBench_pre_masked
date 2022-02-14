
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int OsType; } ;
struct TYPE_14__ {int LocalBridgeList; int HubList; } ;
struct TYPE_13__ {char* Name; scalar_t__ Type; int Offline; int lock_online; int ref; } ;
struct TYPE_12__ {char* DeviceName; char* HubName; int TapMode; int Local; int LimitBroadcast; int Monitor; int TapMacAddress; int * Bridge; } ;
typedef TYPE_1__ LOCALBRIDGE ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,char*,int *,int,int,int,int ,int,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 TYPE_7__* FUNC_5 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (char*,int) ;
 void* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 TYPE_1__* FUNC_18 (int) ;

void FUNC_19(CEDAR *VAR_1, char *VAR_2, char *VAR_3, bool VAR_4, bool VAR_5, bool VAR_6, char *VAR_7, bool VAR_8)
{
 UINT VAR_9;
 HUB *VAR_10 = ((void*)0);
 LOCALBRIDGE *VAR_11 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (FUNC_12(FUNC_5()->OsType) == 0)
 {
  VAR_6 = 0;
 }

 FUNC_11(VAR_1->HubList);
 {
  FUNC_11(VAR_1->LocalBridgeList);
  {
   bool VAR_12 = 0;


   for (VAR_9 = 0;VAR_9 < FUNC_9(VAR_1->LocalBridgeList);VAR_9++)
   {
    LOCALBRIDGE *VAR_13 = FUNC_8(VAR_1->LocalBridgeList, VAR_9);
    if (FUNC_14(VAR_13->DeviceName, VAR_3) == 0)
    {
     if (FUNC_14(VAR_13->HubName, VAR_2) == 0)
     {
      if (VAR_13->TapMode == VAR_6)
      {
       VAR_12 = 1;
      }
     }
    }
   }

   if (VAR_12 == 0)
   {

    VAR_11 = FUNC_18(sizeof(LOCALBRIDGE));
    FUNC_15(VAR_11->HubName, sizeof(VAR_11->HubName), VAR_2);
    FUNC_15(VAR_11->DeviceName, sizeof(VAR_11->DeviceName), VAR_3);
    VAR_11->Bridge = ((void*)0);
    VAR_11->Local = VAR_4;
    VAR_11->TapMode = VAR_6;
    VAR_11->LimitBroadcast = VAR_8;
    VAR_11->Monitor = VAR_5;
    if (VAR_11->TapMode)
    {
     if (VAR_7 != ((void*)0) && FUNC_7(VAR_7, 6) == 0)
     {
      FUNC_3(VAR_11->TapMacAddress, VAR_7, 6);
     }
     else
     {
      FUNC_4(VAR_11->TapMacAddress);
     }
    }

    FUNC_0(VAR_1->LocalBridgeList, VAR_11);


    for (VAR_9 = 0;VAR_9 < FUNC_9(VAR_1->HubList);VAR_9++)
    {
     HUB *VAR_14 = FUNC_8(VAR_1->HubList, VAR_9);
     if (FUNC_14(VAR_14->Name, VAR_11->HubName) == 0)
     {
      VAR_10 = VAR_14;
      FUNC_1(VAR_10->ref);
      break;
     }
    }
   }
  }
  FUNC_17(VAR_1->LocalBridgeList);
 }
 FUNC_17(VAR_1->HubList);


 if (VAR_10 != ((void*)0) && VAR_11 != ((void*)0) && VAR_10->Type != VAR_0)
 {
  FUNC_10(VAR_10->lock_online);
  {
   if (VAR_10->Offline == 0)
   {
    FUNC_11(VAR_1->LocalBridgeList);
    {
     if (FUNC_6(VAR_1->LocalBridgeList, VAR_11))
     {
      if (VAR_11->Bridge == ((void*)0))
      {
       VAR_11->Bridge = FUNC_2(VAR_10, VAR_11->DeviceName, ((void*)0), VAR_11->Local, VAR_11->Monitor, VAR_11->TapMode, VAR_11->TapMacAddress, VAR_11->LimitBroadcast, VAR_11);
      }
     }
    }
    FUNC_17(VAR_1->LocalBridgeList);
   }
  }
  FUNC_16(VAR_10->lock_online);
 }

 FUNC_13(VAR_10);
}
