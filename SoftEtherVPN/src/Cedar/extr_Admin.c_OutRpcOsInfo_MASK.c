
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int KernelVersion; int KernelName; int OsVersion; int OsVendorName; int OsProductName; int OsSystemName; int OsServicePack; int OsType; } ;
typedef int PACK ;
typedef TYPE_1__ OS_INFO ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, OS_INFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "OsType", VAR_1->OsType);
 FUNC_0(VAR_0, "OsServicePack", VAR_1->OsServicePack);
 FUNC_1(VAR_0, "OsSystemName", VAR_1->OsSystemName);
 FUNC_1(VAR_0, "OsProductName", VAR_1->OsProductName);
 FUNC_1(VAR_0, "OsVendorName", VAR_1->OsVendorName);
 FUNC_1(VAR_0, "OsVersion", VAR_1->OsVersion);
 FUNC_1(VAR_0, "KernelName", VAR_1->KernelName);
 FUNC_1(VAR_0, "KernelVersion", VAR_1->KernelVersion);
}
