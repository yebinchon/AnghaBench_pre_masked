
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int (* Write ) (TYPE_3__*,int *) ;} ;
struct TYPE_12__ {int Rpc; int * HubName; } ;
struct TYPE_11__ {scalar_t__ HubType; scalar_t__ LastLoginTime; scalar_t__ LastCommTime; scalar_t__ CreatedTime; int Traffic; int NumLogin; int NumIpTables; int NumMacTables; int NumGroups; int NumUsers; int NumAccessLists; int NumSessionsBridge; int NumSessionsClient; int NumSessions; scalar_t__ SecureNATEnabled; scalar_t__ Online; int HubName; } ;
typedef TYPE_1__ RPC_HUB_STATUS ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 int * FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_10 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int,int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,int,int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int * FUNC_17 (char*) ;
 int FUNC_18 (TYPE_3__*,int *) ;

UINT FUNC_19(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_HUB_STATUS VAR_11;

 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6, ((void*)0), 0);
 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_17("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 FUNC_16(&VAR_11, sizeof(VAR_11));

 FUNC_12(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);


 VAR_10 = FUNC_11(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_1)
 {

  FUNC_1(VAR_4, VAR_10);
  FUNC_7(VAR_8);
  return VAR_10;
 }
 else
 {
  CT *VAR_12 = FUNC_5();
  wchar_t *VAR_13;
  wchar_t VAR_14[VAR_3];


  VAR_13 = FUNC_2(VAR_11.HubName);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_STATUS_HUBNAME"), VAR_13);
  FUNC_6(VAR_13);


  FUNC_4(VAR_12, FUNC_17("SM_HUB_STATUS_ONLINE"),
   VAR_11.Online ? FUNC_17("SM_HUB_ONLINE") : FUNC_17("SM_HUB_OFFLINE"));


  FUNC_4(VAR_12, FUNC_17("SM_HUB_TYPE"),
   FUNC_9(VAR_11.HubType));

  if (VAR_11.HubType == VAR_2)
  {

   FUNC_4(VAR_12, FUNC_17("SM_HUB_SECURE_NAT"),
    VAR_11.SecureNATEnabled ? FUNC_17("SM_HUB_SECURE_NAT_YES") : FUNC_17("SM_HUB_SECURE_NAT_NO"));
  }


  FUNC_15(VAR_14, VAR_11.NumSessions);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_SESSIONS"), VAR_14);

  if (VAR_11.NumSessionsClient != 0 || VAR_11.NumSessionsBridge != 0)
  {
   FUNC_15(VAR_14, VAR_11.NumSessionsClient);
   FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_SESSIONS_CLIENT"), VAR_14);
   FUNC_15(VAR_14, VAR_11.NumSessionsBridge);
   FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_SESSIONS_BRIDGE"), VAR_14);
  }

  FUNC_15(VAR_14, VAR_11.NumAccessLists);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_ACCESSES"), VAR_14);

  FUNC_15(VAR_14, VAR_11.NumUsers);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_USERS"), VAR_14);
  FUNC_15(VAR_14, VAR_11.NumGroups);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_GROUPS"), VAR_14);

  FUNC_15(VAR_14, VAR_11.NumMacTables);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_MAC_TABLES"), VAR_14);
  FUNC_15(VAR_14, VAR_11.NumIpTables);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_IP_TABLES"), VAR_14);


  FUNC_15(VAR_14, VAR_11.NumLogin);
  FUNC_4(VAR_12, FUNC_17("SM_HUB_NUM_LOGIN"), VAR_14);

  if (VAR_11.LastLoginTime != 0)
  {
   FUNC_8(VAR_14, sizeof(VAR_14), FUNC_13(VAR_11.LastLoginTime));
  }
  else
  {
   FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("COMMON_UNKNOWN"));
  }
  FUNC_4(VAR_12, FUNC_17("SM_HUB_LAST_LOGIN_TIME"), VAR_14);

  if (VAR_11.LastCommTime != 0)
  {
   FUNC_8(VAR_14, sizeof(VAR_14), FUNC_13(VAR_11.LastCommTime));
  }
  else
  {
   FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("COMMON_UNKNOWN"));
  }
  FUNC_4(VAR_12, FUNC_17("SM_HUB_LAST_COMM_TIME"), VAR_14);

  if (VAR_11.CreatedTime != 0)
  {
   FUNC_8(VAR_14, sizeof(VAR_14), FUNC_13(VAR_11.CreatedTime));
  }
  else
  {
   FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("COMMON_UNKNOWN"));
  }
  FUNC_4(VAR_12, FUNC_17("SM_HUB_CREATED_TIME"), VAR_14);


  FUNC_0(VAR_12, &VAR_11.Traffic);

  FUNC_3(VAR_12, VAR_4);
 }

 FUNC_7(VAR_8);

 return 0;
}
