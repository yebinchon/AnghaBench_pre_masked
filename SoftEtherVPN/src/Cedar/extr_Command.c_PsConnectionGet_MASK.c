
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {int ServerVer; int ClientVer; int ClientBuild; int ClientStr; int ServerBuild; int ServerStr; int ConnectedTime; int Port; int Hostname; int Type; int Name; } ;
typedef TYPE_1__ RPC_CONNECTION_INFO ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,char*) ;
 int VAR_4 ;
 int * FUNC_8 (int *,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,int,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int,char*,int,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_CONNECTION_INFO VAR_12;
 CT *VAR_13;
 wchar_t VAR_14[VAR_4];

 PARAM VAR_15[] =
 {
  {"[name]", &VAR_1, FUNC_17("CMD_ConnectionGet_PROMPT_NAME"), VAR_0, ((void*)0)},
 };

 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_16(&VAR_12, sizeof(VAR_12));

 FUNC_10(VAR_12.Name, sizeof(VAR_12.Name), FUNC_7(VAR_9, "[name]"));


 VAR_11 = FUNC_9(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_4(VAR_9);
  return VAR_11;
 }
 else
 {
  VAR_13 = FUNC_3();

  FUNC_12(VAR_14, sizeof(VAR_14), VAR_12.Name);
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_NAME"), VAR_14);

  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_TYPE"), FUNC_5(VAR_12.Type));

  FUNC_12(VAR_14, sizeof(VAR_14), VAR_12.Hostname);
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_HOSTNAME"), VAR_14);

  FUNC_15(VAR_14, VAR_12.Port);
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_PORT"), VAR_14);

  FUNC_6(VAR_14, sizeof(VAR_14), FUNC_13(VAR_12.ConnectedTime), ((void*)0));
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_TIME"), VAR_14);

  FUNC_12(VAR_14, sizeof(VAR_14), VAR_12.ServerStr);
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_SERVER_STR"), VAR_14);

  FUNC_14(VAR_14, sizeof(VAR_14), L"%u.%02u", VAR_12.ServerVer / 100, VAR_12.ServerVer % 100);
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_SERVER_VER"), VAR_14);

  FUNC_15(VAR_14, VAR_12.ServerBuild);
  FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_SERVER_BUILD"), VAR_14);

  if (FUNC_11(VAR_12.ClientStr) != 0)
  {
   FUNC_12(VAR_14, sizeof(VAR_14), VAR_12.ClientStr);
   FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_CLIENT_STR"), VAR_14);

   FUNC_14(VAR_14, sizeof(VAR_14), L"%u.%02u", VAR_12.ClientVer / 100, VAR_12.ClientVer % 100);
   FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_CLIENT_VER"), VAR_14);

   FUNC_15(VAR_14, VAR_12.ClientBuild);
   FUNC_2(VAR_13, FUNC_17("SM_CONNINFO_CLIENT_BUILD"), VAR_14);
  }

  FUNC_1(VAR_13, VAR_5);
 }

 FUNC_4(VAR_9);

 return 0;
}
