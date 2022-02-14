
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
struct TYPE_9__ {char* member_0; int * member_4; int member_3; int * member_2; int member_1; } ;
struct TYPE_8__ {int RemoteClient; } ;
struct TYPE_7__ {int Guid; int FileName; int Version; int MacAddress; scalar_t__ Enabled; int DeviceName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_VLAN ;
typedef TYPE_2__ PC ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int VAR_4 ;
 int * FUNC_7 (int *,char*,int *,TYPE_3__*,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PC *VAR_10 = (PC *)VAR_8;
 UINT VAR_11 = VAR_3;
 RPC_CLIENT_GET_VLAN VAR_12;

 PARAM VAR_13[] =
 {
  {"[name]", &VAR_1, *FUNC_11("CMD_NicCreate_PROMPT_NAME"), &VAR_0, ((void*)0)},
 };


 VAR_9 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_10(&VAR_12, sizeof(VAR_12));
 FUNC_8(VAR_12.DeviceName, sizeof(VAR_12.DeviceName), FUNC_6(VAR_9, "[name]"));

 VAR_11 = FUNC_0(VAR_10->RemoteClient, &VAR_12);

 if (VAR_11 == VAR_3)
 {

  CT *VAR_14 = FUNC_4();
  wchar_t VAR_15[VAR_4];

  FUNC_9(VAR_15, sizeof(VAR_15), VAR_12.DeviceName);
  FUNC_3(VAR_14, FUNC_11("CMD_NicGetSetting_1"), VAR_15);

  FUNC_3(VAR_14, FUNC_11("CMD_NicGetSetting_2"), VAR_12.Enabled ? FUNC_11("CMD_MSG_ENABLE") : FUNC_11("CMD_MSG_DISABLE"));

  FUNC_9(VAR_15, sizeof(VAR_15), VAR_12.MacAddress);
  FUNC_3(VAR_14, FUNC_11("CMD_NicGetSetting_3"), VAR_15);

  FUNC_9(VAR_15, sizeof(VAR_15), VAR_12.Version);
  FUNC_3(VAR_14, FUNC_11("CMD_NicGetSetting_4"), VAR_15);

  FUNC_9(VAR_15, sizeof(VAR_15), VAR_12.FileName);
  FUNC_3(VAR_14, FUNC_11("CMD_NicGetSetting_5"), VAR_15);

  FUNC_9(VAR_15, sizeof(VAR_15), VAR_12.Guid);
  FUNC_3(VAR_14, FUNC_11("CMD_NicGetSetting_6"), VAR_15);

  FUNC_2(VAR_14, VAR_5);
 }

 if (VAR_11 != VAR_3)
 {

  FUNC_1(VAR_5, VAR_11);
 }


 FUNC_5(VAR_9);

 return VAR_11;
}
