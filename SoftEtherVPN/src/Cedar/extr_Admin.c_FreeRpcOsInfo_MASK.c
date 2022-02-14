
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int KernelVersion; int KernelName; int OsVersion; int OsVendorName; int OsProductName; int OsSystemName; } ;
typedef TYPE_1__ OS_INFO ;


 int FUNC_0 (int ) ;

void FUNC_1(OS_INFO *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->OsSystemName);
 FUNC_0(VAR_0->OsProductName);
 FUNC_0(VAR_0->OsVendorName);
 FUNC_0(VAR_0->OsVersion);
 FUNC_0(VAR_0->KernelName);
 FUNC_0(VAR_0->KernelVersion);
}
