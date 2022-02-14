
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_4__ {void* KernelVersion; void* KernelName; void* OsVersion; void* OsVendorName; void* OsProductName; void* OsSystemName; void* OsServicePack; void* OsType; } ;
typedef int PACK ;
typedef TYPE_1__ OS_INFO ;


 void* FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(OS_INFO *VAR_1, PACK *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1, sizeof(OS_INFO));
 VAR_1->OsType = FUNC_1(VAR_2, "OsType");
 VAR_1->OsServicePack = FUNC_1(VAR_2, "OsServicePack");
 if (FUNC_2(VAR_2, "OsSystemName", VAR_3, sizeof(VAR_3)))
 {
  VAR_1->OsSystemName = FUNC_0(VAR_3);
 }
 if (FUNC_2(VAR_2, "OsProductName", VAR_3, sizeof(VAR_3)))
 {
  VAR_1->OsProductName = FUNC_0(VAR_3);
 }
 if (FUNC_2(VAR_2, "OsVendorName", VAR_3, sizeof(VAR_3)))
 {
  VAR_1->OsVendorName = FUNC_0(VAR_3);
 }
 if (FUNC_2(VAR_2, "OsVersion", VAR_3, sizeof(VAR_3)))
 {
  VAR_1->OsVersion = FUNC_0(VAR_3);
 }
 if (FUNC_2(VAR_2, "KernelName", VAR_3, sizeof(VAR_3)))
 {
  VAR_1->KernelName = FUNC_0(VAR_3);
 }
 if (FUNC_2(VAR_2, "KernelVersion", VAR_3, sizeof(VAR_3)))
 {
  VAR_1->KernelVersion = FUNC_0(VAR_3);
 }
}
