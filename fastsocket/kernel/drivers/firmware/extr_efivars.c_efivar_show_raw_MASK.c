
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int dummy; } ;
struct efivar_entry {int efivars; struct efi_variable var; } ;
typedef int ssize_t ;
typedef scalar_t__ efi_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct efi_variable*) ;
 int FUNC_1 (char*,struct efi_variable*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct efivar_entry *VAR_2, char *VAR_3)
{
 struct efi_variable *VAR_4 = &VAR_2->var;
 efi_status_t VAR_5;

 if (!VAR_2 || !VAR_3)
  return 0;

 VAR_5 = FUNC_0(VAR_2->efivars, VAR_4);
 if (VAR_5 != VAR_0)
  return -VAR_1;

 FUNC_1(VAR_3, VAR_4, sizeof(*VAR_4));
 return sizeof(*VAR_4);
}
