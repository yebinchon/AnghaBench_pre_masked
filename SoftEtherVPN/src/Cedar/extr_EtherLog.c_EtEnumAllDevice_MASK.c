
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_12__ {size_t NumItem; TYPE_2__* Items; } ;
struct TYPE_11__ {int DeviceName; } ;
struct TYPE_10__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_ENUM_DEVICE_ITEM ;
typedef TYPE_3__ RPC_ENUM_DEVICE ;
typedef int EL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_6 (int) ;

UINT FUNC_7(EL *VAR_2, RPC_ENUM_DEVICE *VAR_3)
{
 TOKEN_LIST *VAR_4;
 UINT VAR_5;
 if (FUNC_3() == 0)
 {
  return VAR_0;
 }

 FUNC_0(VAR_3);
 FUNC_5(VAR_3, sizeof(RPC_ENUM_DEVICE));

 VAR_4 = FUNC_2();

 VAR_3->NumItem = VAR_4->NumTokens;
 VAR_3->Items = FUNC_6(sizeof(RPC_ENUM_DEVICE_ITEM) * VAR_3->NumItem);

 for (VAR_5 = 0;VAR_5 < VAR_4->NumTokens;VAR_5++)
 {
  char *VAR_6 = VAR_4->Token[VAR_5];
  RPC_ENUM_DEVICE_ITEM *VAR_7 = &VAR_3->Items[VAR_5];

  FUNC_4(VAR_7->DeviceName, sizeof(VAR_7->DeviceName), VAR_6);
 }

 FUNC_1(VAR_4);

 return VAR_1;
}
