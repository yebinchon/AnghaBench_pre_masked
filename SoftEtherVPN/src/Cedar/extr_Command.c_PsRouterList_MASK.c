
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp1 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__* Items; } ;
struct TYPE_7__ {int Active; int Online; int NumTables; int NumInterfaces; int Name; } ;
typedef TYPE_1__ RPC_ENUM_L3SW_ITEM ;
typedef TYPE_2__ RPC_ENUM_L3SW ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_7 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int * FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_L3SW VAR_10;

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_11(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_8(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_11 = FUNC_4();
  UINT VAR_12;

  FUNC_3(VAR_11, FUNC_12("SM_L3_SW_COLUMN1"), 0);
  FUNC_3(VAR_11, FUNC_12("SM_L3_SW_COLUMN2"), 0);
  FUNC_3(VAR_11, FUNC_12("SM_L3_SW_COLUMN3"), 1);
  FUNC_3(VAR_11, FUNC_12("SM_L3_SW_COLUMN4"), 1);

  for (VAR_12 = 0;VAR_12 < VAR_10.NumItem;VAR_12++)
  {
   RPC_ENUM_L3SW_ITEM *VAR_13 = &VAR_10.Items[VAR_12];
   wchar_t VAR_14[VAR_2], *VAR_15, VAR_16[64], VAR_17[64];

   FUNC_9(VAR_14, sizeof(VAR_14), VAR_13->Name);
   if (VAR_13->Active == 0)
   {
    VAR_15 = FUNC_12("SM_L3_SW_ST_F_F");
   }
   else if (VAR_13->Online == 0)
   {
    VAR_15 = FUNC_12("SM_L3_SW_ST_T_F");
   }
   else
   {
    VAR_15 = FUNC_12("SM_L3_SW_ST_T_T");
   }
   FUNC_10(VAR_16, VAR_13->NumInterfaces);
   FUNC_10(VAR_17, VAR_13->NumTables);

   FUNC_2(VAR_11,
    VAR_14, VAR_15, VAR_16, VAR_17);
  }

  FUNC_1(VAR_11, VAR_3);
 }

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
