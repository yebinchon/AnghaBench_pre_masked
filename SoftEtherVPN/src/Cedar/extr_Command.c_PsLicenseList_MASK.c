
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp8 ;
typedef int tmp6 ;
typedef int tmp5 ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {scalar_t__ NumItem; TYPE_1__* Items; } ;
struct TYPE_7__ {scalar_t__ Expires; int SerialId; int SystemId; int ProductId; int LicenseId; int Status; int LicenseName; int LicenseKey; int Id; } ;
typedef TYPE_1__ RPC_ENUM_LICENSE_KEY_ITEM ;
typedef TYPE_2__ RPC_ENUM_LICENSE_KEY ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int,scalar_t__,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int,char*,int ) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (char*) ;

UINT FUNC_17(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_ENUM_LICENSE_KEY VAR_12;
 CT *VAR_13;
 UINT VAR_14;

 VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, ((void*)0), 0);
 if (VAR_9 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_15(&VAR_12, sizeof(VAR_12));


 VAR_11 = FUNC_10(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_1)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_5(VAR_9);
  return VAR_11;
 }

 VAR_13 = FUNC_4();
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_1"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_2"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_3"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_4"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_5"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_6"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_7"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_8"), 0);
 FUNC_3(VAR_13, FUNC_16("SM_LICENSE_COLUMN_9"), 0);

 for (VAR_14 = 0;VAR_14 < VAR_12.NumItem;VAR_14++)
 {
  wchar_t VAR_15[32], VAR_16[VAR_2 + 1], VAR_17[VAR_4 + 1],
   *VAR_18, VAR_19[128], VAR_20[VAR_3 + 1], VAR_21[64],
   VAR_22[64], VAR_23[64];
  RPC_ENUM_LICENSE_KEY_ITEM *VAR_24 = &VAR_12.Items[VAR_14];

  FUNC_14(VAR_15, VAR_24->Id);
  FUNC_11(VAR_16, sizeof(VAR_16), VAR_24->LicenseKey);
  FUNC_11(VAR_17, sizeof(VAR_17), VAR_24->LicenseName);
  VAR_18 = FUNC_8(VAR_24->Status);
  if (VAR_24->Expires == 0)
  {
   FUNC_13(VAR_19, sizeof(VAR_19), FUNC_16("SM_LICENSE_NO_EXPIRES"));
  }
  else
  {
   FUNC_7(VAR_19, sizeof(VAR_19), VAR_24->Expires, ((void*)0));
  }
  FUNC_11(VAR_20, sizeof(VAR_20), VAR_24->LicenseId);
  FUNC_14(VAR_21, VAR_24->ProductId);
  FUNC_12(VAR_22, sizeof(VAR_22), L"%I64u", VAR_24->SystemId);
  FUNC_14(VAR_23, VAR_24->SerialId);

  FUNC_2(VAR_13,
   VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);
 }

 FUNC_1(VAR_13, VAR_5, 1);

 FUNC_6(&VAR_12);

 FUNC_5(VAR_9);

 return 0;
}
