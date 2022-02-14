
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int acpi_handle; } ;
struct device {TYPE_1__ archdata; int bus; int parent; } ;
struct acpi_bus_type {int (* find_device ) (struct device*,int *) ;} ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int *) ;
 struct acpi_bus_type* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,struct acpi_buffer*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct device*,int *) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3)
{
 struct acpi_bus_type *VAR_4;
 acpi_handle VAR_5;
 int VAR_6 = -VAR_2;

 if (!VAR_3->bus || !VAR_3->parent) {

  VAR_6 = FUNC_2(VAR_3, &VAR_5);
  goto end;
 }
 VAR_4 = FUNC_3(VAR_3->bus);
 if (!VAR_4) {
  FUNC_0("No ACPI bus support for %s\n", FUNC_5(VAR_3));
  VAR_6 = -VAR_2;
  goto end;
 }
 if ((VAR_6 = VAR_4->find_device(VAR_3, &VAR_5)) != 0)
  FUNC_0("Can't get handler for %s\n", FUNC_5(VAR_3));
      end:
 if (!VAR_6)
  FUNC_1(VAR_3, VAR_5);
 return VAR_6;
}
