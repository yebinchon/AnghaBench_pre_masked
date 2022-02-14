
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
struct atk_data {int disable_ec; int old_interface; int atk_handle; int sensor_list; struct acpi_device* acpi_dev; } ;
struct acpi_device {struct atk_data* driver_data; int dev; int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int length; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_4__ {int pointer; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ string; } ;


 int VAR_0 ;
 int FUNC_0 (union acpi_object*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,struct acpi_buffer*,int ) ;
 int FUNC_3 (struct atk_data*) ;
 int FUNC_4 (struct atk_data*) ;
 int FUNC_5 (struct atk_data*,int ) ;
 int FUNC_6 (struct atk_data*) ;
 int FUNC_7 (struct atk_data*) ;
 int FUNC_8 (struct atk_data*) ;
 int FUNC_9 (struct atk_data*) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (struct atk_data*) ;
 struct atk_data* FUNC_13 (int,int ) ;

__attribute__((used)) static int FUNC_14(struct acpi_device *VAR_8)
{
 acpi_status VAR_9;
 int VAR_10;
 struct acpi_buffer VAR_11;
 union acpi_object *VAR_12;
 struct atk_data *VAR_13;

 FUNC_10(&VAR_8->dev, "adding...\n");

 VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_6;

 VAR_13->acpi_dev = VAR_8;
 VAR_13->atk_handle = VAR_8->handle;
 FUNC_1(&VAR_13->sensor_list);
 VAR_13->disable_ec = 0;

 VAR_11.length = VAR_0;
 VAR_9 = FUNC_2(VAR_13->atk_handle, VAR_4, ((void*)0),
   &VAR_11, VAR_1);
 if (VAR_9 != VAR_3) {
  FUNC_10(&VAR_8->dev, "atk: method MBIF not found\n");
  VAR_10 = -VAR_5;
  goto out;
 }

 VAR_12 = VAR_11.pointer;
 if (VAR_12->package.count >= 2 &&
   VAR_12->package.elements[1].type == VAR_2) {
  FUNC_10(&VAR_8->dev, "board ID = %s\n",
    VAR_12->package.elements[1].string.pointer);
 }
 FUNC_0(VAR_11.pointer);






 VAR_10 = FUNC_4(VAR_13);
 if (!VAR_10) {
  FUNC_10(&VAR_8->dev, "Using old hwmon interface\n");
  VAR_13->old_interface = 1;
 } else {
  VAR_10 = FUNC_3(VAR_13);
  if (VAR_10)
   goto out;

  FUNC_10(&VAR_8->dev, "Using new hwmon interface\n");
  VAR_13->old_interface = 0;
 }

 if (VAR_13->old_interface)
  VAR_10 = FUNC_7(VAR_13);
 else
  VAR_10 = FUNC_6(VAR_13);
 if (VAR_10 < 0)
  goto out;
 if (VAR_10 == 0) {
  FUNC_11(&VAR_8->dev,
    "No usable sensor detected, bailing out\n");
  VAR_10 = -VAR_5;
  goto out;
 }

 VAR_10 = FUNC_9(VAR_13);
 if (VAR_10)
  goto cleanup;

 VAR_8->driver_data = VAR_13;
 return 0;
cleanup:
 FUNC_8(VAR_13);
out:
 if (VAR_13->disable_ec)
  FUNC_5(VAR_13, 0);
 FUNC_12(VAR_13);
 return VAR_10;
}
