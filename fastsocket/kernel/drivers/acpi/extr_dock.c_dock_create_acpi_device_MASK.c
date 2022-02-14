
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device**,struct acpi_device*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static struct acpi_device * FUNC_4(acpi_handle VAR_1)
{
 struct acpi_device *VAR_2 = ((void*)0);
 struct acpi_device *VAR_3;
 acpi_handle VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_1, &VAR_2)) {




  FUNC_2(VAR_1, &VAR_4);
  if (FUNC_1(VAR_4, &VAR_3))
   VAR_3 = ((void*)0);

  VAR_5 = FUNC_0(&VAR_2, VAR_3, VAR_1,
   VAR_0);
  if (VAR_5) {
   FUNC_3("error adding bus, %x\n",
    -VAR_5);
   return ((void*)0);
  }
 }
 return VAR_2;
}
