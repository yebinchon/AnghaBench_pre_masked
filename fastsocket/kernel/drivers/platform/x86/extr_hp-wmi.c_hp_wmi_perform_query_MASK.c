
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct bios_return {int return_code; int value; } ;
struct bios_args {int signature; int command; int commandtype; int datasize; int data; } ;
struct acpi_buffer {int member_0; union acpi_object* pointer; struct bios_args* member_1; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_1(int VAR_4, int VAR_5, int VAR_6)
{
 struct bios_return VAR_7;
 acpi_status VAR_8;
 union acpi_object *VAR_9;
 struct bios_args VAR_10 = {
  .signature = 0x55434553,
  .command = VAR_5 ? 0x2 : 0x1,
  .commandtype = VAR_4,
  .datasize = VAR_5 ? 0x4 : 0,
  .data = VAR_6,
 };
 struct acpi_buffer VAR_11 = { sizeof(struct bios_args), &VAR_10 };
 struct acpi_buffer VAR_12 = { VAR_0, ((void*)0) };

 VAR_8 = FUNC_0(VAR_3, 0, 0x3, &VAR_11, &VAR_12);

 VAR_9 = VAR_12.pointer;

 if (!VAR_9 || VAR_9->type != VAR_1)
  return -VAR_2;

 VAR_7 = *((struct bios_return *)VAR_9->buffer.pointer);
 if (VAR_7.return_code > 0)
  return VAR_7.return_code * -1;
 else
  return VAR_7.value;
}
