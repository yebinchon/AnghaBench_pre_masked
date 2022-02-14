
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {int * x; } ;
typedef TYPE_1__ RPC_GET_ISSUER ;
typedef TYPE_2__ REMOTE_CLIENT ;
typedef int PACK ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

UINT FUNC_8(REMOTE_CLIENT *VAR_1, RPC_GET_ISSUER *VAR_2)
{
 PACK *VAR_3, *VAR_4;
 UINT VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_3 = FUNC_3();
 FUNC_4(VAR_3, VAR_2);

 VAR_4 = FUNC_5(VAR_1->Rpc, "GetIssuer", VAR_3);

 if (FUNC_7(VAR_4))
 {
  if (VAR_2->x != ((void*)0))
  {
   FUNC_1(VAR_2->x);
   VAR_2->x = ((void*)0);
  }
  FUNC_2(VAR_2, VAR_4);
 }
 else
 {
  VAR_5 = FUNC_6(VAR_4);
 }

 FUNC_0(VAR_4);

 return VAR_5;
}
