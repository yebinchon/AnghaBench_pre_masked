
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_18__ {TYPE_1__* Server; } ;
struct TYPE_17__ {int L3SwList; } ;
struct TYPE_16__ {int lock; int Online; int Active; int TableList; int IfList; int Name; } ;
struct TYPE_15__ {size_t NumItem; TYPE_2__* Items; } ;
struct TYPE_14__ {size_t NumInterfaces; size_t NumTables; int Online; int Active; int Name; } ;
struct TYPE_13__ {TYPE_5__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_L3SW_ITEM ;
typedef TYPE_3__ RPC_ENUM_L3SW ;
typedef TYPE_4__ L3SW ;
typedef TYPE_5__ CEDAR ;
typedef TYPE_6__ ADMIN ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_9 (int) ;

UINT FUNC_10(ADMIN *VAR_2, RPC_ENUM_L3SW *VAR_3)
{
 UINT VAR_4;
 SERVER *VAR_5 = VAR_2->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 UINT VAR_7 = VAR_0;

 VAR_1;

 FUNC_0(VAR_3);
 FUNC_8(VAR_3, sizeof(RPC_ENUM_L3SW));

 FUNC_4(VAR_6->L3SwList);
 {
  VAR_3->NumItem = FUNC_2(VAR_6->L3SwList);
  VAR_3->Items = FUNC_9(sizeof(RPC_ENUM_L3SW_ITEM) * VAR_3->NumItem);
  for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_6->L3SwList);VAR_4++)
  {
   L3SW *VAR_8 = FUNC_1(VAR_6->L3SwList, VAR_4);
   RPC_ENUM_L3SW_ITEM *VAR_9 = &VAR_3->Items[VAR_4];

   FUNC_3(VAR_8->lock);
   {
    FUNC_5(VAR_9->Name, sizeof(VAR_9->Name), VAR_8->Name);
    VAR_9->NumInterfaces = FUNC_2(VAR_8->IfList);
    VAR_9->NumTables = FUNC_2(VAR_8->TableList);
    VAR_9->Active = VAR_8->Active;
    VAR_9->Online = VAR_8->Online;
   }
   FUNC_6(VAR_8->lock);
  }
 }
 FUNC_7(VAR_6->L3SwList);

 return VAR_7;
}
