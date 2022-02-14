
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int Rpc; } ;
struct TYPE_6__ {scalar_t__ NumPort; int * Ports; scalar_t__* Enables; scalar_t__* Errors; } ;
typedef TYPE_1__ RPC_LISTENER_LIST ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int *,int,int *,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8;
 RPC_LISTENER_LIST VAR_9;
 UINT VAR_10;
 CT *VAR_11;

 VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_10(&VAR_9, sizeof(VAR_9));

 VAR_8 = FUNC_8(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {
  FUNC_0(VAR_2, VAR_8);
  FUNC_5(VAR_6);
  return VAR_8;
 }

 VAR_11 = FUNC_4();

 FUNC_3(VAR_11, FUNC_11("CM_LISTENER_COLUMN_1"), 0);
 FUNC_3(VAR_11, FUNC_11("CM_LISTENER_COLUMN_2"), 0);

 for (VAR_10 = 0;VAR_10 < VAR_9.NumPort;VAR_10++)
 {
  wchar_t *VAR_12 = FUNC_11("CM_LISTENER_OFFLINE");
  wchar_t VAR_13[128];

  if (VAR_9.Errors[VAR_10])
  {
   VAR_12 = FUNC_11("CM_LISTENER_ERROR");
  }
  else if (VAR_9.Enables[VAR_10])
  {
   VAR_12 = FUNC_11("CM_LISTENER_ONLINE");
  }

  FUNC_9(VAR_13, sizeof(VAR_13), FUNC_11("CM_LISTENER_TCP_PORT"), VAR_9.Ports[VAR_10]);

  FUNC_2(VAR_11, VAR_13, VAR_12);
 }

 FUNC_1(VAR_11, VAR_2);

 FUNC_6(&VAR_9);

 FUNC_5(VAR_6);

 return 0;
}
