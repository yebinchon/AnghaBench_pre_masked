
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int handle; } ;
struct TYPE_7__ {int count; union acpi_object* elements; } ;
struct TYPE_6__ {scalar_t__ value; } ;
union acpi_object {scalar_t__ type; TYPE_5__ reference; TYPE_2__ package; TYPE_1__ integer; } ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int count; int * handles; } ;
struct TYPE_9__ {TYPE_3__ resources; scalar_t__ sleep_state; scalar_t__ gpe_number; int gpe_device; } ;
struct acpi_device {TYPE_4__ wakeup; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static acpi_status
FUNC_0(struct acpi_device *VAR_8,
          union acpi_object *VAR_9)
{
 int VAR_10 = 0;
 union acpi_object *VAR_11 = ((void*)0);

 if (!VAR_8 || !VAR_9 || (VAR_9->package.count < 2))
  return VAR_5;

 VAR_11 = &(VAR_9->package.elements[0]);
 if (!VAR_11)
  return VAR_5;
 if (VAR_11->type == VAR_3) {
  if ((VAR_11->package.count < 2) ||
      (VAR_11->package.elements[0].type !=
       VAR_2)
      || (VAR_11->package.elements[1].type != VAR_1))
   return VAR_4;
  VAR_8->wakeup.gpe_device =
      VAR_11->package.elements[0].reference.handle;
  VAR_8->wakeup.gpe_number =
      (u32) VAR_11->package.elements[1].integer.value;
 } else if (VAR_11->type == VAR_1) {
  VAR_8->wakeup.gpe_number = VAR_11->integer.value;
 } else
  return VAR_4;

 VAR_11 = &(VAR_9->package.elements[1]);
 if (VAR_11->type != VAR_1) {
  return VAR_4;
 }
 VAR_8->wakeup.sleep_state = VAR_11->integer.value;

 if ((VAR_9->package.count - 2) > VAR_0) {
  return VAR_6;
 }
 VAR_8->wakeup.resources.count = VAR_9->package.count - 2;
 for (VAR_10 = 0; VAR_10 < VAR_8->wakeup.resources.count; VAR_10++) {
  VAR_11 = &(VAR_9->package.elements[VAR_10 + 2]);
  if (VAR_11->type != VAR_2)
   return VAR_4;

  VAR_8->wakeup.resources.handles[VAR_10] = VAR_11->reference.handle;
 }

 return VAR_7;
}
