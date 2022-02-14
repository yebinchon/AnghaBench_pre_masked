
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ NicDownOnDisconnect; } ;
struct TYPE_5__ {int RemoteClient; } ;
typedef TYPE_1__ PC ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;
typedef TYPE_2__ CLIENT_CONFIG ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*,int *,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (char*) ;

UINT FUNC_9(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PC *VAR_7 = (PC *)VAR_5;
 UINT VAR_8 = VAR_1;
 CLIENT_CONFIG VAR_9;

 VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_7(&VAR_9, sizeof(VAR_9));

 VAR_8 = FUNC_0(VAR_7->RemoteClient, &VAR_9);

 if (VAR_8 == VAR_1)
 {
  CT *VAR_10 = FUNC_4();

  FUNC_3(VAR_10, FUNC_8("CMD_TUNDownOnDisconnectGet_COLUMN1"),
   VAR_9.NicDownOnDisconnect ? FUNC_8("SM_ACCESS_ENABLE") : FUNC_8("SM_ACCESS_DISABLE"));

  FUNC_2(VAR_10, VAR_2);
 }

 if (VAR_8 != VAR_1)
 {

  FUNC_1(VAR_2, VAR_8);
 }


 FUNC_5(VAR_6);

 return VAR_8;
}
