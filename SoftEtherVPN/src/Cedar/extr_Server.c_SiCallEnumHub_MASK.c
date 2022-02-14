
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int name ;
typedef int hubname ;
struct TYPE_31__ {TYPE_1__* Group; int lock; int Traffic; } ;
typedef TYPE_2__ USER ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_35__ {int * HubList; scalar_t__ AssignedClientLicense; scalar_t__ AssignedBridgeLicense; int TrafficLock; int Traffic; scalar_t__ CurrentTcpConnections; scalar_t__ CurrentSessions; } ;
struct TYPE_34__ {scalar_t__ SystemId; int * RandomKey; void* AssignedClientLicense; void* AssignedBridgeLicense; int Traffic; void* NumTcpConnections; void* MaxSessions; void* NumSessions; void* Point; int hostname; int * HubList; scalar_t__ Me; } ;
struct TYPE_33__ {int DynamicHub; char* Name; scalar_t__ Type; int Offline; scalar_t__ LastCommTime; int TrafficLock; int Traffic; int lock; scalar_t__ NumMacTables; scalar_t__ NumIpTables; scalar_t__ NumSessionsBridge; scalar_t__ NumSessionsClient; scalar_t__ NumSessions; TYPE_6__* FarmMember; int * IpTable; int MacHashTable; int * SessionList; } ;
struct TYPE_32__ {int * FarmMemberList; int MyRandomKey; TYPE_7__* Cedar; } ;
struct TYPE_30__ {int lock; int Traffic; } ;
typedef int TRAFFIC ;
typedef TYPE_3__ SERVER ;
typedef int PACK ;
typedef int LIST ;
typedef TYPE_4__ HUB_LIST ;
typedef TYPE_4__ HUB ;
typedef TYPE_6__ FARM_MEMBER ;
typedef TYPE_7__ CEDAR ;


 TYPE_2__* FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;
 TYPE_4__* FUNC_12 (TYPE_7__*,char*) ;
 void* FUNC_13 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,scalar_t__) ;
 int FUNC_17 (int *,int) ;
 void* FUNC_18 (int *,scalar_t__) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int VAR_2 ;
 int * FUNC_23 (int *) ;
 int * FUNC_24 () ;
 int FUNC_25 (int *,char*,int *,int,scalar_t__,scalar_t__) ;
 int FUNC_26 (int *,char*,scalar_t__) ;
 int FUNC_27 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_28 (int *,char*,int *) ;
 int FUNC_29 (int *,char*) ;
 scalar_t__ FUNC_30 (int *,char*) ;
 void* FUNC_31 (int *,char*) ;
 scalar_t__ FUNC_32 (int *,char*) ;
 scalar_t__ FUNC_33 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_34 (int *,char*,scalar_t__) ;
 int FUNC_35 (int *,char*,char*,int,scalar_t__) ;
 int FUNC_36 (TYPE_4__*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_39 (TYPE_3__*,TYPE_6__*,TYPE_4__*) ;
 int * FUNC_40 (TYPE_6__*,int *,char*) ;
 int FUNC_41 (TYPE_3__*,char*) ;
 void* FUNC_42 (TYPE_3__*) ;
 int FUNC_43 (TYPE_3__*,char*) ;
 int FUNC_44 (char*,int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (int *) ;
 TYPE_4__* FUNC_48 (int) ;

void FUNC_49(SERVER *VAR_5, FARM_MEMBER *VAR_6)
{
 CEDAR *VAR_7;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 VAR_7 = VAR_5->Cedar;

 if (VAR_6->Me)
 {


  FUNC_22(VAR_6->HubList);
  {

   UINT VAR_8;
   LIST *VAR_9 = FUNC_23(((void*)0));
   for (VAR_8 = 0;VAR_8 < FUNC_19(VAR_6->HubList);VAR_8++)
   {
    HUB_LIST *VAR_10 = FUNC_18(VAR_6->HubList, VAR_8);
    if (VAR_10->DynamicHub == 0)
    {
     FUNC_3(VAR_9, VAR_10);
    }
   }


   for (VAR_8 = 0;VAR_8 < FUNC_19(VAR_9);VAR_8++)
   {
    HUB_LIST *VAR_11 = FUNC_18(VAR_9, VAR_8);
    FUNC_10(VAR_11);
    FUNC_8(VAR_6->HubList, VAR_11);
   }
   FUNC_37(VAR_9);


   VAR_9 = FUNC_23(((void*)0));
   for (VAR_8 = 0;VAR_8 < FUNC_19(VAR_6->HubList);VAR_8++)
   {
    HUB_LIST *VAR_12 = FUNC_18(VAR_6->HubList, VAR_8);
    if (VAR_12->DynamicHub == 1)
    {
     FUNC_22(VAR_7->HubList);
     {
      HUB *VAR_13 = FUNC_12(VAR_5->Cedar, VAR_12->Name);
      if (VAR_13 != ((void*)0))
      {
       if (FUNC_6(VAR_13->NumSessions) == 0 || VAR_13->Type != VAR_0)
       {
        FUNC_3(VAR_9, VAR_12);
       }
       FUNC_36(VAR_13);
      }
     }
     FUNC_47(VAR_7->HubList);
    }
   }

   for (VAR_8 = 0;VAR_8 < FUNC_19(VAR_9);VAR_8++)
   {
    HUB_LIST *VAR_14 = FUNC_18(VAR_9, VAR_8);
    FUNC_7("Delete HUB: %s\n", VAR_14->Name);
    FUNC_10(VAR_14);
    FUNC_8(VAR_6->HubList, VAR_14);
   }

   FUNC_37(VAR_9);


   FUNC_22(VAR_7->HubList);
   {
    for (VAR_8 = 0;VAR_8 < FUNC_19(VAR_7->HubList);VAR_8++)
    {
     HUB *VAR_15 = FUNC_18(VAR_7->HubList, VAR_8);
     if (VAR_15->Offline == 0)
     {
      if (VAR_15->Type == VAR_1)
      {
       HUB_LIST *VAR_16 = FUNC_48(sizeof(HUB_LIST));
       VAR_16->FarmMember = VAR_6;
       VAR_16->DynamicHub = 0;
       FUNC_44(VAR_16->Name, sizeof(VAR_16->Name), VAR_15->Name);
       FUNC_3(VAR_6->HubList, VAR_16);

       FUNC_22(VAR_15->SessionList);
       {
        VAR_16->NumSessions = FUNC_19(VAR_15->SessionList);
        VAR_16->NumSessionsBridge = FUNC_6(VAR_15->NumSessionsBridge);
        VAR_16->NumSessionsClient = FUNC_6(VAR_15->NumSessionsClient);
       }
       FUNC_47(VAR_15->SessionList);

       FUNC_21(VAR_15->MacHashTable);
       {
        VAR_16->NumMacTables = FUNC_14(VAR_15->MacHashTable);
       }
       FUNC_46(VAR_15->MacHashTable);

       FUNC_22(VAR_15->IpTable);
       {
        VAR_16->NumIpTables = FUNC_19(VAR_15->IpTable);
       }
       FUNC_47(VAR_15->IpTable);
      }
     }
    }
   }
   FUNC_47(VAR_7->HubList);
  }
  FUNC_47(VAR_6->HubList);


  VAR_6->Point = FUNC_42(VAR_5);
  VAR_6->NumSessions = FUNC_6(VAR_5->Cedar->CurrentSessions);
  VAR_6->MaxSessions = FUNC_13(VAR_5, "i_max_sessions");
  VAR_6->NumTcpConnections = FUNC_6(VAR_5->Cedar->CurrentTcpConnections);

  FUNC_20(VAR_5->Cedar->TrafficLock);
  {
   FUNC_5(&VAR_6->Traffic, VAR_5->Cedar->Traffic, sizeof(TRAFFIC));
  }
  FUNC_45(VAR_5->Cedar->TrafficLock);

  VAR_6->AssignedBridgeLicense = FUNC_6(VAR_5->Cedar->AssignedBridgeLicense);
  VAR_6->AssignedClientLicense = FUNC_6(VAR_5->Cedar->AssignedClientLicense);

  FUNC_5(VAR_6->RandomKey, VAR_5->MyRandomKey, VAR_3);


  FUNC_7("Server %s: Point %u\n", VAR_6->hostname, VAR_6->Point);
 }
 else
 {

  PACK *VAR_17 = FUNC_24();
  UINT VAR_18, VAR_19, VAR_20;
  LIST *VAR_21 = FUNC_23(((void*)0));

  VAR_19 = 0;

  for (VAR_18 = 0;VAR_18 < FUNC_19(VAR_5->FarmMemberList);VAR_18++)
  {
   FARM_MEMBER *VAR_22 = FUNC_18(VAR_5->FarmMemberList, VAR_18);

   if (FUNC_17(VAR_22->RandomKey, VAR_3) == 0 && VAR_22->SystemId != 0)
   {
    VAR_19++;
   }
  }

  VAR_20 = 0;

  for (VAR_18 = 0;VAR_18 < FUNC_19(VAR_5->FarmMemberList);VAR_18++)
  {
   FARM_MEMBER *VAR_23 = FUNC_18(VAR_5->FarmMemberList, VAR_18);

   if (FUNC_17(VAR_23->RandomKey, VAR_3) == 0 && VAR_23->SystemId != 0)
   {
    FUNC_25(VAR_17, "MemberRandomKey", VAR_23->RandomKey, VAR_3, VAR_20, VAR_19);
    FUNC_27(VAR_17, "MemberSystemId", VAR_23->SystemId, VAR_20, VAR_19);
    VAR_20++;
   }
  }
  FUNC_26(VAR_17, "MemberSystemIdNum", VAR_19);

  VAR_17 = FUNC_40(VAR_6, VAR_17, "enumhub");
  if (VAR_17 != ((void*)0))
  {
   FUNC_22(VAR_6->HubList);
   {
    UINT VAR_24;

    for (VAR_24 = 0;VAR_24 < FUNC_19(VAR_6->HubList);VAR_24++)
    {
     HUB_LIST *VAR_25 = FUNC_18(VAR_6->HubList, VAR_24);
     FUNC_10(VAR_25);
    }
    FUNC_9(VAR_6->HubList);

    for (VAR_24 = 0;VAR_24 < FUNC_30(VAR_17, "HubName");VAR_24++)
    {
     HUB_LIST *VAR_26 = FUNC_48(sizeof(HUB_LIST));
     UINT VAR_27;
     UINT64 VAR_28;

     FUNC_35(VAR_17, "HubName", VAR_26->Name, sizeof(VAR_26->Name), VAR_24);
     VAR_27 = FUNC_34(VAR_17, "NumSession", VAR_24);
     VAR_26->DynamicHub = ((FUNC_34(VAR_17, "HubType", VAR_24) == VAR_0) ? 1 : 0);
     VAR_26->FarmMember = VAR_6;
     VAR_26->NumSessions = FUNC_34(VAR_17, "NumSessions", VAR_24);
     VAR_26->NumSessionsClient = FUNC_34(VAR_17, "NumSessionsClient", VAR_24);
     VAR_26->NumSessionsBridge = FUNC_34(VAR_17, "NumSessionsBridge", VAR_24);
     VAR_26->NumIpTables = FUNC_34(VAR_17, "NumIpTables", VAR_24);
     VAR_26->NumMacTables = FUNC_34(VAR_17, "NumMacTables", VAR_24);
     VAR_28 = FUNC_33(VAR_17, "LastCommTime", VAR_24);
     FUNC_3(VAR_6->HubList, VAR_26);


     FUNC_22(VAR_7->HubList);
     {
      HUB *VAR_29 = FUNC_12(VAR_7, VAR_26->Name);

      if (VAR_29 != ((void*)0))
      {

       FUNC_20(VAR_29->lock);
       {
        if (VAR_29->LastCommTime < VAR_28)
        {
         VAR_29->LastCommTime = VAR_28;
        }
       }
       FUNC_45(VAR_29->lock);

       FUNC_36(VAR_29);
      }
     }
     FUNC_47(VAR_7->HubList);

     if (VAR_26->DynamicHub && VAR_27 >= 1)
     {



      FUNC_41(VAR_5, VAR_26->Name);
     }

     if (VAR_26->DynamicHub && VAR_27 == 0)
     {




      if (FUNC_43(VAR_5, VAR_26->Name) == 0)
      {

       HUB *VAR_30;
       FUNC_22(VAR_7->HubList);
       {
        VAR_30 = FUNC_12(VAR_7, VAR_26->Name);
       }
       FUNC_47(VAR_7->HubList);

       if (VAR_30 != ((void*)0))
       {
        FUNC_3(VAR_21, VAR_30);
       }
      }
     }
    }
   }
   FUNC_47(VAR_6->HubList);
   VAR_6->Point = FUNC_31(VAR_17, "Point");
   FUNC_7("Server %s: Point %u\n", VAR_6->hostname, VAR_6->Point);
   VAR_6->NumSessions = FUNC_31(VAR_17, "NumTotalSessions");
   if (VAR_6->NumSessions == 0)
   {
    VAR_6->NumSessions = FUNC_31(VAR_17, "NumSessions");
   }
   VAR_6->MaxSessions = FUNC_31(VAR_17, "MaxSessions");
   VAR_6->NumTcpConnections = FUNC_31(VAR_17, "NumTcpConnections");
   FUNC_15(&VAR_6->Traffic, VAR_17);

   VAR_6->AssignedBridgeLicense = FUNC_31(VAR_17, "AssignedBridgeLicense");
   VAR_6->AssignedClientLicense = FUNC_31(VAR_17, "AssignedClientLicense");

   if (FUNC_29(VAR_17, "RandomKey") == VAR_3)
   {
    FUNC_28(VAR_17, "RandomKey", VAR_6->RandomKey);
   }

   VAR_6->SystemId = FUNC_32(VAR_17, "SystemId");


   VAR_19 = FUNC_30(VAR_17, "TdType");
   for (VAR_18 = 0;VAR_18 < VAR_19;VAR_18++)
   {
    TRAFFIC VAR_31;
    UINT VAR_32;
    HUB *VAR_33;
    char VAR_34[VAR_2];
    char VAR_35[VAR_2];

    VAR_32 = FUNC_34(VAR_17, "TdType", VAR_18);
    FUNC_35(VAR_17, "TdName", VAR_34, sizeof(VAR_34), VAR_18);
    FUNC_35(VAR_17, "TdHubName", VAR_35, sizeof(VAR_35), VAR_18);
    FUNC_16(&VAR_31, VAR_17, VAR_18);

    FUNC_22(VAR_7->HubList);
    {
     VAR_33 = FUNC_12(VAR_7, VAR_35);
     if (VAR_33 != ((void*)0))
     {
      if (VAR_32 == VAR_4)
      {
       FUNC_20(VAR_33->TrafficLock);
       {
        FUNC_4(VAR_33->Traffic, &VAR_31);
       }
       FUNC_45(VAR_33->TrafficLock);
      }
      else
      {
       FUNC_1(VAR_33);
       {
        USER *VAR_36 = FUNC_0(VAR_33, VAR_34);
        if (VAR_36 != ((void*)0))
        {
         FUNC_20(VAR_36->lock);
         {
          FUNC_4(VAR_36->Traffic, &VAR_31);
         }
         FUNC_45(VAR_36->lock);
         if (VAR_36->Group != ((void*)0))
         {
          FUNC_20(VAR_36->Group->lock);
          {
           FUNC_4(VAR_36->Group->Traffic, &VAR_31);
          }
          FUNC_45(VAR_36->Group->lock);
         }
         FUNC_38(VAR_36);
        }
       }
       FUNC_2(VAR_33);
      }
      FUNC_36(VAR_33);
     }
     FUNC_47(VAR_7->HubList);
    }
   }

   FUNC_11(VAR_17);
  }

  for (VAR_18 = 0;VAR_18 < FUNC_19(VAR_21);VAR_18++)
  {
   HUB *VAR_37 = FUNC_18(VAR_21, VAR_18);
   FUNC_39(VAR_5, VAR_6, VAR_37);
   FUNC_7("Delete HUB: %s\n", VAR_37->Name);
   FUNC_36(VAR_37);
  }

  FUNC_37(VAR_21);
 }
}
