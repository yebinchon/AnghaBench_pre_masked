
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_1__ ;


typedef int server_str ;
typedef int mschap_v2_server_response_20 ;
typedef int macstr ;
typedef int info ;
typedef int X ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_37__ {char* ClientProductName; char* ServerProductName; char* ClientOsName; char* ClientOsVer; char* ClientOsProductId; char* ClientHostname; char* HubName; int ServerIpAddress6; int ClientIpAddress6; int UniqueId; void* ServerPort; void* ServerIpAddress; int ServerHostname; void* ClientPort; void* ClientIpAddress; void* ServerProductBuild; void* ServerProductVer; void* ClientProductBuild; void* ClientProductVer; } ;
typedef TYPE_1__ UCHAR ;
struct TYPE_43__ {int Size; int Buf; } ;
struct TYPE_42__ {scalar_t__ Version; scalar_t__ Build; int ref; } ;
struct TYPE_41__ {int Ref; } ;
struct TYPE_40__ {scalar_t__ Layer; char* ClientHostname; char* HubName; char* UserName; char* Password; int IPv4ReceivedQueue; int ArpTable; int Interrupt; TYPE_2__* Sock; int ConnectionName; int SessionName; TYPE_1__* MacAddress; int MsChapV2_ServerResponse; int Policy; int random; int FlushList; TYPE_6__* Cedar; } ;
struct TYPE_38__ {TYPE_1__* ipv6_addr; } ;
struct TYPE_39__ {scalar_t__ LocalPort; scalar_t__ RemotePort; TYPE_23__ RemoteIP; TYPE_23__ LocalIP; } ;
typedef TYPE_2__ SOCK ;
typedef int PACK ;
typedef TYPE_1__ NODE_INFO ;
typedef TYPE_4__ IPC ;
typedef int IP ;
typedef TYPE_5__ EAP_CLIENT ;
typedef TYPE_6__ CEDAR ;
typedef TYPE_7__ BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,scalar_t__*,scalar_t__*,char*,int) ;
 TYPE_2__* FUNC_12 (TYPE_6__*) ;
 int * FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (int ,int,TYPE_23__*) ;
 void* FUNC_16 (TYPE_23__*) ;
 scalar_t__ FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (TYPE_23__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int) ;
 int VAR_7 ;
 int FUNC_20 (char*,int,TYPE_1__*) ;
 TYPE_7__* FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (int *,TYPE_1__*) ;
 int FUNC_27 (int *,char*,int) ;
 int FUNC_28 (int *,char*,TYPE_1__*,int) ;
 int FUNC_29 (int *,char*,scalar_t__) ;
 int FUNC_30 (int *,char*,int ) ;
 int FUNC_31 (int *,char*,char*) ;
 int FUNC_32 (int *,char*,TYPE_1__*,int) ;
 int FUNC_33 (int *,char*,char*,int) ;
 int * FUNC_34 (char*,char*,int *) ;
 int * FUNC_35 (char*,char*,char*) ;
 int FUNC_36 (int *,int ,int,int ,int,int *) ;
 int FUNC_37 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_38 (TYPE_1__*,int ,int ) ;
 int FUNC_39 (char*,int,char*) ;
 int FUNC_40 (TYPE_7__*,int *,int) ;
 int FUNC_41 (TYPE_7__*,char*) ;
 int FUNC_42 (TYPE_1__*,int) ;
 TYPE_4__* FUNC_43 (int) ;

