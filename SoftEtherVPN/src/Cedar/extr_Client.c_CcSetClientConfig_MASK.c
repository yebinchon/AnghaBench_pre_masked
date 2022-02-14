
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Rpc; } ;
typedef TYPE_1__ REMOTE_CLIENT ;
typedef int PACK ;
typedef int CLIENT_CONFIG ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

UINT FUNC_6(REMOTE_CLIENT *VAR_1, CLIENT_CONFIG *VAR_2)
{
 PACK *VAR_3, *VAR_4;
 UINT VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_3 = FUNC_1();
 FUNC_2(VAR_3, VAR_2);

 VAR_4 = FUNC_3(VAR_1->Rpc, "SetClientConfig", VAR_3);

 if (FUNC_5(VAR_4) == 0)
 {
  VAR_5 = FUNC_4(VAR_4);
 }

 FUNC_0(VAR_4);

 return VAR_5;
}
