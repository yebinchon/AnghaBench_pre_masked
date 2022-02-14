
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_eject_event {int event; int handle; } ;
struct TYPE_2__ {scalar_t__ eject_pending; int ejectable; } ;
struct acpi_device {TYPE_1__ flags; int handle; int * driver; } ;
typedef int ssize_t ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,void*) ;
 struct acpi_eject_event* FUNC_4 (int,int ) ;
 struct acpi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_8, struct device_attribute *VAR_9,
  const char *VAR_10, size_t VAR_11)
{
 int VAR_12 = VAR_11;
 acpi_status VAR_13;
 acpi_object_type VAR_14 = 0;
 struct acpi_device *VAR_15 = FUNC_5(VAR_8);
 struct acpi_eject_event *VAR_16;

 if ((!VAR_11) || (VAR_10[0] != '1')) {
  return -VAR_3;
 }

 if (VAR_15->driver == ((void*)0)) {
  VAR_12 = -VAR_4;
  goto err;
 }

 VAR_13 = FUNC_2(VAR_15->handle, &VAR_14);
 if (FUNC_0(VAR_13) || (!VAR_15->flags.ejectable)) {
  VAR_12 = -VAR_4;
  goto err;
 }

 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  VAR_12 = -VAR_5;
  goto err;
 }

 VAR_16->handle = VAR_15->handle;
 if (VAR_15->flags.eject_pending) {

  VAR_16->event = VAR_0;
  VAR_15->flags.eject_pending = 0;
 } else {

  VAR_16->event = VAR_1;
  (void) FUNC_1(VAR_16->handle,
   VAR_16->event, VAR_2, ((void*)0));
 }

 FUNC_3(VAR_7, (void *)VAR_16);
err:
 return VAR_12;
}
