
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bus_address; } ;
struct acpi_device {TYPE_2__* parent; TYPE_1__ flags; int dev; int removal_type; } ;
struct TYPE_6__ {int (* unbind ) (struct acpi_device*) ;} ;
struct TYPE_5__ {TYPE_3__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_2, int VAR_3)
{
 if (!VAR_2)
  return -VAR_1;

 VAR_2->removal_type = VAR_0;
 FUNC_1(&VAR_2->dev);

 if (!VAR_3)
  return 0;




 if (VAR_2->flags.bus_address) {
  if ((VAR_2->parent) && (VAR_2->parent->ops.unbind))
   VAR_2->parent->ops.unbind(VAR_2);
 }
 FUNC_0(VAR_2, VAR_0);

 return 0;
}
