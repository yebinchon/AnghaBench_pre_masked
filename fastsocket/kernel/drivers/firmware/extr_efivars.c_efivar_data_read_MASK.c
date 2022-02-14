
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int DataSize; int Data; } ;
struct efivar_entry {int efivars; struct efi_variable var; } ;
typedef int ssize_t ;
typedef scalar_t__ efi_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct efi_variable*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct efivar_entry *VAR_3, char *VAR_4)
{
 struct efi_variable *VAR_5 = &VAR_3->var;
 efi_status_t VAR_6;

 if (!VAR_3 || !VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3->efivars, VAR_5);
 if (VAR_6 != VAR_0)
  return -VAR_2;

 FUNC_1(VAR_4, VAR_5->Data, VAR_5->DataSize);
 return VAR_5->DataSize;
}
