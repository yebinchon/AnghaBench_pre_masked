
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int name ;
typedef int UINT64 ;
struct TYPE_9__ {int Size; int Buf; } ;
struct TYPE_8__ {char OsType; char* KernelName; char* KernelVersion; char* OsProductName; char OsServicePack; char* OsSystemName; char* OsVendorName; char* OsVersion; } ;
typedef TYPE_1__ OS_INFO ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 TYPE_1__* FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;

void FUNC_9(void *VAR_0)
{
 BUF *VAR_1;
 char VAR_2[64];
 OS_INFO *VAR_3;
 UINT64 VAR_4 = 0;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_1();

 VAR_1 = FUNC_4();
 FUNC_2(VAR_2, sizeof(VAR_2));

 VAR_3 = FUNC_3();

 FUNC_7(VAR_1, VAR_2, FUNC_6(VAR_2));

 FUNC_8(VAR_1, VAR_4);

 FUNC_7(VAR_1, &VAR_3->OsType, sizeof(VAR_3->OsType));
 FUNC_7(VAR_1, VAR_3->KernelName, FUNC_6(VAR_3->KernelName));
 FUNC_7(VAR_1, VAR_3->KernelVersion, FUNC_6(VAR_3->KernelVersion));
 FUNC_7(VAR_1, VAR_3->OsProductName, FUNC_6(VAR_3->OsProductName));
 FUNC_7(VAR_1, &VAR_3->OsServicePack, sizeof(VAR_3->OsServicePack));
 FUNC_7(VAR_1, VAR_3->OsSystemName, FUNC_6(VAR_3->OsSystemName));
 FUNC_7(VAR_1, VAR_3->OsVendorName, FUNC_6(VAR_3->OsVendorName));
 FUNC_7(VAR_1, VAR_3->OsVersion, FUNC_6(VAR_3->OsVersion));

 FUNC_5(VAR_0, VAR_1->Buf, VAR_1->Size);

 FUNC_0(VAR_1);
}
