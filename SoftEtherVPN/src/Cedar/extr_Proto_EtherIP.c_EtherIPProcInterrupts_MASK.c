
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_22__ {int LockSettings; int Services; } ;
struct TYPE_21__ {int Size; int * Buf; } ;
struct TYPE_20__ {int Password; int UserName; int HubName; } ;
struct TYPE_17__ {int Password; int UserName; int HubName; } ;
struct TYPE_19__ {scalar_t__ LastEtherIPSettingVerNo; char* ClientId; scalar_t__ LastConnectFailedTick; scalar_t__ Now; int CurrentIPSecServiceSetting; int L2TPv3; int * Ipc; int SendPacketList; int SockEvent; int Lock; int Ref; int * IpcConnectThread; TYPE_3__* Ike; TYPE_7__* IPsec; TYPE_2__ CurrentEtherIPIdSetting; } ;
struct TYPE_18__ {int ThreadList; TYPE_1__* IPsec; } ;
struct TYPE_16__ {scalar_t__ EtherIPIdListSettingVerNo; } ;
typedef int IPSEC_SERVICES ;
typedef TYPE_4__ ETHERIP_SERVER ;
typedef TYPE_5__ ETHERIP_ID ;
typedef TYPE_6__ BLOCK ;


 int FUNC_0 (int ,TYPE_6__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int* FUNC_3 (int *,int) ;
 int FUNC_4 (int*,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_6__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int* FUNC_13 (int) ;
 TYPE_6__* FUNC_14 (int*,int,int ) ;
 int * FUNC_15 (int ,TYPE_4__*) ;
 int FUNC_16 (TYPE_7__*,TYPE_5__*,char*) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;

void FUNC_20(ETHERIP_SERVER *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }


 if (VAR_2->Ipc != ((void*)0))
 {
  if (VAR_2->Ike->IPsec->EtherIPIdListSettingVerNo != VAR_2->LastEtherIPSettingVerNo)
  {
   ETHERIP_ID VAR_3;
   bool VAR_4 = 1;

   VAR_2->LastEtherIPSettingVerNo = VAR_2->Ike->IPsec->EtherIPIdListSettingVerNo;

   if (FUNC_16(VAR_2->IPsec, &VAR_3, VAR_2->ClientId) == 0 &&
    FUNC_16(VAR_2->IPsec, &VAR_3, "*") == 0)
   {
    VAR_4 = 0;
   }
   else
   {
    if (FUNC_18(VAR_2->CurrentEtherIPIdSetting.HubName, VAR_3.HubName) != 0 ||
     FUNC_18(VAR_2->CurrentEtherIPIdSetting.UserName, VAR_3.UserName) != 0 ||
     FUNC_17(VAR_2->CurrentEtherIPIdSetting.Password, VAR_3.Password) != 0)
    {
     VAR_4 = 0;
    }
   }

   if (VAR_4 == 0)
   {

    FUNC_7(VAR_2->Ipc);
    VAR_2->Ipc = ((void*)0);

    FUNC_5(VAR_2, "LE_RECONNECT");
   }
  }
 }


 FUNC_12(VAR_2->Lock);
 {
  if (VAR_2->Ipc == ((void*)0))
  {
   if (VAR_2->IpcConnectThread == ((void*)0))
   {
    if ((VAR_2->LastConnectFailedTick == 0) || ((VAR_2->LastConnectFailedTick + (UINT64)VAR_0) <= VAR_2->Now))
    {
     FUNC_12(VAR_2->IPsec->LockSettings);
     {
      FUNC_4(&VAR_2->CurrentIPSecServiceSetting, &VAR_2->IPsec->Services, sizeof(IPSEC_SERVICES));
     }
     FUNC_19(VAR_2->IPsec->LockSettings);

     VAR_2->IpcConnectThread = FUNC_15(VAR_1, VAR_2);
     FUNC_2(VAR_2->Ike->ThreadList, VAR_2->IpcConnectThread);
     FUNC_1(VAR_2->Ref);
    }
   }
  }
 }
 FUNC_19(VAR_2->Lock);

 if (VAR_2->Ipc != ((void*)0))
 {

  FUNC_10(VAR_2->Ipc, VAR_2->SockEvent);


  FUNC_8(VAR_2->Ipc);


  while (1)
  {
   BLOCK *VAR_5 = FUNC_9(VAR_2->Ipc);
   UCHAR *VAR_6;
   UINT VAR_7;

   if (VAR_5 == ((void*)0))
   {
    break;
   }

   if (VAR_5->Size >= 14)
   {
    BLOCK *VAR_8;



    if (VAR_2->L2TPv3 == 0)
    {
     VAR_7 = VAR_5->Size + 2;
     VAR_6 = FUNC_13(VAR_7);

     VAR_6[0] = 0x30;
     VAR_6[1] = 0x00;

     FUNC_4(VAR_6 + 2, VAR_5->Buf, VAR_5->Size);
    }
    else
    {
     VAR_6 = FUNC_3(VAR_5->Buf, VAR_5->Size);
     VAR_7 = VAR_5->Size;
    }

    VAR_8 = FUNC_14(VAR_6, VAR_7, 0);

    FUNC_0(VAR_2->SendPacketList, VAR_8);
   }

   FUNC_6(VAR_5);
  }

  if (FUNC_11(VAR_2->Ipc) == 0)
  {

   FUNC_7(VAR_2->Ipc);
   VAR_2->Ipc = ((void*)0);
  }
 }
}
