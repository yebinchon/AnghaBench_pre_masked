
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_15__ {int Value; int Name; } ;
struct TYPE_14__ {TYPE_1__* Server; } ;
struct TYPE_13__ {int Name; int Descrption; int Value; } ;
struct TYPE_12__ {int NumItem; TYPE_3__* Items; } ;
struct TYPE_11__ {scalar_t__ ServerType; } ;
typedef TYPE_2__ RPC_ADMIN_OPTION ;
typedef TYPE_3__ ADMIN_OPTION ;
typedef TYPE_4__ ADMIN ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_5 (int) ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;

UINT FUNC_6(ADMIN *VAR_6, RPC_ADMIN_OPTION *VAR_7)
{
 UINT VAR_8;

 VAR_2;
 if (VAR_6->Server->ServerType == VAR_3)
 {
  return VAR_0;
 }

 FUNC_0(VAR_7);
 FUNC_4(VAR_7, sizeof(RPC_ADMIN_OPTION));

 VAR_7->NumItem = VAR_5;
 VAR_7->Items = FUNC_5(sizeof(ADMIN_OPTION) * VAR_7->NumItem);

 for (VAR_8 = 0;VAR_8 < VAR_7->NumItem;VAR_8++)
 {
  ADMIN_OPTION *VAR_9 = &VAR_7->Items[VAR_8];

  FUNC_2(VAR_9->Name, sizeof(VAR_9->Name), VAR_4[VAR_8].Name);
  VAR_9->Value = VAR_4[VAR_8].Value;
  FUNC_3(VAR_9->Descrption, sizeof(VAR_9->Descrption), FUNC_1(VAR_9->Name));
 }

 return VAR_1;
}
