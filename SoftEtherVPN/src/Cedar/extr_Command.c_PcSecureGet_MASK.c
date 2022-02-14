
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int (* Write ) (TYPE_3__*,int *) ;} ;
struct TYPE_11__ {int RemoteClient; } ;
struct TYPE_10__ {scalar_t__ DeviceId; } ;
typedef TYPE_1__ RPC_USE_SECURE ;
typedef TYPE_2__ PC ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (TYPE_3__*,char*,int *,int *,int ) ;
 int FUNC_4 (int *,int,int ,scalar_t__) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int *) ;

UINT FUNC_9(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_1;
 RPC_USE_SECURE VAR_10;


 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_6(&VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_1)
 {

  wchar_t VAR_11[VAR_2];

  if (VAR_10.DeviceId != 0)
  {
   FUNC_4(VAR_11, sizeof(VAR_11), FUNC_7("CMD_SecureGet_Print"), VAR_10.DeviceId);
  }
  else
  {
   FUNC_5(VAR_11, sizeof(VAR_11), FUNC_7("CMD_SecureGet_NoPrint"));
  }
  VAR_3->Write(VAR_3, VAR_11);
 }

 if (VAR_9 != VAR_1)
 {

  FUNC_1(VAR_3, VAR_9);
 }


 FUNC_2(VAR_7);

 return VAR_9;
}
