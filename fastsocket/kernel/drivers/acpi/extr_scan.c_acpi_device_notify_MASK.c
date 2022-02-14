
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct acpi_device {TYPE_2__* driver; } ;
typedef int acpi_handle ;
struct TYPE_3__ {int (* notify ) (struct acpi_device*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct acpi_device*,int ) ;

__attribute__((used)) static void FUNC_1(acpi_handle VAR_0, u32 VAR_1, void *VAR_2)
{
 struct acpi_device *VAR_3 = VAR_2;

 VAR_3->driver->ops.notify(VAR_3, VAR_1);
}
