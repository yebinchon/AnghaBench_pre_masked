
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_11__ {int Rpc; } ;
struct TYPE_10__ {scalar_t__ NumItem; TYPE_1__* Items; int Name; } ;
struct TYPE_9__ {int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; } ;
typedef TYPE_1__ RPC_L3TABLE ;
typedef TYPE_2__ RPC_ENUM_L3TABLE ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,int ) ;
 int VAR_4 ;
 int * FUNC_9 (int *,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (char*) ;

UINT FUNC_15(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_ENUM_L3TABLE VAR_12;
 CT *VAR_13;
 wchar_t VAR_14[VAR_4];
 wchar_t VAR_15[VAR_4];
 wchar_t VAR_16[VAR_4];
 wchar_t VAR_17[VAR_4];

 PARAM VAR_18[] =
 {
  {"[name]", &VAR_1, FUNC_14("CMD_RouterTableList_PROMPT_NAME"), VAR_0, ((void*)0)},
 };

 VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_18, sizeof(VAR_18) / sizeof(VAR_18[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_13(&VAR_12, sizeof(VAR_12));

 FUNC_11(VAR_12.Name, sizeof(VAR_12.Name), FUNC_7(VAR_9, "[name]"));


 VAR_11 = FUNC_10(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_5(VAR_9);
  return VAR_11;
 }
 else
 {
  UINT VAR_19;

  VAR_13 = FUNC_4();

  FUNC_3(VAR_13, FUNC_14("SM_L3_SW_TABLE_COLUMN1"), 0);
  FUNC_3(VAR_13, FUNC_14("SM_L3_SW_TABLE_COLUMN2"), 0);
  FUNC_3(VAR_13, FUNC_14("SM_L3_SW_TABLE_COLUMN3"), 0);
  FUNC_3(VAR_13, FUNC_14("SM_L3_SW_TABLE_COLUMN4"), 1);

  for (VAR_19 = 0;VAR_19 < VAR_12.NumItem;VAR_19++)
  {
   RPC_L3TABLE *VAR_20 = &VAR_12.Items[VAR_19];

   FUNC_8(VAR_14, sizeof(VAR_14), VAR_20->NetworkAddress);
   FUNC_8(VAR_15, sizeof(VAR_15), VAR_20->SubnetMask);
   FUNC_8(VAR_16, sizeof(VAR_16), VAR_20->GatewayAddress);
   FUNC_12(VAR_17, VAR_20->Metric);

   FUNC_2(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
  }

  FUNC_1(VAR_13, VAR_5);
 }

 FUNC_6(&VAR_12);

 FUNC_5(VAR_9);

 return 0;
}
