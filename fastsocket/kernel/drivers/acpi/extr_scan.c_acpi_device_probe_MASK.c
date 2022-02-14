
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int driver; } ;
struct TYPE_4__ {int (* remove ) (struct acpi_device*,int ) ;scalar_t__ notify; } ;
struct acpi_driver {int name; TYPE_1__ ops; } ;
struct TYPE_5__ {int bus_id; } ;
struct TYPE_6__ {scalar_t__ acpi_op_start; } ;
struct acpi_device {TYPE_2__ pnp; int removal_type; TYPE_3__ bus_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_device*,struct acpi_driver*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct acpi_device*,int ) ;
 struct acpi_device* FUNC_6 (struct device*) ;
 struct acpi_driver* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device * VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_6(VAR_1);
 struct acpi_driver *VAR_3 = FUNC_7(VAR_1->driver);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4) {
  if (VAR_2->bus_ops.acpi_op_start)
   FUNC_3(VAR_2);

  if (VAR_3->ops.notify) {
   VAR_4 = FUNC_2(VAR_2);
   if (VAR_4) {
    if (VAR_3->ops.remove)
     VAR_3->ops.remove(VAR_2,
           VAR_2->removal_type);
    return VAR_4;
   }
  }

  FUNC_0((VAR_0,
   "Found driver [%s] for device [%s]\n",
   VAR_3->name, VAR_2->pnp.bus_id));
  FUNC_4(VAR_1);
 }
 return VAR_4;
}
