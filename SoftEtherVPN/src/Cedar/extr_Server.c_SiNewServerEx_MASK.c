
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int CheckExpires; int Bridge; TYPE_1__* Server; int BuildInfo; int VerString; int ServerStr; } ;
struct TYPE_20__ {int Me; int Weight; void* HubList; int hostname; TYPE_3__* Cedar; } ;
struct TYPE_19__ {int NoHighPriorityProcess; scalar_t__ ServerType; int FarmControllerInited; int DisableNatTraversal; TYPE_3__* Cedar; int EnableVpnOverDns; void* DynListenerDns; int EnableVpnOverIcmp; void* DynListenerIcmp; int NatTGlobalUdpPort; int * AzureClient; void* FarmMemberList; TYPE_2__* Me; int Weight; int FarmController; void* SyslogLock; int ListenIP; int Syslog; int Logger; int Keep; void* TasksFromFarmControllerLock; int StartTime; void* ServerListenerList; int AzureServer; int IsInVm; int ref; void* SaveCfgLock; void* OpenVpnSstpConfigLock; void* lock; int MyRandomKey; } ;
typedef TYPE_1__ SERVER ;
typedef int LISTENER ;
typedef TYPE_2__ FARM_MEMBER ;


 int FUNC_0 (void*,TYPE_2__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int *,int *) ;
 void* FUNC_10 (TYPE_3__*,int *,int ,int) ;
 void* FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_3__*,int ,int ) ;
 int * FUNC_13 (TYPE_3__*,int ,int ,int ,int *,int,int,int *,int ) ;
 void* FUNC_14 () ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int *,int ,int *) ;
 int FUNC_18 () ;
 int VAR_11 ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_22 (TYPE_3__*,char*,...) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_3__*,char*,int) ;
 int FUNC_33 (int) ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int VAR_16 ;
 int FUNC_36 () ;
 int FUNC_37 () ;
 void* FUNC_38 (int) ;

SERVER *FUNC_39(bool VAR_17, bool VAR_18, bool VAR_19)
{
 SERVER *VAR_20;
 LISTENER *VAR_21;
 LISTENER *VAR_22;
 LISTENER *VAR_23;

 FUNC_26(VAR_3);

 VAR_20 = FUNC_38(sizeof(SERVER));

 FUNC_24(0);

 FUNC_29(VAR_20);

 FUNC_3(VAR_20);

 FUNC_19(VAR_20->MyRandomKey, sizeof(VAR_20->MyRandomKey));

 VAR_20->lock = FUNC_14();


 VAR_20->OpenVpnSstpConfigLock = FUNC_14();
 VAR_20->SaveCfgLock = FUNC_14();
 VAR_20->ref = FUNC_16();
 VAR_20->Cedar = FUNC_9(((void*)0), ((void*)0));
 VAR_20->Cedar->Server = VAR_20;





 VAR_20->IsInVm = FUNC_36();
 VAR_20->Cedar->CheckExpires = 1;
 VAR_20->ServerListenerList = FUNC_11(VAR_2);
 VAR_20->StartTime = FUNC_35();
 VAR_20->TasksFromFarmControllerLock = FUNC_14();

 if (VAR_17)
 {
  FUNC_23(VAR_20->Cedar);
 }
 VAR_20->Keep = FUNC_34();


 FUNC_6(VAR_17 == 0 ? VAR_12 : VAR_0);
 VAR_20->Logger = FUNC_15(VAR_17 == 0 ? VAR_12 : VAR_0, VAR_13, VAR_9);

 FUNC_22(VAR_20->Cedar, "L_LINE");
 FUNC_22(VAR_20->Cedar, "LS_START_2", VAR_20->Cedar->ServerStr, VAR_20->Cedar->VerString);
 FUNC_22(VAR_20->Cedar, "LS_START_3", VAR_20->Cedar->BuildInfo);
 FUNC_22(VAR_20->Cedar, "LS_START_UTF8");
 FUNC_22(VAR_20->Cedar, "LS_START_1");




 FUNC_27(VAR_20);

 VAR_20->Syslog = FUNC_17(((void*)0), 0, &VAR_20->Cedar->Server->ListenIP);
 VAR_20->SyslogLock = FUNC_14();

 FUNC_25(VAR_10);



 if (VAR_20->NoHighPriorityProcess == 0)
 {
  FUNC_18();
 }





 if (VAR_20->ServerType == VAR_15)
 {

  VAR_20->FarmController = FUNC_30(VAR_20);
 }
 else if (VAR_20->ServerType == VAR_14)
 {
  FARM_MEMBER *VAR_24;

  VAR_20->FarmMemberList = FUNC_11(((void*)0));

  VAR_24 = FUNC_38(sizeof(FARM_MEMBER));
  VAR_24->Cedar = VAR_20->Cedar;
  FUNC_2(VAR_24->hostname, sizeof(VAR_24->hostname));
  VAR_24->Me = 1;
  VAR_24->HubList = FUNC_11(VAR_1);
  VAR_24->Weight = VAR_20->Weight;

  VAR_20->Me = VAR_24;

  FUNC_0(VAR_20->FarmMemberList, VAR_24);

  FUNC_31(VAR_20);

  VAR_20->FarmControllerInited = 1;
 }


 VAR_21 = FUNC_12(VAR_20->Cedar, VAR_6, 0);
 FUNC_21(VAR_21);


 if (VAR_20->AzureClient != ((void*)0))
 {
  VAR_22 = FUNC_12(VAR_20->Cedar, VAR_7, 0);
  FUNC_21(VAR_22);
 }


 if (VAR_20->DisableNatTraversal == 0 && VAR_20->Cedar->Bridge == 0)
 {
  VAR_23 = FUNC_13(VAR_20->Cedar, VAR_8, 0, VAR_16, ((void*)0), 0, 0,
   &VAR_20->NatTGlobalUdpPort, VAR_11);
  FUNC_21(VAR_23);
 }


 VAR_20->DynListenerIcmp = FUNC_10(VAR_20->Cedar, &VAR_20->EnableVpnOverIcmp, VAR_5, 0);


 VAR_20->DynListenerDns = FUNC_10(VAR_20->Cedar, &VAR_20->EnableVpnOverDns, VAR_4, 53);


 FUNC_28(VAR_20);

 FUNC_32(VAR_20->Cedar, "", 1);

 return VAR_20;
}
