
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ package; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (union acpi_object*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_3, int *VAR_4)
{
 struct acpi_buffer VAR_5 = {VAR_0, ((void*)0)};
 acpi_status VAR_6;
 union acpi_object *VAR_7;
 int VAR_8, VAR_9, VAR_10 = -VAR_2;

 VAR_6 = FUNC_1(VAR_3, "_PUR", ((void*)0), &VAR_5);
 if (FUNC_0(VAR_6))
  return -VAR_2;
 VAR_7 = VAR_5.pointer;
 if (VAR_7->type != VAR_1 || VAR_7->package.count != 2)
  goto out;
 VAR_8 = VAR_7->package.elements[0].integer.value;
 VAR_9 = VAR_7->package.elements[1].integer.value;
 if (VAR_8 != 1)
  goto out;
 *VAR_4 = VAR_9;
 VAR_10 = 0;
out:
 FUNC_2(VAR_5.pointer);
 return VAR_10;
}
