
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int s9 ;
typedef int s8 ;
typedef int s7 ;
typedef int s10 ;
typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int Rpc; } ;
struct TYPE_14__ {scalar_t__ NumHub; TYPE_4__* Hubs; } ;
struct TYPE_11__ {scalar_t__ UnicastCount; scalar_t__ BroadcastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastBytes; } ;
struct TYPE_10__ {scalar_t__ UnicastCount; scalar_t__ BroadcastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastBytes; } ;
struct TYPE_12__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
struct TYPE_13__ {scalar_t__ LastLoginTime; scalar_t__ LastCommTime; int IsTrafficFilled; int HubType; scalar_t__ Online; int HubName; TYPE_3__ Traffic; int NumLogin; int NumIpTables; int NumMacTables; int NumSessions; int NumGroups; int NumUsers; } ;
typedef TYPE_4__ RPC_ENUM_HUB_ITEM ;
typedef TYPE_5__ RPC_ENUM_HUB ;
typedef TYPE_6__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int ,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int * FUNC_9 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_5__*) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int,scalar_t__) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (TYPE_5__*,int) ;
 int FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_HUB VAR_10;
 UINT VAR_11;

 VAR_7 = FUNC_9(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_16(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_10(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_12 = FUNC_4();

  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_1"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_2"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_3"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_4"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_5"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_6"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_7"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_8"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_9"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_10"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_HUB_COLUMN_11"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_SESS_COLUMN_6"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_SESS_COLUMN_7"), 0);

  for (VAR_11 = 0;VAR_11 < VAR_10.NumHub;VAR_11++)
  {
   RPC_ENUM_HUB_ITEM *VAR_13 = &VAR_10.Hubs[VAR_11];
   wchar_t VAR_14[VAR_2 + 1];
   wchar_t VAR_15[64], VAR_16[64], VAR_17[64], VAR_18[64], VAR_19[64];
   wchar_t VAR_20[64], VAR_21[128], VAR_22[128];
   wchar_t VAR_23[64], VAR_24[64];

   FUNC_15(VAR_15, VAR_13->NumUsers);
   FUNC_15(VAR_16, VAR_13->NumGroups);
   FUNC_15(VAR_17, VAR_13->NumSessions);
   FUNC_15(VAR_18, VAR_13->NumMacTables);
   FUNC_15(VAR_19, VAR_13->NumIpTables);

   FUNC_15(VAR_20, VAR_13->NumLogin);

   if (VAR_13->LastLoginTime != 0)
   {
    FUNC_7(VAR_21, sizeof(VAR_21), FUNC_12(VAR_13->LastLoginTime));
   }
   else
   {
    FUNC_13(VAR_21, sizeof(VAR_21), FUNC_17("COMMON_UNKNOWN"));
   }

   if (VAR_13->LastCommTime != 0)
   {
    FUNC_7(VAR_22, sizeof(VAR_22), FUNC_12(VAR_13->LastCommTime));
   }
   else
   {
    FUNC_13(VAR_22, sizeof(VAR_22), FUNC_17("COMMON_UNKNOWN"));
   }

   if (VAR_13->IsTrafficFilled == 0)
   {
    FUNC_13(VAR_23, sizeof(VAR_23), FUNC_17("CM_ST_NONE"));
    FUNC_13(VAR_24, sizeof(VAR_24), FUNC_17("CM_ST_NONE"));
   }
   else
   {
    FUNC_14(VAR_23, sizeof(VAR_23),
     VAR_13->Traffic.Recv.BroadcastBytes + VAR_13->Traffic.Recv.UnicastBytes +
     VAR_13->Traffic.Send.BroadcastBytes + VAR_13->Traffic.Send.UnicastBytes);

    FUNC_14(VAR_24, sizeof(VAR_24),
     VAR_13->Traffic.Recv.BroadcastCount + VAR_13->Traffic.Recv.UnicastCount +
     VAR_13->Traffic.Send.BroadcastCount + VAR_13->Traffic.Send.UnicastCount);
   }

   FUNC_11(VAR_14, sizeof(VAR_14), VAR_13->HubName);

   FUNC_2(VAR_12,
    VAR_14,
    VAR_13->Online ? FUNC_17("SM_HUB_ONLINE") : FUNC_17("SM_HUB_OFFLINE"),
    FUNC_8(VAR_13->HubType),
    VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
  }

  FUNC_1(VAR_12, VAR_3, 1);
 }

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
