
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct thermal_cooling_device *VAR_3, unsigned long VAR_4)
{
 struct acpi_device *VAR_5 = VAR_3->devdata;
 int VAR_6;

 if (!VAR_5 || (VAR_4 != 0 && VAR_4 != 1))
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_5->handle,
    VAR_4 ? VAR_0 : VAR_1);

 return VAR_6;
}
