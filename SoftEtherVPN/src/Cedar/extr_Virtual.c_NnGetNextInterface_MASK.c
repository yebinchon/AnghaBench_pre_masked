
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;


typedef int tmp ;
typedef int opt ;
typedef int gateway_ip ;
typedef int dhcp_ip ;
typedef int client_mask ;
typedef int client_ip ;
typedef scalar_t__ UINT ;
struct TYPE_26__ {int Gateway; int DnsServer2; int DnsServer; int ClasslessRoute; int SubnetMask; int ClientAddress; int ServerAddress; } ;
struct TYPE_25__ {int NextWaitTimeForRetry; scalar_t__ LastInterfaceDeviceHash; scalar_t__ LastHostAddressHash; scalar_t__ LastInterfaceIndex; TYPE_6__* CurrentMacAddress; scalar_t__ FailedCount; int HaltTube2; TYPE_2__* v; } ;
struct TYPE_24__ {int DnsServerIP2; int DnsServerIP; TYPE_12__* Ipc; TYPE_6__ CurrentDhcpOptionList; int DeviceName; int MacAddress; } ;
struct TYPE_23__ {scalar_t__ NumTokens; char** Token; } ;
struct TYPE_22__ {int MacAddress; TYPE_1__* HubOption; } ;
struct TYPE_21__ {scalar_t__ DisableIpRawModeSecureNAT; scalar_t__ DisableKernelModeSecureNAT; } ;
struct TYPE_20__ {int ClientHostname; TYPE_6__* MacAddress; } ;
typedef TYPE_3__ TOKEN_LIST ;
typedef TYPE_4__ NATIVE_STACK ;
typedef TYPE_5__ NATIVE_NAT ;
typedef int IP ;
typedef TYPE_6__ DHCP_OPTION_LIST ;


 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,int ,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 () ;
 TYPE_3__* FUNC_7 (int *,int,int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_9 (TYPE_12__*,TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_12__*,int *,int *,int *,int *) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int ,char*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int VAR_1 ;
 int FUNC_14 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_15 (int *,char*,char*) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (int *,int,int,int,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (TYPE_6__*,int) ;

NATIVE_STACK *FUNC_21(NATIVE_NAT *VAR_6)
{
 NATIVE_STACK *VAR_7 = ((void*)0);
 UINT VAR_8;
 TOKEN_LIST *VAR_9;
 UINT VAR_10;
 char VAR_11[VAR_1];
 char *VAR_12;
 UINT VAR_13;

 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6->NextWaitTimeForRetry = VAR_3 * FUNC_14((VAR_6->FailedCount + 1), VAR_4);


 VAR_9 = FUNC_7(((void*)0),
  !(VAR_6->v->HubOption != ((void*)0) && VAR_6->v->HubOption->DisableKernelModeSecureNAT),
  !(VAR_6->v->HubOption != ((void*)0) && VAR_6->v->HubOption->DisableIpRawModeSecureNAT));

 if (VAR_9 == ((void*)0) || VAR_9->NumTokens == 0)
 {

  FUNC_5(VAR_9);
  VAR_6->FailedCount++;
  return ((void*)0);
 }

 VAR_8 = FUNC_6();
 VAR_13 = FUNC_8();

 if (VAR_6->LastInterfaceDeviceHash != VAR_8 || VAR_6->LastHostAddressHash != VAR_13)
 {

  VAR_6->LastInterfaceIndex = VAR_0;
  VAR_6->FailedCount = 0;
 }

 VAR_6->LastInterfaceDeviceHash = VAR_8;
 VAR_6->LastHostAddressHash = VAR_13;

 if (VAR_6->LastInterfaceIndex == VAR_0)
 {
  VAR_10 = 0;
 }
 else
 {
  VAR_10 = VAR_6->LastInterfaceIndex + 1;
  if (VAR_10 >= VAR_9->NumTokens)
  {
   VAR_10 = 0;
  }
 }

 if ((VAR_10 + 1) == VAR_9->NumTokens)
 {

  VAR_6->LastInterfaceIndex = VAR_0;


  VAR_6->FailedCount++;
 }
 else
 {

  VAR_6->LastInterfaceIndex = VAR_10;
  VAR_6->NextWaitTimeForRetry = 0;
 }

 VAR_12 = VAR_9->Token[VAR_10];

 if (FUNC_12(VAR_5, VAR_12, 1) == 0)
 {

  FUNC_0(VAR_11, sizeof(VAR_11), VAR_6->v->MacAddress, 6);
  VAR_7 = FUNC_15(((void*)0), VAR_12, VAR_11);

  if (VAR_7 != ((void*)0))
  {

   DHCP_OPTION_LIST VAR_14;

   FUNC_1(VAR_6->CurrentMacAddress, VAR_7->Ipc->MacAddress, 6);

   FUNC_20(&VAR_14, sizeof(VAR_14));

   FUNC_0(VAR_11, sizeof(VAR_11), VAR_7->MacAddress, 6);
   FUNC_3(VAR_7->Ipc->ClientHostname, sizeof(VAR_7->Ipc->ClientHostname), VAR_2, VAR_11);
   FUNC_18(VAR_7->Ipc->ClientHostname);

   FUNC_2("IPCDhcpAllocateIP for %s\n", VAR_7->DeviceName);
   if (FUNC_9(VAR_7->Ipc, &VAR_14, VAR_6->HaltTube2))
   {
    char VAR_15[64];
    char VAR_16[64];
    char VAR_17[64];
    char VAR_18[64];

    IP VAR_19;
    IP VAR_20;
    IP VAR_21;

    FUNC_11(VAR_15, sizeof(VAR_15), VAR_14.ClientAddress);
    FUNC_11(VAR_17, sizeof(VAR_17), VAR_14.SubnetMask);
    FUNC_11(VAR_16, sizeof(VAR_16), VAR_14.ServerAddress);
    FUNC_11(VAR_18, sizeof(VAR_18), VAR_14.Gateway);

    FUNC_2("DHCP: client_ip=%s, client_mask=%s, dhcp_ip=%s, gateway_ip=%s\n",
     VAR_15, VAR_17, VAR_16, VAR_18);

    FUNC_1(&VAR_7->CurrentDhcpOptionList, &VAR_14, sizeof(DHCP_OPTION_LIST));


    FUNC_19(&VAR_19, VAR_14.ClientAddress);
    FUNC_19(&VAR_20, VAR_14.SubnetMask);
    FUNC_19(&VAR_21, VAR_14.Gateway);

    FUNC_10(VAR_7->Ipc, &VAR_19, &VAR_20, &VAR_21, &VAR_14.ClasslessRoute);


    FUNC_19(&VAR_7->DnsServerIP, VAR_14.DnsServer);
    FUNC_19(&VAR_7->DnsServerIP2, VAR_14.DnsServer2);
    if (FUNC_13(&VAR_7->DnsServerIP))
    {

     FUNC_17(&VAR_7->DnsServerIP, 8, 8, 8, 8);
    }
    if (FUNC_13(&VAR_7->DnsServerIP2))
    {

     FUNC_17(&VAR_7->DnsServerIP2, 8, 8, 4, 4);
    }



    if (VAR_14.Gateway != 0 &&
     FUNC_16(VAR_7, VAR_6->HaltTube2))
    {

     VAR_6->FailedCount = 0;
     FUNC_2("Connectivity OK.\n");
    }
    else
    {
     FUNC_2("Connectivity Failed.\n");
     FUNC_4(VAR_7);
     VAR_7 = ((void*)0);
    }
   }
   else
   {
    FUNC_2("DHCP Failed.\n");
    FUNC_4(VAR_7);
    VAR_7 = ((void*)0);

    FUNC_20(VAR_6->CurrentMacAddress, sizeof(VAR_6->CurrentMacAddress));
   }
  }
 }

 FUNC_5(VAR_9);

 return VAR_7;
}
