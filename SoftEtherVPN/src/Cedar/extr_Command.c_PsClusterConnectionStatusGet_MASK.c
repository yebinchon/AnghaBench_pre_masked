
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int str ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int Rpc; } ;
struct TYPE_5__ {int Online; int NumFailed; int NumConnected; int NumTry; int CurrentConnectedTime; int FirstConnectedTime; int StartedTime; int LastError; int Port; int Ip; } ;
typedef TYPE_1__ RPC_FARM_CONNECTION_STATUS ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ,int *) ;
 int FUNC_6 (char*,int,int ) ;
 int VAR_2 ;
 int * FUNC_7 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int *,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (char*) ;

UINT FUNC_16(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_FARM_CONNECTION_STATUS VAR_10;
 wchar_t VAR_11[VAR_2];

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_13(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_8(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_12 = FUNC_3();
  char VAR_13[VAR_2];

  if (VAR_10.Online == 0)
  {
   FUNC_2(VAR_12, FUNC_15("SM_FC_IP"), FUNC_15("SM_FC_NOT_CONNECTED"));

   FUNC_2(VAR_12, FUNC_15("SM_FC_PORT"), FUNC_15("SM_FC_NOT_CONNECTED"));
  }
  else
  {
   FUNC_6(VAR_13, sizeof(VAR_13), VAR_10.Ip);
   FUNC_9(VAR_11, sizeof(VAR_11), VAR_13);
   FUNC_2(VAR_12, FUNC_15("SM_FC_IP"), VAR_11);

   FUNC_12(VAR_11, VAR_10.Port);
   FUNC_2(VAR_12, FUNC_15("SM_FC_PORT"), VAR_11);
  }

  FUNC_2(VAR_12,
   FUNC_15("SM_FC_STATUS"),
   VAR_10.Online ? FUNC_15("SM_FC_ONLINE") : FUNC_15("SM_FC_OFFLINE"));

  if (VAR_10.Online == 0)
  {
   FUNC_11(VAR_11, sizeof(VAR_11), FUNC_15("SM_FC_ERROR_TAG"), FUNC_14(VAR_10.LastError), VAR_10.LastError);
   FUNC_2(VAR_12,
    FUNC_15("SM_FC_LAST_ERROR"), VAR_11);
  }

  FUNC_5(VAR_11, sizeof(VAR_11), FUNC_10(VAR_10.StartedTime), ((void*)0));
  FUNC_2(VAR_12, FUNC_15("SM_FC_START_TIME"), VAR_11);

  FUNC_5(VAR_11, sizeof(VAR_11), FUNC_10(VAR_10.FirstConnectedTime), ((void*)0));
  FUNC_2(VAR_12, FUNC_15("SM_FC_FIRST_TIME"), VAR_11);


  {
   FUNC_5(VAR_11, sizeof(VAR_11), FUNC_10(VAR_10.CurrentConnectedTime), ((void*)0));
   FUNC_2(VAR_12, FUNC_15("SM_FC_CURRENT_TIME"), VAR_11);
  }

  FUNC_12(VAR_11, VAR_10.NumTry);
  FUNC_2(VAR_12, FUNC_15("SM_FC_NUM_TRY"), VAR_11);

  FUNC_12(VAR_11, VAR_10.NumConnected);
  FUNC_2(VAR_12, FUNC_15("SM_FC_NUM_CONNECTED"), VAR_11);

  FUNC_12(VAR_11, VAR_10.NumFailed);
  FUNC_2(VAR_12, FUNC_15("SM_FC_NUM_FAILED"), VAR_11);

  FUNC_1(VAR_12, VAR_3);
 }

 FUNC_4(VAR_7);

 return 0;
}
