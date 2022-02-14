
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; int * bus; int name; } ;
struct acpi_driver {TYPE_1__ drv; int owner; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct acpi_driver *VAR_3)
{
 int VAR_4;

 if (VAR_2)
  return -VAR_0;
 VAR_3->drv.name = VAR_3->name;
 VAR_3->drv.bus = &VAR_1;
 VAR_3->drv.owner = VAR_3->owner;

 VAR_4 = FUNC_0(&VAR_3->drv);
 return VAR_4;
}
