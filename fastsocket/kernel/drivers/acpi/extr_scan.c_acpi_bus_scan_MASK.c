
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_bus_ops {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct acpi_bus_ops*,void**) ;
 int FUNC_2 (int ,int ,int ,int (*) (int ,int ,struct acpi_bus_ops*,void**),struct acpi_bus_ops*,void**) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_3, struct acpi_bus_ops *VAR_4,
    struct acpi_device **VAR_5)
{
 acpi_status VAR_6;
 void *VAR_7 = ((void*)0);

 VAR_6 = FUNC_1(VAR_3, 0, VAR_4, &VAR_7);
 if (FUNC_0(VAR_6))
  FUNC_2(VAR_0, VAR_3, VAR_1,
        FUNC_1, VAR_4, &VAR_7);

 if (VAR_5)
  *VAR_5 = VAR_7;

 if (VAR_7)
  return 0;
 else
  return -VAR_2;
}
