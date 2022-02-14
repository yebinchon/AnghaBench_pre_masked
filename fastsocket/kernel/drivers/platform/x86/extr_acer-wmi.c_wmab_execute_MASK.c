
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmab_args {int dummy; } ;
struct acpi_buffer {int length; int * pointer; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status FUNC_1(struct wmab_args *VAR_1,
struct acpi_buffer *VAR_2)
{
 struct acpi_buffer VAR_3;
 acpi_status VAR_4;
 VAR_3.length = sizeof(struct wmab_args);
 VAR_3.pointer = (u8 *)VAR_1;

 VAR_4 = FUNC_0(VAR_0, 1, 1, &VAR_3, VAR_2);

 return VAR_4;
}
