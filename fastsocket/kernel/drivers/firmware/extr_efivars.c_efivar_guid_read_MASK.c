
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int VendorGuid; } ;
struct efivar_entry {struct efi_variable var; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct efivar_entry *VAR_0, char *VAR_1)
{
 struct efi_variable *VAR_2 = &VAR_0->var;
 char *VAR_3 = VAR_1;

 if (!VAR_0 || !VAR_1)
  return 0;

 FUNC_0(&VAR_2->VendorGuid, VAR_3);
 VAR_3 += FUNC_2(VAR_3);
 VAR_3 += FUNC_1(VAR_3, "\n");

 return VAR_3 - VAR_1;
}
