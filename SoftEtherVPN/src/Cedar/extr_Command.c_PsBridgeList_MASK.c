
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int nic ;
typedef int hub ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__* Items; } ;
struct TYPE_7__ {scalar_t__ Active; scalar_t__ Online; int HubName; int DeviceName; } ;
typedef TYPE_1__ RPC_LOCALBRIDGE ;
typedef TYPE_2__ RPC_ENUM_LOCALBRIDGE ;
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
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int * FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_LOCALBRIDGE VAR_10;
 UINT VAR_11;
 CT *VAR_12;

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

 VAR_12 = FUNC_4();

 FUNC_3(VAR_12, FUNC_12("SM_BRIDGE_COLUMN_1"), 0);
 FUNC_3(VAR_12, FUNC_12("SM_BRIDGE_COLUMN_2"), 0);
 FUNC_3(VAR_12, FUNC_12("SM_BRIDGE_COLUMN_3"), 0);
 FUNC_3(VAR_12, FUNC_12("SM_BRIDGE_COLUMN_4"), 0);

 for (VAR_11 = 0;VAR_11 < VAR_10.NumItem;VAR_11++)
 {
  RPC_LOCALBRIDGE *VAR_13 = &VAR_10.Items[VAR_11];
  wchar_t VAR_14[VAR_2];
  wchar_t VAR_15[VAR_2];
  wchar_t VAR_16[VAR_2];
  wchar_t *VAR_17 = FUNC_12("SM_BRIDGE_OFFLINE");

  FUNC_10(VAR_14, VAR_11 + 1);
  FUNC_9(VAR_15, sizeof(VAR_15), VAR_13->DeviceName);
  FUNC_9(VAR_16, sizeof(VAR_16), VAR_13->HubName);

  if (VAR_13->Online)
  {
   VAR_17 = VAR_13->Active ? FUNC_12("SM_BRIDGE_ONLINE") : FUNC_12("SM_BRIDGE_ERROR");
  }

  FUNC_2(VAR_12, VAR_14, VAR_16, VAR_15, VAR_17);
 }

 FUNC_1(VAR_12, VAR_3);

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
