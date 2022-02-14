
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef scalar_t__ u32 ;
struct acpi_buffer {void* member_1; scalar_t__ pointer; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,scalar_t__,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status
FUNC_3(u32 VAR_3, u32 VAR_4, u32 *VAR_5)
{
 struct acpi_buffer VAR_6 = { (acpi_size) sizeof(u32), (void *)(&VAR_4) };
 struct acpi_buffer VAR_7 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_8;
 u32 VAR_9;
 acpi_status VAR_10;

 VAR_10 = FUNC_2(VAR_2, 1, VAR_3, &VAR_6, &VAR_7);

 if (FUNC_0(VAR_10))
  return VAR_10;

 VAR_8 = (union acpi_object *) VAR_7.pointer;
 if (VAR_8 && VAR_8->type == VAR_1 &&
  VAR_8->buffer.length == sizeof(u32)) {
  VAR_9 = *((u32 *) VAR_8->buffer.pointer);
 } else {
  VAR_9 = 0;
 }

 if (VAR_5)
  *VAR_5 = VAR_9;

 FUNC_1(VAR_7.pointer);

 return VAR_10;
}
