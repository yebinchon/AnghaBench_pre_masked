
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int bus_id; int device_class; } ;
struct acpi_device {TYPE_1__ pnp; } ;
struct acpi_bus_event {void* data; void* type; int bus_id; int device_class; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,void*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct acpi_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct acpi_bus_event VAR_6;

 FUNC_1(VAR_6.device_class, VAR_3->pnp.device_class);
 FUNC_1(VAR_6.bus_id, VAR_3->pnp.bus_id);
 VAR_6.type = VAR_4;
 VAR_6.data = VAR_5;
 return (FUNC_0(&VAR_2, 0, (void *)&VAR_6)
                        == VAR_1) ? -VAR_0 : 0;
}
