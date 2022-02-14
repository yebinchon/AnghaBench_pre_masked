
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topstar_hkey {int dummy; } ;
struct acpi_device {struct topstar_hkey* driver_data; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (struct acpi_device*,int) ;
 scalar_t__ FUNC_3 (struct topstar_hkey*) ;
 int FUNC_4 (struct topstar_hkey*) ;
 struct topstar_hkey* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_4)
{
 struct topstar_hkey *VAR_5;

 VAR_5 = FUNC_5(sizeof(struct topstar_hkey), VAR_3);
 if (!VAR_5)
  return -VAR_2;

 FUNC_6(FUNC_1(VAR_4), "Topstar TPSACPI");
 FUNC_6(FUNC_0(VAR_4), VAR_0);

 if (FUNC_2(VAR_4, 1))
  goto add_err;

 if (FUNC_3(VAR_5))
  goto add_err;

 VAR_4->driver_data = VAR_5;
 return 0;

add_err:
 FUNC_4(VAR_5);
 return -VAR_1;
}
