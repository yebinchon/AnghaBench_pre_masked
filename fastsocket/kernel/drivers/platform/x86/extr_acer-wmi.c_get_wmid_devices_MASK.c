
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,struct acpi_buffer*) ;

__attribute__((used)) static u32 FUNC_2(void)
{
 struct acpi_buffer VAR_3 = {VAR_0, ((void*)0)};
 union acpi_object *VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_1(VAR_2, 1, &VAR_3);
 if (FUNC_0(VAR_5))
  return 0;

 VAR_4 = (union acpi_object *) VAR_3.pointer;
 if (VAR_4 && VAR_4->type == VAR_1 &&
  VAR_4->buffer.length == sizeof(u32)) {
  return *((u32 *) VAR_4->buffer.pointer);
 } else {
  return 0;
 }
}
