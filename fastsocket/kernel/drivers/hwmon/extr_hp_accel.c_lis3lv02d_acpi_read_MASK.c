
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
typedef unsigned long long u8 ;
struct lis3lv02d {struct acpi_device* bus_priv; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {int handle; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

int FUNC_1(struct lis3lv02d *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct acpi_device *VAR_6 = VAR_3->bus_priv;
 union acpi_object VAR_7 = { VAR_0 };
 struct acpi_object_list VAR_8 = { 1, &VAR_7 };
 unsigned long long VAR_9;
 acpi_status VAR_10;

 VAR_7 = VAR_4;

 VAR_10 = FUNC_0(VAR_6->handle, "ALRD", &VAR_8, &VAR_9);
 *VAR_5 = VAR_9;
 return (VAR_10 != VAR_1) ? -VAR_2 : 0;
}
