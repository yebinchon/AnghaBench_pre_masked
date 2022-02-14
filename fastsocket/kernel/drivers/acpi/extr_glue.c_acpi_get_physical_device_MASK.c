
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,void**) ;
 int VAR_0 ;
 struct device* FUNC_2 (struct device*) ;

struct device *FUNC_3(acpi_handle VAR_1)
{
 acpi_status VAR_2;
 struct device *VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0, (void **)&VAR_3);
 if (FUNC_0(VAR_2))
  return FUNC_2(VAR_3);
 return ((void*)0);
}
