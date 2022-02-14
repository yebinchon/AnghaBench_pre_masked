
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int NicDownOnDisconnect; } ;
struct TYPE_6__ {int RemoteClient; } ;
typedef TYPE_1__ PC ;
typedef int LIST ;
typedef int CONSOLE ;
typedef TYPE_2__ CLIENT_CONFIG ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int *,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

UINT FUNC_6(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PC *VAR_7 = (PC *)VAR_5;
 UINT VAR_8 = VAR_1;
 CLIENT_CONFIG VAR_9;


 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_5(&VAR_9, sizeof(VAR_9));

 VAR_8 = FUNC_0(VAR_7->RemoteClient, &VAR_9);

 if (VAR_8 == VAR_1)
 {

  VAR_9.NicDownOnDisconnect = 1;
  VAR_8 = FUNC_1(VAR_7->RemoteClient, &VAR_9);
 }

 if (VAR_8 == VAR_1)
 {

 }

 if (VAR_8 != VAR_1)
 {

  FUNC_2(VAR_2, VAR_8);
 }


 FUNC_3(VAR_6);

 return VAR_8;
}
