
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int RemoteClient; } ;
struct TYPE_5__ {int OsType; int ProcessId; int ClientBuildInfoString; int ClientVersionString; int ClientProductName; } ;
typedef TYPE_1__ RPC_CLIENT_VERSION ;
typedef TYPE_2__ PC ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,char*,int *,int *,int ) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_1;
 RPC_CLIENT_VERSION VAR_10;


 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_10(&VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_1)
 {
  wchar_t VAR_11[VAR_2];
  CT *VAR_12;


  VAR_12 = FUNC_4();

  FUNC_8(VAR_11, sizeof(VAR_11), VAR_10.ClientProductName);
  FUNC_3(VAR_12, FUNC_11("CMD_VersionGet_1"), VAR_11);

  FUNC_8(VAR_11, sizeof(VAR_11), VAR_10.ClientVersionString);
  FUNC_3(VAR_12, FUNC_11("CMD_VersionGet_2"), VAR_11);

  FUNC_8(VAR_11, sizeof(VAR_11), VAR_10.ClientBuildInfoString);
  FUNC_3(VAR_12, FUNC_11("CMD_VersionGet_3"), VAR_11);

  FUNC_9(VAR_11, VAR_10.ProcessId);
  FUNC_3(VAR_12, FUNC_11("CMD_VersionGet_4"), VAR_11);

  FUNC_8(VAR_11, sizeof(VAR_11), FUNC_6(VAR_10.OsType));
  FUNC_3(VAR_12, FUNC_11("CMD_VersionGet_5"), VAR_11);

  FUNC_2(VAR_12, VAR_3);
 }

 if (VAR_9 != VAR_1)
 {

  FUNC_1(VAR_3, VAR_9);
 }


 FUNC_5(VAR_7);

 return VAR_9;
}
