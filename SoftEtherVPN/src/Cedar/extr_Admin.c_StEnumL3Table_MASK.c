
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int name ;
typedef size_t UINT ;
struct TYPE_20__ {TYPE_1__* Server; } ;
struct TYPE_19__ {int lock; int TableList; } ;
struct TYPE_18__ {int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; } ;
struct TYPE_17__ {char* Name; int NumItem; TYPE_2__* Items; } ;
struct TYPE_16__ {char* Name; int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; } ;
struct TYPE_15__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3TABLE ;
typedef TYPE_3__ RPC_ENUM_L3TABLE ;
typedef TYPE_4__ L3TABLE ;
typedef TYPE_5__ L3SW ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_5__* FUNC_2 (int *,char*) ;
 TYPE_4__* FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_10 (int) ;

UINT FUNC_11(ADMIN *VAR_5, RPC_ENUM_L3TABLE *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 UINT VAR_9 = VAR_2;
 L3SW *VAR_10;
 char VAR_11[VAR_3 + 1];

 if (FUNC_1(VAR_6->Name))
 {
  return VAR_0;
 }

 VAR_4;

 FUNC_7(VAR_11, sizeof(VAR_11), VAR_6->Name);
 FUNC_0(VAR_6);
 FUNC_9(VAR_6, sizeof(RPC_ENUM_L3TABLE));
 FUNC_7(VAR_6->Name, sizeof(VAR_6->Name), VAR_11);

 VAR_10 = FUNC_2(VAR_8, VAR_6->Name);

 if (VAR_10 == ((void*)0))
 {
  VAR_9 = VAR_1;
 }
 else
 {
  UINT VAR_12;

  FUNC_5(VAR_10->lock);
  {
   VAR_6->NumItem = FUNC_4(VAR_10->TableList);
   VAR_6->Items = FUNC_10(sizeof(RPC_L3TABLE) * VAR_6->NumItem);

   for (VAR_12 = 0;VAR_12 < VAR_6->NumItem;VAR_12++)
   {
    L3TABLE *VAR_13 = FUNC_3(VAR_10->TableList, VAR_12);
    RPC_L3TABLE *VAR_14 = &VAR_6->Items[VAR_12];

    FUNC_7(VAR_14->Name, sizeof(VAR_14->Name), VAR_11);
    VAR_14->NetworkAddress = VAR_13->NetworkAddress;
    VAR_14->SubnetMask = VAR_13->SubnetMask;
    VAR_14->GatewayAddress = VAR_13->GatewayAddress;
    VAR_14->Metric = VAR_13->Metric;
   }
  }
  FUNC_8(VAR_10->lock);

  FUNC_6(VAR_10);
 }

 return VAR_9;
}
