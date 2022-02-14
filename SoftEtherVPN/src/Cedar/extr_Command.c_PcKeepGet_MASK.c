
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ KeepConnectProtocol; scalar_t__ UseKeepConnect; int KeepConnectInterval; int KeepConnectPort; int KeepConnectHost; } ;
struct TYPE_5__ {int RemoteClient; } ;
typedef TYPE_1__ PC ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;
typedef TYPE_2__ CLIENT_CONFIG ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int * FUNC_6 (int *,char*,char*,int *,int ) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 char* FUNC_10 (char*) ;

UINT FUNC_11(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_1;
 CLIENT_CONFIG VAR_10;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_9(&VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_1)
 {
  wchar_t VAR_11[VAR_2];
  CT *VAR_12 = FUNC_4();

  FUNC_7(VAR_11, sizeof(VAR_11), VAR_10.KeepConnectHost);
  FUNC_3(VAR_12, FUNC_10("CMD_KeepGet_COLUMN_1"), VAR_11);

  FUNC_8(VAR_11, VAR_10.KeepConnectPort);
  FUNC_3(VAR_12, FUNC_10("CMD_KeepGet_COLUMN_2"), VAR_11);

  FUNC_8(VAR_11, VAR_10.KeepConnectInterval);
  FUNC_3(VAR_12, FUNC_10("CMD_KeepGet_COLUMN_3"), VAR_11);

  FUNC_3(VAR_12, FUNC_10("CMD_KeepGet_COLUMN_4"),
   VAR_10.KeepConnectProtocol == 0 ? L"TCP/IP" : L"UDP/IP");

  FUNC_3(VAR_12, FUNC_10("CMD_KeepGet_COLUMN_5"),
   VAR_10.UseKeepConnect ? FUNC_10("SM_ACCESS_ENABLE") : FUNC_10("SM_ACCESS_DISABLE"));

  FUNC_2(VAR_12, VAR_3);
 }

 if (VAR_9 != VAR_1)
 {

  FUNC_1(VAR_3, VAR_9);
 }


 FUNC_5(VAR_7);

 return VAR_9;
}
