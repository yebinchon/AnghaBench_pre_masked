
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct salinfo_platform_oemdata_parms {int oemdata_size; int oemdata; int efi_guid; int ret; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct salinfo_platform_oemdata_parms *VAR_1 = VAR_0;
 VAR_1->ret = FUNC_0(VAR_1->efi_guid, VAR_1->oemdata, VAR_1->oemdata_size);
}
