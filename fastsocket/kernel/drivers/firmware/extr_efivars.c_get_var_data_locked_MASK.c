
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efivars {TYPE_1__* ops; } ;
struct efi_variable {int DataSize; int Data; int Attributes; int VendorGuid; int VariableName; } ;
typedef int efi_status_t ;
struct TYPE_2__ {int (* get_variable ) (int ,int *,int *,int*,int ) ;} ;


 int FUNC_0 (int ,int *,int *,int*,int ) ;

__attribute__((used)) static efi_status_t
FUNC_1(struct efivars *VAR_0, struct efi_variable *VAR_1)
{
 efi_status_t VAR_2;

 VAR_1->DataSize = 1024;
 VAR_2 = VAR_0->ops->get_variable(VAR_1->VariableName,
         &VAR_1->VendorGuid,
         &VAR_1->Attributes,
         &VAR_1->DataSize,
         VAR_1->Data);
 return VAR_2;
}
