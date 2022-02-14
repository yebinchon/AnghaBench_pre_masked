
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * acpi_handle; } ;
struct device {TYPE_2__ archdata; int kobj; } ;
struct TYPE_3__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *,struct acpi_device**) ;
 int FUNC_1 (int *,int ) ;
 struct device* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 if (!VAR_1->archdata.acpi_handle)
  return 0;
 if (VAR_1 == FUNC_2(VAR_1->archdata.acpi_handle)) {
  struct acpi_device *VAR_2;


  FUNC_4(VAR_1);

  if (!FUNC_0(VAR_1->archdata.acpi_handle,
     &VAR_2)) {
   FUNC_5(&VAR_1->kobj, "firmware_node");
   FUNC_5(&VAR_2->dev.kobj, "physical_node");
  }

  FUNC_1(VAR_1->archdata.acpi_handle,
     VAR_0);
  VAR_1->archdata.acpi_handle = ((void*)0);

  FUNC_4(VAR_1);
 } else {
  FUNC_3(VAR_1, "Oops, 'acpi_handle' corrupt\n");
 }
 return 0;
}
