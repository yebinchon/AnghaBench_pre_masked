
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unbind; int bind; } ;
struct acpi_device {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct acpi_device *VAR_2)
{
 VAR_2->ops.bind = VAR_0;
 VAR_2->ops.unbind = VAR_1;

 return 0;
}
