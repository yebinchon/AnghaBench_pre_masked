
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int Rpc; } ;
struct TYPE_6__ {int UseKeepConnect; } ;
typedef TYPE_1__ RPC_KEEP ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

UINT FUNC_6(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_KEEP VAR_9;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_5(&VAR_9, sizeof(VAR_9));


 VAR_8 = FUNC_3(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 VAR_9.UseKeepConnect = 0;

 VAR_8 = FUNC_4(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 FUNC_1(VAR_6);

 return 0;
}
