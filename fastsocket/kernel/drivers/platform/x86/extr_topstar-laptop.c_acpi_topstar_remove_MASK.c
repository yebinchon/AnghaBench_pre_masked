
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topstar_hkey {int inputdev; } ;
struct acpi_device {int dummy; } ;


 struct topstar_hkey* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct topstar_hkey*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_0, int VAR_1)
{
 struct topstar_hkey *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, 0);

 FUNC_2(VAR_2->inputdev);
 FUNC_3(VAR_2);

 return 0;
}
