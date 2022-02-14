
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Rpc; } ;
typedef int RPC_CLIENT_CONNECT ;
typedef TYPE_1__ REMOTE_CLIENT ;
typedef int PACK ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

UINT FUNC_7(REMOTE_CLIENT *VAR_1, RPC_CLIENT_CONNECT *VAR_2)
{
 PACK *VAR_3, *VAR_4;
 UINT VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_0(VAR_1);

 VAR_4 = FUNC_2();
 FUNC_3(VAR_4, VAR_2);

 VAR_3 = FUNC_4(VAR_1->Rpc, "Connect", VAR_4);

 if (FUNC_6(VAR_3) == 0)
 {
  VAR_5 = FUNC_5(VAR_3);
 }

 FUNC_1(VAR_3);

 return VAR_5;
}
