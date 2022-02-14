
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int Attributes; } ;
struct efivar_entry {int efivars; struct efi_variable var; } ;
typedef int ssize_t ;
typedef scalar_t__ efi_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct efi_variable*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct efivar_entry *VAR_3, char *VAR_4)
{
 struct efi_variable *VAR_5 = &VAR_3->var;
 char *VAR_6 = VAR_4;
 efi_status_t VAR_7;

 if (!VAR_3 || !VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3->efivars, VAR_5);
 if (VAR_7 != VAR_0)
  return -VAR_2;

 if (VAR_5->Attributes & 0x1)
  VAR_6 += FUNC_1(VAR_6, "EFI_VARIABLE_NON_VOLATILE\n");
 if (VAR_5->Attributes & 0x2)
  VAR_6 += FUNC_1(VAR_6, "EFI_VARIABLE_BOOTSERVICE_ACCESS\n");
 if (VAR_5->Attributes & 0x4)
  VAR_6 += FUNC_1(VAR_6, "EFI_VARIABLE_RUNTIME_ACCESS\n");
 return VAR_6 - VAR_4;
}
