
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumItem; int * ItemType; int * ItemName; int hWnd; } ;
typedef TYPE_1__ RPC_ENUM_OBJECT_IN_SECURE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(PACK *VAR_0, RPC_ENUM_OBJECT_IN_SECURE *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "NumItem", VAR_1->NumItem);
 FUNC_0(VAR_0, "hWnd", VAR_1->hWnd);

 FUNC_4(VAR_0, "ObjectList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  FUNC_3(VAR_0, "ItemName", VAR_1->ItemName[VAR_2], VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "ItemType", VAR_1->ItemType[VAR_2], VAR_2, VAR_1->NumItem);
 }
 FUNC_4(VAR_0, ((void*)0));
}
