
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int username ;
typedef int t ;
typedef int id ;
typedef int hubname ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int UserName; int HubName; int Id; } ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {scalar_t__ NumItem; TYPE_3__* IdList; } ;
typedef TYPE_1__ RPC_ENUM_ETHERIP_ID ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef TYPE_3__ ETHERIP_ID ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_7 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_ETHERIP_ID VAR_10;
 UINT VAR_11;
 CT *VAR_12;

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_10(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_8(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  VAR_12 = FUNC_4();

  FUNC_3(VAR_12, FUNC_11("SM_ETHERIP_COLUMN_0"), 0);
  FUNC_3(VAR_12, FUNC_11("SM_ETHERIP_COLUMN_1"), 0);
  FUNC_3(VAR_12, FUNC_11("SM_ETHERIP_COLUMN_2"), 0);

  for (VAR_11 = 0;VAR_11 < VAR_10.NumItem;VAR_11++)
  {
   ETHERIP_ID *VAR_13 = &VAR_10.IdList[VAR_11];
   wchar_t VAR_14[VAR_2], VAR_15[VAR_2], VAR_16[VAR_2];

   FUNC_9(VAR_14, sizeof(VAR_14), VAR_13->Id);
   FUNC_9(VAR_15, sizeof(VAR_15), VAR_13->HubName);
   FUNC_9(VAR_16, sizeof(VAR_16), VAR_13->UserName);

   FUNC_2(VAR_12, VAR_14, VAR_15, VAR_16);
  }

  FUNC_1(VAR_12, VAR_3);

  FUNC_6(&VAR_10);
 }

 FUNC_5(VAR_7);

 return 0;
}
