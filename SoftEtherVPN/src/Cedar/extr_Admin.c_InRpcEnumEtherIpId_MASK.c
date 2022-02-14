
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int Password; int UserName; int HubName; int Id; } ;
struct TYPE_6__ {int NumItem; TYPE_2__* IdList; } ;
typedef TYPE_1__ RPC_ENUM_ETHERIP_ID ;
typedef int PACK ;
typedef TYPE_2__ ETHERIP_ID ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int,size_t) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_3 (int) ;

void FUNC_4(RPC_ENUM_ETHERIP_ID *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(RPC_ENUM_ETHERIP_ID));

 VAR_0->NumItem = FUNC_0(VAR_1, "NumItem");
 VAR_0->IdList = FUNC_3(sizeof(ETHERIP_ID) * VAR_0->NumItem);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  ETHERIP_ID *VAR_3 = &VAR_0->IdList[VAR_2];

  FUNC_1(VAR_1, "Id", VAR_3->Id, sizeof(VAR_3->Id), VAR_2);
  FUNC_1(VAR_1, "HubName", VAR_3->HubName, sizeof(VAR_3->HubName), VAR_2);
  FUNC_1(VAR_1, "UserName", VAR_3->UserName, sizeof(VAR_3->UserName), VAR_2);
  FUNC_1(VAR_1, "Password", VAR_3->Password, sizeof(VAR_3->Password), VAR_2);
 }
}
