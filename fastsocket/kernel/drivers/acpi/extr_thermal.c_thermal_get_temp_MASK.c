
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct acpi_thermal {int kelvin_offset; int temperature; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (struct acpi_thermal*) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_1,
       unsigned long *VAR_2)
{
 struct acpi_thermal *VAR_3 = VAR_1->devdata;
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = FUNC_0(VAR_3->temperature, VAR_3->kelvin_offset);
 return 0;
}
