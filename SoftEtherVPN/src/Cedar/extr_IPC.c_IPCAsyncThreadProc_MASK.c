
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cao ;
typedef int UINT ;
struct TYPE_9__ {scalar_t__ IsL3Mode; } ;
struct TYPE_8__ {int LeaseTime; int ClasslessRoute; int Gateway; int SubnetMask; int ClientAddress; } ;
struct TYPE_7__ {int L3DhcpRenewInterval; int DhcpAllocFailed; int Done; int * SockEvent; int * Ipc; scalar_t__ L3NextDhcpRenewTick; int L3ClientAddressOption; int TubeForDisconnect; TYPE_4__ Param; int ErrorCode; int Cedar; } ;
typedef int THREAD ;
typedef TYPE_1__ IPC_ASYNC ;
typedef int IP ;
typedef TYPE_2__ DHCP_OPTION_LIST ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int * FUNC_5 (int ,TYPE_4__*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;

void FUNC_10(THREAD *VAR_0, void *VAR_1)
{
 IPC_ASYNC *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (IPC_ASYNC *)VAR_1;


 VAR_2->Ipc = FUNC_5(VAR_2->Cedar, &VAR_2->Param, &VAR_2->ErrorCode);

 if (VAR_2->Ipc != ((void*)0))
 {
  if (VAR_2->Param.IsL3Mode)
  {
   DHCP_OPTION_LIST VAR_3;

   FUNC_9(&VAR_3, sizeof(VAR_3));


   FUNC_1("IPCDhcpAllocateIP() start...\n");
   if (FUNC_3(VAR_2->Ipc, &VAR_3, VAR_2->TubeForDisconnect))
   {
    UINT VAR_4;
    IP VAR_5, VAR_6, VAR_7;

    FUNC_1("IPCDhcpAllocateIP() Ok.\n");


    VAR_4 = VAR_3.LeaseTime;
    if (VAR_4 == 0)
    {
     VAR_4 = 600;
    }

    VAR_4 = VAR_4 / 3;

    if (VAR_4 == 0)
    {
     VAR_4 = 1;
    }


    FUNC_0(&VAR_2->L3ClientAddressOption, &VAR_3, sizeof(DHCP_OPTION_LIST));
    VAR_2->L3DhcpRenewInterval = VAR_4 * 1000;


    FUNC_8(&VAR_5, VAR_3.ClientAddress);
    FUNC_8(&VAR_6, VAR_3.SubnetMask);
    FUNC_8(&VAR_7, VAR_3.Gateway);

    FUNC_4(VAR_2->Ipc, &VAR_5, &VAR_6, &VAR_7, &VAR_3.ClasslessRoute);

    VAR_2->L3NextDhcpRenewTick = FUNC_7() + VAR_2->L3DhcpRenewInterval;
   }
   else
   {
    FUNC_1("IPCDhcpAllocateIP() Error.\n");

    VAR_2->DhcpAllocFailed = 1;

    FUNC_2(VAR_2->Ipc);
    VAR_2->Ipc = ((void*)0);
   }
  }
 }


 VAR_2->Done = 1;

 if (VAR_2->SockEvent != ((void*)0))
 {
  FUNC_6(VAR_2->SockEvent);
 }
}
