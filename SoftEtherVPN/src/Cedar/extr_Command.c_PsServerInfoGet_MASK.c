
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_7__ {scalar_t__ OsServicePack; int KernelVersion; int KernelName; int OsVersion; int OsVendorName; int OsProductName; int OsSystemName; } ;
struct TYPE_8__ {TYPE_1__ OsInfo; int ServerType; int ServerHostName; int ServerBuildInfoString; int ServerVersionString; int ServerProductName; } ;
typedef TYPE_2__ RPC_SERVER_INFO ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (int ) ;
 int VAR_2 ;
 int * FUNC_8 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int,int ,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (char*) ;

UINT FUNC_14(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9;
 RPC_SERVER_INFO VAR_10;
 CT *VAR_11;
 wchar_t VAR_12[VAR_2];

 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_12(&VAR_10, sizeof(VAR_10));
 VAR_9 = FUNC_9(VAR_8->Rpc, &VAR_10);
 if (VAR_9 != VAR_1)
 {
  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }

 VAR_11 = FUNC_4();

 FUNC_3(VAR_11, FUNC_13("SM_STATUS_COLUMN_1"), 0);
 FUNC_3(VAR_11, FUNC_13("SM_STATUS_COLUMN_2"), 0);


 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.ServerProductName);
 FUNC_2(VAR_11, FUNC_13("SM_INFO_PRODUCT_NAME"), VAR_12);


 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.ServerVersionString);
 FUNC_2(VAR_11, FUNC_13("SM_INFO_VERSION"), VAR_12);


 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.ServerBuildInfoString);
 FUNC_2(VAR_11, FUNC_13("SM_INFO_BUILD"), VAR_12);


 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.ServerHostName);
 FUNC_2(VAR_11, FUNC_13("SM_INFO_HOSTNAME"), VAR_12);


 FUNC_2(VAR_11, FUNC_13("SM_ST_SERVER_TYPE"), FUNC_7(VAR_10.ServerType));


 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.OsInfo.OsSystemName);
 FUNC_2(VAR_11, FUNC_13("SM_OS_SYSTEM_NAME"), VAR_12);

 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.OsInfo.OsProductName);
 FUNC_2(VAR_11, FUNC_13("SM_OS_PRODUCT_NAME"), VAR_12);

 if (VAR_10.OsInfo.OsServicePack != 0)
 {
  FUNC_11(VAR_12, sizeof(VAR_12), FUNC_13("SM_OS_SP_TAG"), VAR_10.OsInfo.OsServicePack);
  FUNC_2(VAR_11, FUNC_13("SM_OS_SERVICE_PACK"), VAR_12);
 }

 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.OsInfo.OsVendorName);
 FUNC_2(VAR_11, FUNC_13("SM_OS_VENDER_NAME"), VAR_12);

 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.OsInfo.OsVersion);
 FUNC_2(VAR_11, FUNC_13("SM_OS_VERSION"), VAR_12);

 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.OsInfo.KernelName);
 FUNC_2(VAR_11, FUNC_13("SM_OS_KERNEL_NAME"), VAR_12);

 FUNC_10(VAR_12, sizeof(VAR_12), VAR_10.OsInfo.KernelVersion);
 FUNC_2(VAR_11, FUNC_13("SM_OS_KERNEL_VERSION"), VAR_12);

 FUNC_1(VAR_11, VAR_3);

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
