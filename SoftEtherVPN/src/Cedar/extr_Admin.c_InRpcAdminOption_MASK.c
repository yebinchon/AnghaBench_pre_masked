
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int Descrption; int Value; int Name; } ;
struct TYPE_6__ {int NumItem; TYPE_2__* Items; int HubName; } ;
typedef TYPE_1__ RPC_ADMIN_OPTION ;
typedef int PACK ;
typedef TYPE_2__ ADMIN_OPTION ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ,int,size_t) ;
 int FUNC_4 (int *,char*,int ,int,size_t) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_6 (int) ;

void FUNC_7(RPC_ADMIN_OPTION *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_ADMIN_OPTION));
 VAR_0->NumItem = FUNC_0(VAR_1, "Name");
 VAR_0->Items = FUNC_6(sizeof(ADMIN_OPTION) * VAR_0->NumItem);

 FUNC_2(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  ADMIN_OPTION *VAR_3 = &VAR_0->Items[VAR_2];

  FUNC_3(VAR_1, "Name", VAR_3->Name, sizeof(VAR_3->Name), VAR_2);
  VAR_3->Value = FUNC_1(VAR_1, "Value", VAR_2);
  FUNC_4(VAR_1, "Descrption", VAR_3->Descrption, sizeof(VAR_3->Descrption), VAR_2);
 }
}
