
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {scalar_t__* pointer; } ;
struct TYPE_4__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ integer; TYPE_2__ string; TYPE_1__ package; } ;
typedef scalar_t__ u8 ;
struct acpi_offsets {int offset; scalar_t__ mode; } ;
struct acpi_battery {int dummy; } ;
typedef int acpi_integer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct acpi_battery *VAR_5,
      union acpi_object *VAR_6,
      struct acpi_offsets *VAR_7, int VAR_8)
{
 int VAR_9;
 union acpi_object *VAR_10;
 if (VAR_6->type != VAR_2)
  return -VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
  if (VAR_6->package.count <= VAR_9)
   return -VAR_4;
  VAR_10 = &VAR_6->package.elements[VAR_9];
  if (VAR_7[VAR_9].mode) {
   u8 *VAR_11 = (u8 *)VAR_5 + VAR_7[VAR_9].offset;
   if (VAR_10->type == VAR_3 ||
       VAR_10->type == VAR_0)
    FUNC_0(VAR_11, VAR_10->string.pointer, 32);
   else if (VAR_10->type == VAR_1) {
    FUNC_0(VAR_11, (u8 *)&VAR_10->integer.value,
     sizeof(acpi_integer));
    VAR_11[sizeof(acpi_integer)] = 0;
   } else
    *VAR_11 = 0;
  } else {
   int *VAR_12 = (int *)((u8 *)VAR_5 + VAR_7[VAR_9].offset);
   *VAR_12 = (VAR_10->type == VAR_1) ?
    VAR_10->integer.value : -1;
  }
 }
 return 0;
}
