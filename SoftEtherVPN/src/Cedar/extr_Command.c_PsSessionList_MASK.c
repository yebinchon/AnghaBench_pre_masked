
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp8 ;
typedef int tmp7 ;
typedef int tmp6 ;
typedef int tmp5 ;
typedef int tmp4 ;
typedef int tmp3 ;
typedef int tmp1 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int (* Write ) (TYPE_5__*,int *) ;} ;
struct TYPE_18__ {int Rpc; int * HubName; } ;
struct TYPE_17__ {scalar_t__ VLanId; int PacketNum; int PacketSize; scalar_t__ BridgeMode; scalar_t__ SecureNATMode; scalar_t__ LinkMode; int MaxNumTcp; int CurrentNumTcp; int Username; int Hostname; int RemoteHostname; scalar_t__ RemoteSession; int Name; } ;
struct TYPE_16__ {scalar_t__ ServerType; scalar_t__ NumSession; TYPE_2__* Sessions; int HubName; } ;
typedef TYPE_1__ RPC_SERVER_INFO ;
typedef TYPE_2__ RPC_ENUM_SESSION_ITEM ;
typedef TYPE_1__ RPC_ENUM_SESSION ;
typedef TYPE_4__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_5__ CONSOLE ;


 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_5__*,int) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_9 (TYPE_5__*,char*,int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,int,int ) ;
 int FUNC_16 (int *,int,char*,int ,...) ;
 int FUNC_17 (int *,int,int *) ;
 int FUNC_18 (int *,int,int ) ;
 int FUNC_19 (int *,scalar_t__) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int * FUNC_21 (int) ;
 int * FUNC_22 (char*) ;
 int FUNC_23 (TYPE_5__*,int *) ;

UINT FUNC_24(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_ENUM_SESSION VAR_12;
 UINT VAR_13 = 0;

 VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, ((void*)0), 0);
 if (VAR_9 == ((void*)0))
 {
  return VAR_0;
 }


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_22("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 {

  RPC_SERVER_INFO VAR_14;

  FUNC_20(&VAR_14, sizeof(VAR_14));

  if (FUNC_11(VAR_10->Rpc, &VAR_14) == VAR_1)
  {
   VAR_13 = VAR_14.ServerType;

   FUNC_8(&VAR_14);
  }
 }

 FUNC_20(&VAR_12, sizeof(VAR_12));
 FUNC_13(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);


 VAR_11 = FUNC_10(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_1)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_6(VAR_9);
  return VAR_11;
 }
 else
 {
  CT *VAR_15 = FUNC_4();
  UINT VAR_16;

  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_1"), 0);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_8"), 0);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_2"), 0);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_3"), 0);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_4"), 0);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_5"), 1);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_6"), 1);
  FUNC_3(VAR_15, FUNC_22("SM_SESS_COLUMN_7"), 1);

  for (VAR_16 = 0;VAR_16 < VAR_12.NumSession;VAR_16++)
  {
   RPC_ENUM_SESSION_ITEM *VAR_17 = &VAR_12.Sessions[VAR_16];
   wchar_t VAR_18[VAR_3];
   wchar_t *VAR_19;
   wchar_t VAR_20[VAR_3];
   wchar_t VAR_21[VAR_3];
   wchar_t VAR_22[VAR_3];
   wchar_t VAR_23[VAR_3];
   wchar_t VAR_24[VAR_3];
   wchar_t VAR_25[VAR_3];
   bool VAR_26 = 0;

   FUNC_15(VAR_18, sizeof(VAR_18), VAR_17->Name);

   VAR_19 = FUNC_22("SM_SESS_NORMAL");
   if (VAR_13 != VAR_4)
   {
    if (VAR_17->RemoteSession)
    {
     VAR_19 = FUNC_21(VAR_3);
     FUNC_16(VAR_19, VAR_3, FUNC_22("SM_SESS_REMOTE"), VAR_17->RemoteHostname);
     VAR_26 = 1;
    }
    else
    {
     if (FUNC_14(VAR_17->RemoteHostname) == 0)
     {
      VAR_19 = FUNC_22("SM_SESS_LOCAL");
     }
     else
     {
      VAR_19 = FUNC_21(VAR_3);
      FUNC_16(VAR_19, VAR_3, FUNC_22("SM_SESS_LOCAL_2"), VAR_17->RemoteHostname);
      VAR_26 = 1;
     }
    }
   }
   if (VAR_17->LinkMode)
   {
    if (VAR_26)
    {
     FUNC_5(VAR_19);
     VAR_26 = 0;
    }
    VAR_19 = FUNC_22("SM_SESS_LINK");
   }
   else if (VAR_17->SecureNATMode)
   {





    VAR_19 = FUNC_22("SM_SESS_SNAT");
   }

   FUNC_15(VAR_20, sizeof(VAR_20), VAR_17->Username);

   FUNC_15(VAR_21, sizeof(VAR_21), VAR_17->Hostname);
   if (VAR_17->LinkMode)
   {
    FUNC_17(VAR_21, sizeof(VAR_21), FUNC_22("SM_SESS_LINK_HOSTNAME"));
   }
   else if (VAR_17->SecureNATMode)
   {
    FUNC_17(VAR_21, sizeof(VAR_21), FUNC_22("SM_SESS_SNAT_HOSTNAME"));
   }
   else if (VAR_17->BridgeMode)
   {
    FUNC_17(VAR_21, sizeof(VAR_21), FUNC_22("SM_SESS_BRIDGE_HOSTNAME"));
   }
   else if (FUNC_12(VAR_17->Username, VAR_2))
   {
    FUNC_17(VAR_21, sizeof(VAR_21), FUNC_22("SM_SESS_LAYER3_HOSTNAME"));
   }

   FUNC_16(VAR_22, sizeof(VAR_22), L"%u / %u", VAR_17->CurrentNumTcp, VAR_17->MaxNumTcp);
   if (VAR_17->LinkMode)
   {
    FUNC_17(VAR_22, sizeof(VAR_22), FUNC_22("SM_SESS_LINK_TCP"));
   }
   else if (VAR_17->SecureNATMode)
   {
    FUNC_17(VAR_22, sizeof(VAR_22), FUNC_22("SM_SESS_SNAT_TCP"));
   }
   else if (VAR_17->BridgeMode)
   {
    FUNC_17(VAR_22, sizeof(VAR_22), FUNC_22("SM_SESS_BRIDGE_TCP"));
   }

   FUNC_18(VAR_23, sizeof(VAR_23), VAR_17->PacketSize);
   FUNC_18(VAR_24, sizeof(VAR_24), VAR_17->PacketNum);

   if (VAR_17->VLanId == 0)
   {
    FUNC_17(VAR_25, sizeof(VAR_25), FUNC_22("CM_ST_NO_VLAN"));
   }
   else
   {
    FUNC_19(VAR_25, VAR_17->VLanId);
   }

   FUNC_2(VAR_15, VAR_18, VAR_25, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);

   if (VAR_26)
   {
    FUNC_5(VAR_19);
   }
  }


  FUNC_1(VAR_15, VAR_5, 1);
 }

 FUNC_7(&VAR_12);

 FUNC_6(VAR_9);

 return 0;
}
