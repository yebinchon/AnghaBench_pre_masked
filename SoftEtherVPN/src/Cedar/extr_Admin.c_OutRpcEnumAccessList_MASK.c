
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumAccess; int * Accesses; int HubName; } ;
typedef TYPE_1__ RPC_ENUM_ACCESS_LIST ;
typedef int PACK ;
typedef int ACCESS ;


 int FUNC_0 (int *,int *,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(PACK *VAR_0, RPC_ENUM_ACCESS_LIST *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }
 FUNC_1(VAR_0, "HubName", VAR_1->HubName);

 FUNC_2(VAR_0, "AccessList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumAccess;VAR_2++)
 {
  ACCESS *VAR_3 = &VAR_1->Accesses[VAR_2];

  FUNC_0(VAR_0, VAR_3, VAR_2, VAR_1->NumAccess);
 }
 FUNC_2(VAR_0, ((void*)0));
}
