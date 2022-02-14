
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* KernelVersion; void* KernelName; void* OsVersion; void* OsVendorName; void* OsProductName; void* OsSystemName; int OsServicePack; int OsType; } ;
typedef TYPE_1__ OS_INFO ;


 void* FUNC_0 (void*) ;

void FUNC_1(OS_INFO *VAR_0, OS_INFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->OsType = VAR_1->OsType;
 VAR_0->OsServicePack = VAR_1->OsServicePack;
 VAR_0->OsSystemName = FUNC_0(VAR_1->OsSystemName);
 VAR_0->OsProductName = FUNC_0(VAR_1->OsProductName);
 VAR_0->OsVendorName = FUNC_0(VAR_1->OsVendorName);
 VAR_0->OsVersion = FUNC_0(VAR_1->OsVersion);
 VAR_0->KernelName = FUNC_0(VAR_1->KernelName);
 VAR_0->KernelVersion = FUNC_0(VAR_1->KernelVersion);
}
