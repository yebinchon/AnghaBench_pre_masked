
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef scalar_t__ u32 ;
struct acpi_subtable_header {int type; } ;
struct acpi_madt_io_sapic {scalar_t__ global_irq_base; } ;
struct acpi_madt_io_apic {scalar_t__ global_irq_base; } ;
struct acpi_buffer {union acpi_object* pointer; int length; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;


 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_4 (union acpi_object*) ;

__attribute__((used)) static int FUNC_5(acpi_handle VAR_2, u32 *VAR_3)
{
 acpi_status VAR_4;
 int VAR_5 = -1;
 unsigned long long VAR_6;
 struct acpi_buffer VAR_7 = {VAR_0, ((void*)0)};
 union acpi_object *VAR_8;
 void *VAR_9;

 VAR_4 = FUNC_2(VAR_2, "_GSB", ((void*)0), &VAR_6);
 if (FUNC_1(VAR_4)) {
  *VAR_3 = (u32)VAR_6;
  return 0;
 }

 VAR_4 = FUNC_3(VAR_2, "_MAT", ((void*)0), &VAR_7);
 if (FUNC_0(VAR_4) || !VAR_7.length || !VAR_7.pointer)
  return -1;

 VAR_8 = VAR_7.pointer;
 if (VAR_8->type != VAR_1)
  goto out;

 VAR_9 = VAR_8->buffer.pointer;
 switch (((struct acpi_subtable_header *)VAR_9)->type) {
 case 128:
  *VAR_3 = ((struct acpi_madt_io_sapic *)VAR_9)->global_irq_base;
  VAR_5 = 0;
  break;
 case 129:
  *VAR_3 = ((struct acpi_madt_io_apic *)VAR_9)->global_irq_base;
  VAR_5 = 0;
  break;
 default:
  break;
 }
 out:
 FUNC_4(VAR_7.pointer);
 return VAR_5;
}
