
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,void**) ;

int FUNC_3(acpi_handle VAR_5, struct acpi_device **VAR_6)
{
 acpi_status VAR_7 = VAR_1;


 if (!VAR_6)
  return -VAR_2;



 VAR_7 = FUNC_2(VAR_5, VAR_4, (void **)VAR_6);
 if (FUNC_1(VAR_7) || !*VAR_6) {
  FUNC_0((VAR_0, "No context for object [%p]\n",
      VAR_5));
  return -VAR_3;
 }

 return 0;
}
