
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {scalar_t__ NumItem; TYPE_1__* Items; int HubName; } ;
struct TYPE_13__ {int CrlInfo; int Key; } ;
typedef TYPE_1__ RPC_ENUM_CRL_ITEM ;
typedef TYPE_2__ RPC_ENUM_CRL ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_4__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_4__*,int ) ;

UINT FUNC_14(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_ENUM_CRL VAR_9;


 if (VAR_7->HubName == ((void*)0))
 {
  VAR_2->Write(VAR_2, FUNC_12("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_11(&VAR_9, sizeof(VAR_9));
 FUNC_9(VAR_9.HubName, sizeof(VAR_9.HubName), VAR_7->HubName);


 VAR_8 = FUNC_8(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_5(VAR_6);
  return VAR_8;
 }
 else
 {
  UINT VAR_10;
  CT *VAR_11 = FUNC_4();

  FUNC_3(VAR_11, FUNC_12("CMD_ID"), 0);
  FUNC_3(VAR_11, FUNC_12("SM_CRL_COLUMN_1"), 0);

  for (VAR_10 = 0;VAR_10 < VAR_9.NumItem;VAR_10++)
  {
   wchar_t VAR_12[64];
   RPC_ENUM_CRL_ITEM *VAR_13 = &VAR_9.Items[VAR_10];

   FUNC_10(VAR_12, VAR_13->Key);
   FUNC_2(VAR_11, VAR_12, VAR_13->CrlInfo);
  }

  FUNC_1(VAR_11, VAR_2, 1);
 }

 FUNC_6(&VAR_9);

 FUNC_5(VAR_6);

 return 0;
}
