
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_18__ {TYPE_1__* Server; } ;
struct TYPE_17__ {int Name; int Descrption; int Value; } ;
struct TYPE_16__ {int AdminOptionList; int Name; } ;
struct TYPE_15__ {int NumItem; TYPE_4__* Items; int HubName; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ADMIN_OPTION ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN_OPTION ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 TYPE_4__* FUNC_13 (int) ;

UINT FUNC_14(ADMIN *VAR_6, RPC_ADMIN_OPTION *VAR_7)
{
 UINT VAR_8;
 SERVER *VAR_9 = VAR_6->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;

 VAR_0;

 VAR_4;
 if (VAR_9->ServerType == VAR_5)
 {
  return VAR_2;
 }

 FUNC_5(VAR_10);
 {
  VAR_11 = FUNC_1(VAR_10, VAR_7->HubName);
 }
 FUNC_10(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_0(VAR_7);
 FUNC_12(VAR_7, sizeof(RPC_ADMIN_OPTION));

 FUNC_8(VAR_7->HubName, sizeof(VAR_7->HubName), VAR_11->Name);

 FUNC_6(VAR_11->AdminOptionList);
 {
  VAR_7->NumItem = FUNC_4(VAR_11->AdminOptionList);
  VAR_7->Items = FUNC_13(sizeof(ADMIN_OPTION) * VAR_7->NumItem);

  for (VAR_8 = 0;VAR_8 < VAR_7->NumItem;VAR_8++)
  {
   ADMIN_OPTION *VAR_12 = FUNC_3(VAR_11->AdminOptionList, VAR_8);
   ADMIN_OPTION *VAR_13 = &VAR_7->Items[VAR_8];

   FUNC_8(VAR_13->Name, sizeof(VAR_13->Name), VAR_12->Name);
   VAR_13->Value = VAR_12->Value;
   FUNC_9(VAR_13->Descrption, sizeof(VAR_13->Descrption), FUNC_2(VAR_13->Name));
  }
 }
 FUNC_11(VAR_11->AdminOptionList);

 FUNC_7(VAR_11);

 return VAR_3;
}
