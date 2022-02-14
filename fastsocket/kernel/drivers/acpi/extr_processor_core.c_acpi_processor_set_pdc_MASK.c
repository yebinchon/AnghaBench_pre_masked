
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef int u32 ;
struct acpi_processor {int handle; struct acpi_object_list* pdc; } ;
struct acpi_object_list {union acpi_object* pointer; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,struct acpi_object_list*,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct acpi_processor *VAR_5)
{
 struct acpi_object_list *VAR_6 = VAR_5->pdc;
 acpi_status VAR_7 = VAR_3;


 if (!VAR_6)
  return VAR_7;
 if (VAR_4) {





  union acpi_object *VAR_8;
  u32 *VAR_9 = ((void*)0);

  VAR_8 = VAR_6->pointer;
  VAR_9 = (u32 *)(VAR_8->buffer.pointer);
  VAR_9[2] &= ~(VAR_2 | VAR_1);

 }
 VAR_7 = FUNC_2(VAR_5->handle, "_PDC", VAR_6, ((void*)0));

 if (FUNC_1(VAR_7))
  FUNC_0((VAR_0,
      "Could not evaluate _PDC, using legacy perf. control...\n"));

 return VAR_7;
}
