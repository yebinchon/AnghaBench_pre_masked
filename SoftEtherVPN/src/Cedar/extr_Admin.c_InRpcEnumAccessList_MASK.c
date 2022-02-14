
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumAccess; int * Accesses; int HubName; } ;
typedef TYPE_1__ RPC_ENUM_ACCESS_LIST ;
typedef int PACK ;
typedef int ACCESS ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int * FUNC_4 (int) ;

void FUNC_5(RPC_ENUM_ACCESS_LIST *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_ENUM_ACCESS_LIST));
 FUNC_2(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumAccess = FUNC_1(VAR_1, "Protocol");
 VAR_0->Accesses = FUNC_4(sizeof(ACCESS) * VAR_0->NumAccess);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumAccess;VAR_2++)
 {
  ACCESS *VAR_3 = &VAR_0->Accesses[VAR_2];

  FUNC_0(VAR_3, VAR_1, VAR_2);
 }
}
