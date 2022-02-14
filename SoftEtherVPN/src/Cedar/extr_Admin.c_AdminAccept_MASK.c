
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int hubname ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_27__ {int ServerAdmin; char* HubName; int * LogFileList; TYPE_4__* Rpc; int ClientWinVer; int ClientBuild; TYPE_3__* Server; } ;
struct TYPE_26__ {TYPE_3__* Server; } ;
struct TYPE_25__ {int Name; TYPE_6__* Cedar; int ClientBuild; int Random; TYPE_2__* FirstSock; } ;
struct TYPE_24__ {char* Name; } ;
struct TYPE_23__ {scalar_t__ ServerType; } ;
struct TYPE_21__ {int* addr; } ;
struct TYPE_22__ {TYPE_1__ RemoteIP; } ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ SERVER ;
typedef int RPC_WINVER ;
typedef TYPE_4__ RPC ;
typedef int PACK ;
typedef TYPE_5__ CONNECTION ;
typedef TYPE_6__ CEDAR ;
typedef TYPE_7__ ADMIN ;


 scalar_t__ FUNC_0 (TYPE_6__*,int ,int *,char*,int,int*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int VAR_7 ;
 int FUNC_10 (int *,int *) ;
 int VAR_8 ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*,int *) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *,char*,char*,int) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (TYPE_6__*,char*,int ,...) ;
 int FUNC_20 (int *,int *,int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_22 (TYPE_2__*,int ,TYPE_7__*) ;
 int FUNC_23 (char*,int,char*) ;
 scalar_t__ FUNC_24 (char*) ;
 TYPE_7__* FUNC_25 (int) ;

UINT FUNC_26(CONNECTION *VAR_11, PACK *VAR_12)
{
 ADMIN *VAR_13;
 UCHAR VAR_14[VAR_10];
 UCHAR VAR_15[VAR_10];
 UCHAR VAR_16[VAR_10];
 char VAR_17[VAR_8 + 1];
 CEDAR *VAR_18;
 SOCK *VAR_19;
 RPC *VAR_20;
 UINT VAR_21;
 SERVER *VAR_22 = ((void*)0);
 RPC_WINVER VAR_23;
 bool VAR_24;
 bool VAR_25 = 0;

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_18 = VAR_11->Cedar;
 VAR_19 = VAR_11->FirstSock;

 if (VAR_18 != ((void*)0))
 {
  VAR_22 = VAR_18->Server;
 }

 VAR_24 = FUNC_13(VAR_12, "accept_empty_password");


 FUNC_10(&VAR_23, VAR_12);


 if (FUNC_16(VAR_12, "hubname", VAR_17, sizeof(VAR_17)) == 0)
 {

  FUNC_23(VAR_17, sizeof(VAR_17), "");
 }


 if (FUNC_1(VAR_19, VAR_17) == 0)
 {
  FUNC_19(VAR_11->Cedar, "LA_IP_DENIED", VAR_11->Name);
  return VAR_2;
 }


 if (FUNC_15(VAR_12, "secure_password") != VAR_10)
 {

  return VAR_6;
 }
 FUNC_14(VAR_12, "secure_password", VAR_14);

 if (FUNC_24(VAR_17) == 0)
 {

  FUNC_19(VAR_11->Cedar, "LA_CONNECTED_1", VAR_11->Name);
 }
 else
 {

  if (VAR_22 != ((void*)0) && VAR_22->ServerType == VAR_9)
  {

   return VAR_3;
  }
  FUNC_19(VAR_11->Cedar, "LA_CONNECTED_2", VAR_11->Name, VAR_17);
 }


 VAR_21 = FUNC_0(VAR_18, VAR_11->Random, VAR_14,
  FUNC_24(VAR_17) != 0 ? VAR_17 : ((void*)0), VAR_24, &VAR_25);

 if (VAR_21 != VAR_4)
 {

  FUNC_19(VAR_11->Cedar, "LA_ERROR", VAR_11->Name, FUNC_7(VAR_21), VAR_21);
  return VAR_21;
 }

 FUNC_19(VAR_11->Cedar, "LA_OK", VAR_11->Name);

 FUNC_8(VAR_15, "");
 FUNC_20(VAR_16, VAR_15, VAR_11->Random);

 if (FUNC_2(VAR_16, VAR_14, VAR_10) == 0)
 {
  if (VAR_19->RemoteIP.addr[0] != 127)
  {

   if (FUNC_24(VAR_17) != 0)
   {
    return VAR_5;
   }
  }
 }



 VAR_12 = FUNC_11();
 if (VAR_24 && VAR_25)
 {
  FUNC_12(VAR_12, "empty_password", 1);
 }
 FUNC_9(VAR_19, VAR_12);
 FUNC_6(VAR_12);


 VAR_13 = FUNC_25(sizeof(ADMIN));
 VAR_13->ServerAdmin = ((FUNC_24(VAR_17) == 0) ? 1 : 0);
 VAR_13->HubName = (FUNC_24(VAR_17) != 0 ? VAR_17 : ((void*)0));
 VAR_13->Server = VAR_11->Cedar->Server;
 VAR_13->ClientBuild = VAR_11->ClientBuild;

 FUNC_3(&VAR_13->ClientWinVer, &VAR_23, sizeof(RPC_WINVER));


 FUNC_21(VAR_19, VAR_7);


 VAR_20 = FUNC_22(VAR_19, VAR_0, VAR_13);

 VAR_13->Rpc = VAR_20;

 FUNC_19(VAR_11->Cedar, "LA_RPC_START", VAR_11->Name, VAR_20->Name);

 FUNC_18(VAR_20);
 FUNC_17(VAR_20);

 if (VAR_13->LogFileList != ((void*)0))
 {

  FUNC_5(VAR_13->LogFileList);
 }


 FUNC_4(VAR_13);

 return VAR_4;
}
