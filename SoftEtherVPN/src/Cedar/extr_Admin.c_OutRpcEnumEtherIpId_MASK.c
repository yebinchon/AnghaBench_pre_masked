
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int Password; int UserName; int HubName; int Id; } ;
struct TYPE_4__ {size_t NumItem; TYPE_2__* IdList; } ;
typedef TYPE_1__ RPC_ENUM_ETHERIP_ID ;
typedef int PACK ;
typedef TYPE_2__ ETHERIP_ID ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(PACK *VAR_0, RPC_ENUM_ETHERIP_ID *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "NumItem", VAR_1->NumItem);

 FUNC_2(VAR_0, "Settings");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  ETHERIP_ID *VAR_3 = &VAR_1->IdList[VAR_2];

  FUNC_1(VAR_0, "Id", VAR_3->Id, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "HubName", VAR_3->HubName, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "UserName", VAR_3->UserName, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "Password", VAR_3->Password, VAR_2, VAR_1->NumItem);
 }
 FUNC_2(VAR_0, ((void*)0));
}
