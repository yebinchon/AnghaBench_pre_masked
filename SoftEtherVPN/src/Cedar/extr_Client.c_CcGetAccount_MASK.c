
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Rpc; } ;
typedef int RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_1__ REMOTE_CLIENT ;
typedef int PACK ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

UINT FUNC_7(REMOTE_CLIENT *VAR_1, RPC_CLIENT_GET_ACCOUNT *VAR_2)
{
 PACK *VAR_3, *VAR_4;
 UINT VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_4 = FUNC_2();
 FUNC_3(VAR_4, VAR_2);

 VAR_3 = FUNC_4(VAR_1->Rpc, "GetAccount", VAR_4);

 if (FUNC_6(VAR_3))
 {
  FUNC_1(VAR_2, VAR_3);
 }
 else
 {
  VAR_5 = FUNC_5(VAR_3);
 }

 FUNC_0(VAR_3);

 return VAR_5;
}
