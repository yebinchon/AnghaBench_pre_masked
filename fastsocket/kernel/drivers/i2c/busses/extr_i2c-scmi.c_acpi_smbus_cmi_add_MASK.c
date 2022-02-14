
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int class; TYPE_1__ dev; struct acpi_smbus_cmi* algo_data; int * algo; int owner; int name; } ;
struct acpi_smbus_cmi {scalar_t__ cap_info; TYPE_2__ adapter; int handle; scalar_t__ cap_write; scalar_t__ cap_read; } ;
struct acpi_device {struct acpi_smbus_cmi* driver_data; int dev; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (struct acpi_device*) ;
 char* FUNC_1 (struct acpi_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int,int ,struct acpi_smbus_cmi*,int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct acpi_smbus_cmi*) ;
 struct acpi_smbus_cmi* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int,char*,char*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct acpi_device *VAR_11)
{
 struct acpi_smbus_cmi *VAR_12;

 VAR_12 = FUNC_6(sizeof(struct acpi_smbus_cmi), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->handle = VAR_11->handle;
 FUNC_8(FUNC_1(VAR_11), VAR_1);
 FUNC_8(FUNC_0(VAR_11), VAR_0);
 VAR_11->driver_data = VAR_12;
 VAR_12->cap_info = 0;
 VAR_12->cap_read = 0;
 VAR_12->cap_write = 0;

 FUNC_2(VAR_2, VAR_12->handle, 1,
       VAR_10, VAR_12, ((void*)0));

 if (VAR_12->cap_info == 0)
  goto err;

 FUNC_7(VAR_12->adapter.name, sizeof(VAR_12->adapter.name),
  "SMBus CMI adapter %s",
  FUNC_1(VAR_11));
 VAR_12->adapter.owner = VAR_8;
 VAR_12->adapter.algo = &VAR_9;
 VAR_12->adapter.algo_data = VAR_12;
 VAR_12->adapter.class = VAR_6 | VAR_7;
 VAR_12->adapter.dev.parent = &VAR_11->dev;

 if (FUNC_4(&VAR_12->adapter)) {
  FUNC_3(&VAR_11->dev, "Couldn't register adapter!\n");
  goto err;
 }

 return 0;

err:
 FUNC_5(VAR_12);
 VAR_11->driver_data = ((void*)0);
 return -VAR_3;
}
