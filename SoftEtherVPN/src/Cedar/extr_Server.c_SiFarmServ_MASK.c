
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int tmp ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {scalar_t__* Ports; int HubList; int TaskPostEvent; int TaskQueue; scalar_t__ Point; scalar_t__ MaxSessions; scalar_t__ Weight; int ConnectedTime; int * ServerCert; int hostname; scalar_t__ NumPort; scalar_t__ Ip; int Cedar; } ;
struct TYPE_18__ {int Cedar; int FarmMemberList; } ;
struct TYPE_17__ {int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ SERVER ;
typedef int PACK ;
typedef TYPE_3__ HUB_LIST ;
typedef TYPE_3__ FARM_MEMBER ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int * FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_18 (int ,char*,char*,...) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_21 (int ,int,char*) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 TYPE_3__* FUNC_24 (int) ;

void FUNC_25(SERVER *VAR_5, SOCK *VAR_6, X *VAR_7, UINT VAR_8, UINT VAR_9, UINT *VAR_10, char *VAR_11, UINT VAR_12, UINT VAR_13, UINT VAR_14)
{
 PACK *VAR_15;
 FARM_MEMBER *VAR_16;
 UINT VAR_17;
 char VAR_18[VAR_2];

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_9 == 0 || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return;
 }

 if (VAR_13 == 0)
 {
  VAR_13 = VAR_1;
 }

 if (VAR_14 == 0)
 {
  VAR_14 = VAR_4;
 }

 if (VAR_8 == 0)
 {


  VAR_8 = FUNC_7(&VAR_6->RemoteIP);
 }

 FUNC_6(VAR_18, sizeof(VAR_18), VAR_8);
 FUNC_18(VAR_5->Cedar, "LS_FARM_SERV_START", VAR_18, VAR_11);


 VAR_15 = FUNC_13();
 FUNC_5(VAR_6, VAR_15);
 FUNC_4(VAR_15);

 FUNC_6(VAR_18, sizeof(VAR_18), VAR_8);
 FUNC_1("Farm Member %s Connected. IP: %s\n", VAR_11, VAR_18);

 FUNC_19(VAR_6, VAR_3);

 VAR_16 = FUNC_24(sizeof(FARM_MEMBER));
 VAR_16->Cedar = VAR_5->Cedar;
 VAR_16->Ip = VAR_8;
 VAR_16->NumPort = VAR_9;
 VAR_16->Ports = VAR_10;
 FUNC_21(VAR_16->hostname, sizeof(VAR_16->hostname), VAR_11);
 VAR_16->ServerCert = VAR_7;
 VAR_16->ConnectedTime = FUNC_22();
 VAR_16->Weight = VAR_13;
 VAR_16->MaxSessions = VAR_14;

 VAR_16->HubList = FUNC_12(VAR_0);
 VAR_16->Point = VAR_12;

 VAR_16->TaskQueue = FUNC_14();
 VAR_16->TaskPostEvent = FUNC_11();


 FUNC_10(VAR_5->FarmMemberList);
 {
  FUNC_0(VAR_5->FarmMemberList, VAR_16);
 }
 FUNC_23(VAR_5->FarmMemberList);


 FUNC_20(VAR_5, VAR_6, VAR_16);


 FUNC_10(VAR_5->FarmMemberList);
 {
  FUNC_2(VAR_5->FarmMemberList, VAR_16);
 }
 FUNC_23(VAR_5->FarmMemberList);

 FUNC_17(VAR_16->TaskQueue);
 FUNC_15(VAR_16->TaskPostEvent);

 for (VAR_17 = 0;VAR_17 < FUNC_9(VAR_16->HubList);VAR_17++)
 {
  HUB_LIST *VAR_19 = FUNC_8(VAR_16->HubList, VAR_17);
  FUNC_3(VAR_19);
 }

 FUNC_16(VAR_16->HubList);

 FUNC_3(VAR_16);

 FUNC_18(VAR_5->Cedar, "LS_FARM_SERV_END", VAR_11);
}