IPC *FUNC_44(CEDAR *VAR_9, char *VAR_10, char *VAR_11, char *VAR_12, char *VAR_13, char *VAR_14,
   UINT *VAR_15, IP *VAR_16, UINT VAR_17, IP *VAR_18, UINT VAR_19,
   char *VAR_20, char *VAR_21,
   bool VAR_22, UINT VAR_23, EAP_CLIENT *VAR_24, X *VAR_25,
   UINT VAR_26)
{
 IPC *VAR_27;
 UINT VAR_28 = 0;
 SOCK *VAR_29;
 SOCK *VAR_30;
 PACK *VAR_31;
 UINT VAR_32 = VAR_2;
 char VAR_33[VAR_7];
 char VAR_34[30];
 UINT VAR_35, VAR_36;
 UCHAR VAR_37[VAR_8];
 NODE_INFO VAR_38;
 BUF *VAR_39;
 UCHAR VAR_40[20];

 if (VAR_9 == ((void*)0) || VAR_13 == ((void*)0) || VAR_14 == ((void*)0) || VAR_20 == ((void*)0))
 {
  return ((void*)0);
 }
 if (FUNC_17(VAR_10))
 {
  VAR_10 = "InProc VPN Connection";
 }
 if (FUNC_17(VAR_21))
 {
  VAR_21 = "";
 }
 if (VAR_15 == ((void*)0))
 {
  VAR_15 = &VAR_28;
 }

 FUNC_42(VAR_40, sizeof(VAR_40));

 VAR_32 = *VAR_15 = VAR_2;

 VAR_29 = FUNC_12(VAR_9);
 if (VAR_29 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_27 = FUNC_43(sizeof(IPC));

 VAR_27->Cedar = VAR_9;
 FUNC_0(VAR_9->ref);

 VAR_27->Layer = VAR_26;
 if (VAR_27->Layer == 0)
 {
  VAR_27->Layer = VAR_6;
 }

 VAR_27->FlushList = FUNC_25();

 FUNC_39(VAR_27->ClientHostname, sizeof(VAR_27->ClientHostname), VAR_20);
 FUNC_39(VAR_27->HubName, sizeof(VAR_27->HubName), VAR_12);
 FUNC_39(VAR_27->UserName, sizeof(VAR_27->UserName), VAR_13);
 FUNC_39(VAR_27->Password, sizeof(VAR_27->Password), VAR_14);


 VAR_30 = FUNC_2(VAR_29, VAR_16, VAR_17, VAR_18, VAR_19);
 if (VAR_30 == ((void*)0))
 {
  goto LABEL_ERROR;
 }


 if (FUNC_1(VAR_30) == 0)
 {
  VAR_32 = VAR_1;
  goto LABEL_ERROR;
 }

 VAR_31 = FUNC_13(VAR_30);
 if (VAR_31 == ((void*)0))
 {
  VAR_32 = VAR_1;
  goto LABEL_ERROR;
 }

 VAR_32 = FUNC_10(VAR_31);
 if (VAR_32 != VAR_3)
 {
  FUNC_9(VAR_31);
  goto LABEL_ERROR;
 }

 if (FUNC_11(VAR_31, VAR_27->random, &VAR_35, &VAR_36, VAR_33, sizeof(VAR_33)) == 0)
 {
  FUNC_9(VAR_31);
  VAR_32 = VAR_1;
  goto LABEL_ERROR;
 }

 FUNC_9(VAR_31);


 if (VAR_25 != ((void*)0))
 {
  VAR_31 = FUNC_34(VAR_12, VAR_13, VAR_25);
 }
 else
 {
  VAR_31 = FUNC_35(VAR_12, VAR_13, VAR_14);
 }

 if (VAR_31 == ((void*)0))
 {
  VAR_32 = VAR_0;
  goto LABEL_ERROR;
 }

 FUNC_31(VAR_31, "hello", VAR_10);
 FUNC_29(VAR_31, "client_ver", VAR_9->Version);
 FUNC_29(VAR_31, "client_build", VAR_9->Build);
 FUNC_29(VAR_31, "max_connection", 1);
 FUNC_29(VAR_31, "use_encrypt", 0);
 FUNC_29(VAR_31, "use_compress", 0);
 FUNC_29(VAR_31, "half_connection", 0);
 FUNC_29(VAR_31, "adjust_mss", VAR_23);
 FUNC_27(VAR_31, "require_bridge_routing_mode", VAR_22);
 FUNC_27(VAR_31, "require_monitor_mode", 0);
 FUNC_27(VAR_31, "qos", 0);

 if (VAR_24 != ((void*)0))
 {
  UINT64 VAR_41 = (UINT64)VAR_24;
  FUNC_30(VAR_31, "release_me_eap_client", VAR_41);

  FUNC_0(VAR_24->Ref);
 }


 VAR_39 = FUNC_21();
 FUNC_40(VAR_39, VAR_16, sizeof(IP));
 FUNC_41(VAR_39, VAR_10);
 FUNC_41(VAR_39, VAR_21);

 FUNC_38(VAR_37, VAR_39->Buf, VAR_39->Size);

 FUNC_7(VAR_39);

 FUNC_28(VAR_31, "unique_id", VAR_37, VAR_8);

 FUNC_31(VAR_31, "inproc_postfix", VAR_11);
 FUNC_31(VAR_31, "inproc_cryptname", VAR_21);
 FUNC_29(VAR_31, "inproc_layer", VAR_27->Layer);


 FUNC_42(&VAR_38, sizeof(VAR_38));
 FUNC_39(VAR_38.ClientProductName, sizeof(VAR_38.ClientProductName), VAR_10);
 VAR_38.ClientProductVer = FUNC_6(VAR_9->Version);
 VAR_38.ClientProductBuild = FUNC_6(VAR_9->Build);
 FUNC_39(VAR_38.ServerProductName, sizeof(VAR_38.ServerProductName), VAR_33);
 VAR_38.ServerProductVer = FUNC_6(VAR_35);
 VAR_38.ServerProductBuild = FUNC_6(VAR_36);
 FUNC_39(VAR_38.ClientOsName, sizeof(VAR_38.ClientOsName), VAR_10);
 FUNC_39(VAR_38.ClientOsVer, sizeof(VAR_38.ClientOsVer), "-");
 FUNC_39(VAR_38.ClientOsProductId, sizeof(VAR_38.ClientOsProductId), "-");
 VAR_38.ClientIpAddress = FUNC_16(&VAR_30->LocalIP);
 VAR_38.ClientPort = FUNC_6(VAR_30->LocalPort);
 FUNC_39(VAR_38.ClientHostname, sizeof(VAR_38.ClientHostname), VAR_27->ClientHostname);
 FUNC_15(VAR_38.ServerHostname, sizeof(VAR_38.ServerHostname), &VAR_30->RemoteIP);
 VAR_38.ServerIpAddress = FUNC_16(&VAR_30->RemoteIP);
 VAR_38.ServerPort = FUNC_6(VAR_30->RemotePort);
 FUNC_39(VAR_38.HubName, sizeof(VAR_38.HubName), VAR_12);
 FUNC_3(VAR_38.UniqueId, VAR_37, 16);
 if (FUNC_18(&VAR_30->LocalIP))
 {
  FUNC_3(VAR_38.ClientIpAddress6, VAR_30->LocalIP.ipv6_addr, 16);
 }
 if (FUNC_18(&VAR_30->RemoteIP))
 {
  FUNC_3(VAR_38.ServerIpAddress6, VAR_30->RemoteIP.ipv6_addr, 16);
 }
 FUNC_26(VAR_31, &VAR_38);

 if (FUNC_14(VAR_30, VAR_31) == 0)
 {
  FUNC_9(VAR_31);
  VAR_32 = VAR_1;
  goto LABEL_ERROR;
 }

 FUNC_9(VAR_31);


 VAR_31 = FUNC_13(VAR_30);
 if (VAR_31 == ((void*)0))
 {
  VAR_32 = VAR_1;
  goto LABEL_ERROR;
 }

 VAR_32 = FUNC_10(VAR_31);
 if (VAR_32 != VAR_3)
 {
  FUNC_9(VAR_31);
  goto LABEL_ERROR;
 }

 if (FUNC_36(VAR_31, VAR_27->SessionName, sizeof(VAR_27->SessionName),
  VAR_27->ConnectionName, sizeof(VAR_27->ConnectionName), &VAR_27->Policy) == 0)
 {
  VAR_32 = VAR_4;
  FUNC_9(VAR_31);
  goto LABEL_ERROR;
 }

 if (FUNC_32(VAR_31, "IpcMacAddress", VAR_27->MacAddress, 6) == 0 || FUNC_19(VAR_27->MacAddress, 6))
 {
  VAR_32 = VAR_4;
  FUNC_9(VAR_31);
  goto LABEL_ERROR;
 }

 if (FUNC_32(VAR_31, "IpcMsChapV2ServerResponse", VAR_40, sizeof(VAR_40)))
 {
  FUNC_3(VAR_27->MsChapV2_ServerResponse, VAR_40, sizeof(VAR_40));
 }

 FUNC_33(VAR_31, "IpcHubName", VAR_27->HubName, sizeof(VAR_27->HubName));
 FUNC_4("IPC Hub Name: %s\n", VAR_27->HubName);

 FUNC_20(VAR_34, sizeof(VAR_34), VAR_27->MacAddress);

 FUNC_4("IPC: Session = %s, Connection = %s, Mac = %s\n", VAR_27->SessionName, VAR_27->ConnectionName, VAR_34);

 FUNC_9(VAR_31);

 FUNC_37(VAR_29);
 VAR_27->Sock = VAR_30;

 FUNC_4("NewIPC() Succeed.\n");

 VAR_27->Interrupt = FUNC_22();


 VAR_27->ArpTable = FUNC_23(VAR_5);


 VAR_27->IPv4ReceivedQueue = FUNC_24();

 return VAR_27;

LABEL_ERROR:
 FUNC_4("NewIPC() Failed: Err = %u\n", VAR_32);
 FUNC_5(VAR_30);
 FUNC_37(VAR_30);
 FUNC_37(VAR_29);
 FUNC_8(VAR_27);
 *VAR_15 = VAR_32;
 return ((void*)0);
}
