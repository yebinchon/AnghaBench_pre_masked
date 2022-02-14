
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
typedef struct TYPE_15__ TYPE_13__ ;


typedef int macstr ;
struct TYPE_22__ {int Ref; } ;
struct TYPE_21__ {int Halt; int IsRawIpMode; int Active; scalar_t__ NextWaitTimeForRetry; int HaltEvent; int CurrentMacAddress; int Lock; TYPE_7__* HaltTube; scalar_t__ PublicIP; TYPE_13__* v; } ;
struct TYPE_19__ {int ServerAddress; } ;
struct TYPE_20__ {int IsIpRawMode; int DnsServerIP; TYPE_4__ CurrentDhcpOptionList; TYPE_3__* Ipc; int DeviceName; TYPE_2__* Sock2; int * Sock1; } ;
struct TYPE_18__ {int BroadcastAddress; int DefaultGateway; int SubnetMask; int ClientIPAddress; int MacAddress; } ;
struct TYPE_17__ {TYPE_7__* RecvTube; } ;
struct TYPE_16__ {scalar_t__ DisableIpRawModeSecureNAT; scalar_t__ DisableKernelModeSecureNAT; } ;
struct TYPE_15__ {int UseNat; TYPE_1__* HubOption; } ;
typedef int THREAD ;
typedef TYPE_5__ NATIVE_STACK ;
typedef TYPE_6__ NATIVE_NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int *) ;
 void* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (TYPE_13__*,char*,int ,int *,int *,int *,int *,char*,int *,int *) ;
 int FUNC_9 (TYPE_6__*) ;
 TYPE_5__* FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (void*,int ,scalar_t__,int) ;
 int FUNC_16 (int ,int) ;

void FUNC_17(THREAD *VAR_0, void *VAR_1)
{
 NATIVE_NAT *VAR_2 = (NATIVE_NAT *)VAR_1;
 void *VAR_3 = FUNC_5();

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 while (VAR_2->Halt == 0)
 {
  NATIVE_STACK *VAR_4;

  while (VAR_2->v->UseNat == 0 || VAR_2->v->HubOption == ((void*)0) || (VAR_2->v->HubOption->DisableKernelModeSecureNAT && VAR_2->v->HubOption->DisableIpRawModeSecureNAT))
  {
   if (VAR_2->Halt)
   {
    break;
   }


   FUNC_14(VAR_2->HaltEvent, 1234);
  }

  if (VAR_2->Halt)
  {
   break;
  }


  FUNC_1("NnGetNextInterface Start.\n");

  FUNC_9(VAR_2);

  VAR_4 = FUNC_10(VAR_2);

  if (VAR_4 != ((void*)0))
  {
   char VAR_5[64];

   FUNC_1("NnGetNextInterface Ok: %s\n", VAR_4->DeviceName);

   VAR_2->IsRawIpMode = VAR_4->IsIpRawMode;

   FUNC_6(VAR_2->Lock);
   {
    if (VAR_4->Sock1 != ((void*)0))
    {
     VAR_2->HaltTube = VAR_4->Sock2->RecvTube;

     if (VAR_2->HaltTube != ((void*)0))
     {
      FUNC_0(VAR_2->HaltTube->Ref);
     }
    }
   }
   FUNC_13(VAR_2->Lock);

   FUNC_9(VAR_2);

   VAR_2->PublicIP = FUNC_4(&VAR_4->Ipc->ClientIPAddress);
   VAR_2->Active = 1;


   FUNC_1("NnMainLoop Start.\n");
   FUNC_7(VAR_5, sizeof(VAR_5), VAR_4->Ipc->MacAddress);
   FUNC_8(VAR_2->v, "LH_KERNEL_MODE_START", VAR_4->DeviceName,
    &VAR_4->Ipc->ClientIPAddress, &VAR_4->Ipc->SubnetMask, &VAR_4->Ipc->DefaultGateway, &VAR_4->Ipc->BroadcastAddress,
    VAR_5, &VAR_4->CurrentDhcpOptionList.ServerAddress, &VAR_4->DnsServerIP);
   FUNC_11(VAR_2, VAR_4);
   FUNC_1("NnMainLoop End.\n");

   VAR_2->IsRawIpMode = 0;

   VAR_2->Active = 0;
   VAR_2->PublicIP = 0;


   FUNC_9(VAR_2);


   FUNC_6(VAR_2->Lock);
   {
    if (VAR_2->HaltTube != ((void*)0))
    {
     FUNC_12(VAR_2->HaltTube);
     VAR_2->HaltTube = ((void*)0);
    }
   }
   FUNC_13(VAR_2->Lock);
   FUNC_2(VAR_4);

   FUNC_16(VAR_2->CurrentMacAddress, 6);
  }
  else
  {
   FUNC_1("NnGetNextInterface Failed.\n");
  }


  if (VAR_2->NextWaitTimeForRetry != 0)
  {
   FUNC_15(VAR_3, VAR_2->HaltEvent, VAR_2->NextWaitTimeForRetry, 1000);
  }
 }

 FUNC_3(VAR_3);
}
