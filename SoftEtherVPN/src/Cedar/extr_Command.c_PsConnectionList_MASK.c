
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
typedef int name ;
typedef int datetime ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {scalar_t__ NumConnection; TYPE_1__* Connections; } ;
struct TYPE_7__ {int Type; int ConnectedTime; int Port; int Hostname; int Name; } ;
typedef TYPE_1__ RPC_ENUM_CONNECTION_ITEM ;
typedef TYPE_2__ RPC_ENUM_CONNECTION ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,int ,int *) ;
 int VAR_2 ;
 int * FUNC_9 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int,int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (char*) ;

UINT FUNC_16(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_CONNECTION VAR_10;
 UINT VAR_11;
 CT *VAR_12;

 VAR_7 = FUNC_9(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_14(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_10(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }

 VAR_12 = FUNC_4();
 FUNC_3(VAR_12, FUNC_15("SM_CONN_COLUMN_1"), 0);
 FUNC_3(VAR_12, FUNC_15("SM_CONN_COLUMN_2"), 0);
 FUNC_3(VAR_12, FUNC_15("SM_CONN_COLUMN_3"), 0);
 FUNC_3(VAR_12, FUNC_15("SM_CONN_COLUMN_4"), 0);

 for (VAR_11 = 0;VAR_11 < VAR_10.NumConnection;VAR_11++)
 {
  wchar_t VAR_13[VAR_2];
  wchar_t VAR_14[VAR_2];
  wchar_t VAR_15[VAR_2];
  RPC_ENUM_CONNECTION_ITEM *VAR_16 = &VAR_10.Connections[VAR_11];

  FUNC_11(VAR_14, sizeof(VAR_14), VAR_16->Name);
  FUNC_13(VAR_13, sizeof(VAR_13), FUNC_15("SM_HOSTNAME_AND_PORT"), VAR_16->Hostname, VAR_16->Port);
  FUNC_8(VAR_15, sizeof(VAR_15), FUNC_12(VAR_16->ConnectedTime), ((void*)0));

  FUNC_2(VAR_12, VAR_14, VAR_13, VAR_15,
   FUNC_7(VAR_16->Type));
 }

 FUNC_1(VAR_12, VAR_3);

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
