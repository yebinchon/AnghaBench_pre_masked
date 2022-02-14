
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int Descrption; int Value; int Name; } ;
struct TYPE_4__ {size_t NumItem; TYPE_2__* Items; int HubName; } ;
typedef TYPE_1__ RPC_ADMIN_OPTION ;
typedef int PACK ;
typedef TYPE_2__ ADMIN_OPTION ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(PACK *VAR_0, RPC_ADMIN_OPTION *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "NumItem", VAR_1->NumItem);

 FUNC_2(VAR_0, "HubName", VAR_1->HubName);

 FUNC_5(VAR_0, "AdminOptionList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  ADMIN_OPTION *VAR_3 = &VAR_1->Items[VAR_2];

  FUNC_3(VAR_0, "Name", VAR_3->Name, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "Value", VAR_3->Value, VAR_2, VAR_1->NumItem);
  FUNC_4(VAR_0, "Descrption", VAR_3->Descrption, VAR_2, VAR_1->NumItem);
 }
 FUNC_5(VAR_0, ((void*)0));
}
