
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Rpc; } ;
typedef int RPC_CLIENT_ENUM_CA ;
typedef TYPE_1__ REMOTE_CLIENT ;
typedef int PACK ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

UINT FUNC_5(REMOTE_CLIENT *VAR_1, RPC_CLIENT_ENUM_CA *VAR_2)
{
 PACK *VAR_3;
 UINT VAR_4 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1->Rpc, "EnumCa", ((void*)0));

 if (FUNC_4(VAR_3))
 {
  FUNC_1(VAR_2, VAR_3);
 }
 else
 {
  VAR_4 = FUNC_3(VAR_3);
 }

 FUNC_0(VAR_3);

 return VAR_4;
}
