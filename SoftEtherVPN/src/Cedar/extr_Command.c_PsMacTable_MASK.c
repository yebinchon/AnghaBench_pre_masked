
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp6 ;
typedef int tmp5 ;
typedef int tmp4 ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int t ;
typedef int str ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
struct TYPE_16__ {scalar_t__ NumMacTable; TYPE_1__* MacTables; int HubName; } ;
struct TYPE_15__ {char* SessionName; scalar_t__ Key; scalar_t__ VlanId; int RemoteHostname; int UpdatedTime; int CreatedTime; int MacAddress; } ;
typedef TYPE_1__ RPC_ENUM_MAC_TABLE_ITEM ;
typedef TYPE_2__ RPC_ENUM_MAC_TABLE ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_5__ CONSOLE ;


 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_5__*,int) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int,int ) ;
 char* FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_2 ;
 int FUNC_10 (char*,int,int ) ;
 int * FUNC_11 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_12 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,int,int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *,int,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int,int ,int ) ;
 int FUNC_19 (int *,int,int ) ;
 int FUNC_20 (int *,scalar_t__) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (TYPE_5__*,int ) ;

UINT FUNC_24(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_MAC_TABLE VAR_10;
 UINT VAR_11;


 PARAM VAR_12[] =
 {

  {"[session_name]", ((void*)0), ((void*)0), ((void*)0), ((void*)0),}
 };


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_22("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_11(VAR_3, VAR_4, VAR_5, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_21(&VAR_10, sizeof(VAR_10));
 FUNC_14(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_12(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_13 = FUNC_4();
  char *VAR_14 = FUNC_8(VAR_7, "[session_name]");

  if (FUNC_9(VAR_14))
  {
   VAR_14 = ((void*)0);
  }

  FUNC_3(VAR_13, FUNC_22("CMD_ID"), 0);
  FUNC_3(VAR_13, FUNC_22("SM_MAC_COLUMN_1"), 0);
  FUNC_3(VAR_13, FUNC_22("SM_MAC_COLUMN_1A"), 0);
  FUNC_3(VAR_13, FUNC_22("SM_MAC_COLUMN_2"), 0);
  FUNC_3(VAR_13, FUNC_22("SM_MAC_COLUMN_3"), 0);
  FUNC_3(VAR_13, FUNC_22("SM_MAC_COLUMN_4"), 0);
  FUNC_3(VAR_13, FUNC_22("SM_MAC_COLUMN_5"), 0);

  for (VAR_11 = 0;VAR_11 < VAR_10.NumMacTable;VAR_11++)
  {
   char VAR_15[VAR_2];
   wchar_t VAR_16[128];
   wchar_t VAR_17[VAR_2];
   wchar_t VAR_18[VAR_2];
   wchar_t VAR_19[VAR_2];
   wchar_t VAR_20[VAR_2];
   wchar_t VAR_21[VAR_2];
   wchar_t VAR_22[VAR_2];

   RPC_ENUM_MAC_TABLE_ITEM *VAR_23 = &VAR_10.MacTables[VAR_11];

   if (VAR_14 == ((void*)0) || FUNC_13(VAR_23->SessionName, VAR_14) == 0)
   {
    FUNC_20(VAR_16, VAR_23->Key);

    FUNC_16(VAR_17, sizeof(VAR_17), VAR_23->SessionName);

    FUNC_10(VAR_15, sizeof(VAR_15), VAR_23->MacAddress);
    FUNC_16(VAR_18, sizeof(VAR_18), VAR_15);

    FUNC_7(VAR_19, sizeof(VAR_19), FUNC_17(VAR_23->CreatedTime));

    FUNC_7(VAR_20, sizeof(VAR_20), FUNC_17(VAR_23->UpdatedTime));

    if (FUNC_15(VAR_23->RemoteHostname) == 0)
    {
     FUNC_19(VAR_21, sizeof(VAR_21), FUNC_22("SM_MACIP_LOCAL"));
    }
    else
    {
     FUNC_18(VAR_21, sizeof(VAR_21), FUNC_22("SM_MACIP_SERVER"), VAR_23->RemoteHostname);
    }

    FUNC_20(VAR_22, VAR_23->VlanId);
    if (VAR_23->VlanId == 0)
    {
     FUNC_19(VAR_22, sizeof(VAR_22), FUNC_22("CM_ST_NONE"));
    }

    FUNC_2(VAR_13,
     VAR_16, VAR_17, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
   }
  }

  FUNC_1(VAR_13, VAR_3, 1);
 }

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
