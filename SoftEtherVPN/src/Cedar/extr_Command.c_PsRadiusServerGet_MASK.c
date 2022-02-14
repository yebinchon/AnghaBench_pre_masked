
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
struct TYPE_11__ {int RadiusRetryInterval; int RadiusSecret; int RadiusPort; int RadiusServerName; int HubName; } ;
typedef TYPE_1__ RPC_RADIUS ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int * FUNC_12 (char*) ;
 int FUNC_13 (TYPE_3__*,int *) ;

UINT FUNC_14(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_RADIUS VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_12("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_11(&VAR_10, sizeof(VAR_10));

 FUNC_8(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_7(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_11;
  wchar_t VAR_12[VAR_2];

  VAR_11 = FUNC_3();

  if (FUNC_5(VAR_10.RadiusServerName))
  {
   FUNC_2(VAR_11, FUNC_12("CMD_RadiusServerGet_STATUS"), FUNC_12("CMD_MSG_DISABLE"));
  }
  else
  {
   FUNC_2(VAR_11, FUNC_12("CMD_RadiusServerGet_STATUS"), FUNC_12("CMD_MSG_ENABLE"));

   FUNC_9(VAR_12, sizeof(VAR_12), VAR_10.RadiusServerName);
   FUNC_2(VAR_11, FUNC_12("CMD_RadiusServerGet_HOST"), VAR_12);

   FUNC_10(VAR_12, VAR_10.RadiusPort);
   FUNC_2(VAR_11, FUNC_12("CMD_RadiusServerGet_PORT"), VAR_12);

   FUNC_9(VAR_12, sizeof(VAR_12), VAR_10.RadiusSecret);
   FUNC_2(VAR_11, FUNC_12("CMD_RadiusServerGet_SECRET"), VAR_12);

   FUNC_10(VAR_12, VAR_10.RadiusRetryInterval);
   FUNC_2(VAR_11, FUNC_12("CMD_RadiusServerGet_RetryInterval"), VAR_12);
  }

  FUNC_1(VAR_11, VAR_3);
 }

 FUNC_4(VAR_7);

 return 0;
}
